//scan a file and print out a list of words in ASCII order
//Usage: words <file>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

struct node{
	char *word;
	struct node *left;
	struct node *right;
};

//the top of the tree
static struct node *root = NULL;
//memory_error - writes erro and dies
void memory_error(void){
	fprintf(stderr, "Error: out of memory\n");
	exit(8);
}
//save_string - saves a sting on the heap
//parameters string - string to save
//returns pointer to malloc-ed section of memory with the string copied into it

char *save_string(char *string){
	char *new_string; //where we put string 
	new_string = malloc((unsigned)(strlen(string)+1));
	if (new_string == NULL)
		memory_error();
	strcpy(new_string, string);
	return (new_string);
}
//enter - enters a word into the tree
//params - node - current node we are looking at, word - word to enter

void enter(struct node **node, char *word){
	int result; //result of strcmp
	char *save_string(char *); //save a string on the heap
	if ((*node)==NULL){
		(*node) = malloc(sizeof(struct node));
		if ((*node)==NULL)
			memory_error();
			
		(*node)->left = NULL;
		(*node)->right = NULL;
		(*node)->word = save_string(word);
		return;
	}
	result = strcmp((*node)->word, word);
	if (result == 0)
		return;
	if (result < 0)
		enter(&(*node)->right, word);
	else
		enter(&(*node)->left, word);
}
//scan - scan file for words 
//params - name - name of the file to scan

void scan(char *name){
	char word[100]; //word we are working on
	int index; //index in to the word
	int ch; //current char
	FILE *in_file; //input file
	in_file = fopen(name, "r");
	if (in_file == NULL)
	{
		fprintf(stderr, "Error: unable to open %s\n", name);
		exit(8);
	}
	while(1){
		//scan past the whitespace
		while(1){
			ch = fgetc(in_file);
			if(isalpha(ch)||ch==EOF)
				break;
		}
		if (ch==EOF)
			break;
		word[0] = ch;
		for (index = 1; index < sizeof(word); ++index){
			ch = fgetc(in_file);
			if(!isalpha(ch))
				break;
			word[index] = ch;
		}
		word[index] = '\0';
		enter(&root, word);
	}
	fclose(in_file);
}
//print_tree - prints the word in tree
//param - top - the root of the tree to print

void print_tree(struct node *top){
	if (top==NULL)
		return;
	print_tree(top->left);
	printf("%s\n",top->word);
	print_tree(top->right);
}

int main(int argc, char *argv[]){
	if (argc != 2){
		fprintf(stderr, "Error: wrong no of params\n");
		fprintf(stderr, "     on the command line\n");
		fprintf(stderr, "Usages is: \n");
		fprintf(stderr, "     words 'file'\n");
		exit(8);
	}
	scan(argv[1]);
	print_tree(root);
	return 0;
}