/* This function returns the factorial of a integer number
    Parameters:
        int n -> integer number
    Return:
        int -> factorial of n */
int factorial(int n){

    if(n <= 1){
        return 1;
    }

    return n * factorial(n-1);
}