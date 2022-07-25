#include<iostream>
using namespace std;

selectionsort(int a[],int n)
{

int i,j,temp,small;

for(j=0;j<n-1;j++)
{
    small=j;
    for(i=j+1;i<n;i++)
    {
        if(a[i]<a[small])
        {
            small=i;
        }
    }
     temp=a[j];
     a[j]=a[small];
     a[small]=temp;
     //printing pass->>>>
     cout<<"\n\npass "<<j+1<<" ";
     for(int r=0; r<n; r++)
        cout<<" \t" <<a[r];
}
}
int main()
{
    int a[50],i,n;
    cout<<"Enter no. of element : ";
    cin>>n;
    cout<<"Entered "<< n <<" elements: ";
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<"\n\nBefore sorting the elements are->>>>>>  ";
    for(i=0; i<n; i++)
        cout<<" " <<a[i];
        cout<<"\n";

  selectionsort(a,n);

   cout<<"\n";
   cout<<"\n\nafter sorting the elements are->>>>>> ";
    for(i=0; i<n; i++)
        cout<<" \t" <<a[i];

}
