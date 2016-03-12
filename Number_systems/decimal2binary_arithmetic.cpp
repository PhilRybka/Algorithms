string dec2bin(int n){
    string bin;
    char buffer=' ';
    while(n!=0)
    {
        buffer=n%2+'0';
        bin=buffer+bin;
        n/=2;
    }
    return bin;
}
