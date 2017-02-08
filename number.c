int integer; /*an integer */
float floating; /* a floating-point number */

int main(){
		floating = 1.0 / 2.0; /* 0.5 */
		integer =  1 / 3; /*0 */
		floating = (1/2) + (1/2); /* 0.0 */
		floating = 3.0 / 2.0; /* 1.5 */
		integer = floating; /*1*/
		return (0);
	}