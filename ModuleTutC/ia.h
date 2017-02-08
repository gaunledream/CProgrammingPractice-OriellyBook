/******************************
*Dfinitions for the infinite array (ia) package
* 
* An infinte array is an array whose size can grow as needed
* adding more elements to the array will just cause it 
* to grow. *
*-------------------------------*
*struct infinite_array			*
*	used to hold the information for an infinte *
* 	array. 			*
*-------------------------------*
* Routines 					*
*							*
*	ia_init -- Initialized the array
*	ia_store -- sotres an element in the array
*	ia_get -- gets an element from an array
*-------------------------------*/
//number of elemenets to store in each cell of the infinite array 
#define BLOCK_SIZE 10

struct infinite_array{
	//the data for this block
	float data[BLOCK_SIZE];
	//pointer to the next array
	struct infinite_array *next;
};
/**********************************
*	ia_init --intializes the infinte array
*	parameters:
*		array_ptr -- the array to initialize
**********************************/
#define ia_init(array_ptr)		{(array_ptr)->next = NULL;}

/*****************************
* ia_get --Gets an element from an infinite array
* parameters
*	- array_ptr -- Pointer to the array to use
*	- index -- index into the array
* Returns
* 	- the value of the element
* Note you can get an element that
*	has not previously been stored. The
* 	Value of any uninitilized element is zero
*****************************/
extern int ia_get(struct infinite_array *array_ptr, int index);

/********************************************************
* ia_store -- Store an element in an infinite array.
*
*
*
* Parameters
*
* array_ptr -- Pointer to the array to use.
* index-- index into the array.
* store_data -- Data to store.
*
*
*
********************************************************/
extern void
ia_store(struct infinite_array * array_ptr,
int index, int store_data);