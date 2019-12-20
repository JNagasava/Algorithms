/* Function to merge arrays
    Parameters:
        int* array -> array of int values
        int begin -> index of begin 
        int end -> index of end */
void conquer(int* array, int begin, int end){

    int temp_size = end - begin + 1;
    int array_temp[temp_size];
    int middle = ((begin + end) / 2) + 1;
    int k = 0, i = begin, j = middle;

    while(k < temp_size){

        if(array[i] < array[j]){

            array_temp[k++] = array[i++];
        }

        else{

            array_temp[k++] = array[j++];
        }

        if(i >= middle || j > end){

            if(i >= middle){

                while(j <= end){

                    array_temp[k++] = array[j++];
                }
            }

            else{

                while(i < middle){

                    array_temp[k++] = array[i++];
                }
            }
        }
    }

    for(int i = begin, j = 0; i <= end; i++, j++){

        array[i] = array_temp[j];
     }
}

/* Function to divide arrays 
    Parameters:
        int* array -> array of int values
        int begin -> index of begin 
        int end -> index of end */
void divide(int* array, int begin, int end){

    if(begin < end){

        int middle = (begin + end) / 2;
        divide(array, begin, middle);
        divide(array, middle + 1, end);
        conquer(array, begin, end);
    }
}

/* Sort function 
    Parameters:
        int* array -> array of int values
        int array_size -> length of array */
void merge_sort(int* array, int array_size){

    divide(array, 0,  array_size - 1);
}