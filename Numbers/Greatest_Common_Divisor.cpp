//Another name for this algorithm is Euclidean Algorithm

int GCD(int n){
  int buffer;
 
  while(b!=0){
    buffer=b;
    b=a%b;
    a=buffer;
  }
  return a;
}
