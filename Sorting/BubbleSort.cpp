void bubbleSort(int tab[],int n)
{
  for(int i=0;i<n;i++)
    for(int j=1;j<n-i;j++) //inner loop
      if(tab[j-1]>tab[j])
        swap(tab[j-1], tab[j]);
}
