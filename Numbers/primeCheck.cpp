//checks if given number is a prime number

bool isPrime(int n){
    for(int i=2;i*i<=n;i++)				//optimalized version, no need to loop until n
        if(n%i==0) return false;
    return true;
}
