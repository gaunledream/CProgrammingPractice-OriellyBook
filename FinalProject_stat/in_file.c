/********************************************************
* infile module
* 	Handles opening, reading, and display of data from the input file.
* 
* Functions:
* in_open -- Opens the input file.
* in_close -- Closes the input file.
* read_char -- Reads the next character
* in_char_char -- Returns the current character.
* in_next_char -- Returns the next character.
* in_flush -- Sends line to the screen.
********************************************************/
#include <stdio.h>
#include <errno.h>

#include "in_file.h"
#define LINE_MAX 500 //longest possible inline

struct input_file{
	FILE *file; //file we are reading
	char line[LINE_MAX]; //current line
	char *char_ptr; //current char on the line
	int cur_char; //current char (can be EOF)
	int next_char; //next char (can be EOF)
};
//input file that we are reading
static struct input_file in_file = {
	NULL, //file
	"", //line
	NULL, //char_ptr
	'\0', //cur_char
	'\0' //next char
};
/********************************************************
* in_open -- Opens the input file.
* Parameters
* name -- Name of disk file to use for input.
*
* Returns
* 0 -- Open succeeded.
* nonzero -- Open failed.
********************************************************/
int in_open(const char name[]){
	in_file.file = fopen(name, "r");
	if (in_file.file == NULL)
		return (errno);
	//initializes the input file and read the first two characters
	in_file.cur_char = fgetc(in_file.file);
	in_file.next_char = fgetc(in_file.file);
	in_file.char_ptr = in_file.line;
	return (0);
}
/********************************************************
* in_close -- Closes the input file.
*
********************************************************/
void in_close(void){
	if (in_file.file != NULL){
		fclose(in_file.file);
		in_file.file = NULL;
	}
}
/********************************************************
* in_cur_char -- Gets the current input character.
* Returns
* current character.
********************************************************/
int in_cur_char(void){
	return (in_file.cur_char);
}
/********************************************************
* in_next_char -- Peeks ahead one character.
*
* Returns
* next character.
********************************************************/
int in_next_char(void){
	return (in_file.next_char);
}
/********************************************************
* in_flush -- Flushes the buffered input line to the screen.
*
********************************************************/
void in_flush(void){
	*in_file.char_ptr = '\0'; //end the line
	fputs(in_file.line, stdout); //send the line
	in_file.char_ptr = in_file.line; //reset the line
}
/********************************************************
* in_read_char -- Reads the next character from the
*
input file.
*
*
********************************************************/
void in_read_char(void){
	*in_file.char_ptr = in_file.cur_char;
	++in_file.char_ptr;
	in_file.cur_char = in_file.next_char;
	in_file.next_char = fgetc(in_file.file);
}