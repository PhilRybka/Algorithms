//Prints n numbers of the Fibonacci sequence using iteration

void fib(int n){
    long long a=0,b=1;
    for(int i=0;i<n;i++){
        cout<<b<<" ";
        b += a; 
        a = b-a;
    }
}
