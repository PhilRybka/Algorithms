//Returns the distance between pint A and B on the number line using absolute value

int distance(int a, int b){
  int difference=a-b;
  if(difference>=0) return difference;
  return -difference;
}
