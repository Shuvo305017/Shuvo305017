#include<iostream>
using namespace std;

void  mergeA(int a[],int low,int mid,int high)
{

    int b[50],i,j,k;
    i=low;
    j=mid+1;
    k=low;
    while((i<=mid) && (j<=high))
{
    if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }

        else
        {
            b[k]=a[j];
            j++;
            k++;

        }

    }

    while(i<=mid)
{

        b[k] =a[i];
        i++;
        k++;
    }
    while(j<=mid)
{

       b[k]=a[j];
        k++;
        j++;
    }

    int r=low;
      while(r<k)
     {

        a[r] =b[r];
        r++;
     }

}

void  mergeSort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
         mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        mergeA(a,low,mid,high);
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

    mergeSort(a,0,n-1);


    cout<<"\n\nafter sorting the elements are->>>>>> ";
    for(i=0; i<n; i++)
        cout<<" \t" <<a[i];

}
