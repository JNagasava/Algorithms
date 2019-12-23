/* Funtion to calculate the Nth term of fibonacci sequence (iterative function)
    Parameter:
        int n -> index of n-term
    Return:
        int -> value of Nth term */
int fibonacci(int n){

    if(n < 0){
        return -1;
    }

    if(n == 0){
        return 1;
    }

    int sequence[n+1];
    sequence[0] = 1;
    sequence[1] = 1;

    for(int i = 2; i <= n; i++){

        sequence[i] = sequence[i - 1] + sequence[i - 2];
    }

    return sequence[n];

}