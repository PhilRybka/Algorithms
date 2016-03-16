//a, b, c are lengths of a triangle's sides, the functions checks if a triangle with these sides is valid

bool triangle (int a, int b, int c)
{
  return (a>0 && b>0 && c>0 && a+b>&& a+c>b && b+c>a);
}

