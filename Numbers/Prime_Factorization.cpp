//Performs prime factorization on given number

void prime_factorization(int n){
  int k=2;
  while(n>1){
    while(n%k==0){
      cout<<k<<" ";
      n/=k;
    }
    ++k;
  }
}
