/* This function does a swap between 2 integers
    Parameters:
        int* a -> pointer of an integer number
        int* b -> pointer of an integer number */
void swap(int* a, int* b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

/* This function does swaps in the array from a pivot number
    Parameters:
        int* array -> array of integers
        int low -> initial array's position
        int high -> last array's position 
    Return:
        int -> return pivot's position */
int conquer(int* array, int low, int high){
    
    //pi = pivot (last number)
    int pi = array[high];
    int i = low - 1;

    //Swap
    for(int j = low; j < high; j++){

        if(array[j] < pi){

            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);

    //Return the position of pivot in array
    return i + 1;
}

/* This function does divides the array 
    Parameters:
        int* array -> array of integers
        int low -> initial array's position
        int high -> last array's position  */
void divide(int* array, int low, int high){

    if(low < high){
        
        int partition = conquer(array, low, high);
        divide(array, low, partition - 1);
        divide(array, partition + 1, high);
    }
}

/* This function does a quick sort 
    Parameters:
        int* array -> array of integers
        int array_size -> array's length */
void quick_sort(int* array, int array_size){

    divide(array, 0, array_size - 1);
}