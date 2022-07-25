#include<iostream>
using namespace std;

insertionSort(int a[],int n)

{   int i,j,key;
   for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
           i=i-1;
        }
        a[i+1]=key;

        cout<<"\n\npass "<<j<<" : ";
        for(int r=0;r<n;r++)

            cout<<" "<<a[r];
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
    cout<<"\n\nBefore sorting the elements are->>>>>> ";
    for(i=0; i<n; i++)
        cout<<"\t" <<a[i];


     insertionSort(a,n);

    cout<<"\n\nafter sorting the elements are->>>>>> ";
    for(i=0; i<n; i++)
        cout<<" \t" <<a[i];

}
