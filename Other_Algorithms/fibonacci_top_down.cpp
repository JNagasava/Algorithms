/* Funtion to calculate the Nth term of fibonacci sequence (recursive function)
    Parameter:
        int n -> index of n-term
    Return:
        int -> value of Nth term */
int fibonacci(int n){

    if(n < 0){
        
        return 0;
    }

    if (n == 0){
        
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}