bool palindrome(string s){
  int siz=s.size();
  for(int i=0;i<siz/2;i++)              //it's sufficient to only loop until reaching the middle of the string to check whether it's a palindrome
    if(s[i]!=s[siz-1-i])return false;
  return true;
}
