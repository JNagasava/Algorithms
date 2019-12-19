/* It sorts a array of int values with complexity O(n²) -> Ascending Order
    Parameter:
        int* array -> array of int values */
void insertion_sort(int* array, int array_size){

    // Sorting
    for(int i = 1; i < array_size; i++){

        int temp = array[i];
        int j = i - 1;

        while(temp < array[j] && j >= 0){
            
            array[j + 1] = array[j];
            array[j] = temp;
            j--;
        }
    }
}