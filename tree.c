struct node{
	char *data;
	struct node *left;
	struct node *right;
};

void enter(struct node **node, char *word){
	int result; //result of strcmp
	char *save_string(); //save a string on the heap
	void memory_error(); //tell user no more room
	//if the current node is Null
	if ((*node) == NULL){
		(*node) = malloc(sizeof(struct node));
		if ((*node)==NULL)
			memory_error();
		
		(*node)->left = NULL;
		(*node)->right = NULL;
		(*node)->word = save_string(word);
		return;
	}
	//check to see where our  word goes
	result = strcmp((*node)->word, word);
	if (result == 0)
		return;
	if (result < 0)
		enter(&(*node)->right, word);
	else
		enter(&(*node)->left, word);
}
void print_tree(struct node *top){
	if (top == NULL)
		return;
	print_tree(top->left);
	printf("%s\n", top->word);
	print_tree(top->right);
}
//tree is used in words later