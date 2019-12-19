/* It sorts an array of int values with complexity O(n²) -> Ascending Order
    Parameter:
        int* array -> array of int values 
        int array_size -> size of array */
void insertion_sort(int* array, int array_size){

    // Sorting
    for(int i = 1; i < array_size; i++){

        int temp = array[i];
        int j = i - 1;

        while(j >= 0 && temp < array[j]){
            
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = temp;
    }
}