#include <iostream>
using namespace std;
int arr[10],n,x;
int BinarySearch(int low,int high)
{
    if(low>high)
    {
        return -1;
    }
    else{
        int mid=(high+low)/2;
        if(arr[mid]==x)
        {
            return mid; 
        }
        else if(arr[mid]>x)
        {
            return BinarySearch(low,mid-1); 
        }
        else
        {
            return BinarySearch(mid+1,high);
        }

    }
}

int main()

{
  
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter elements of array in ascending order: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter a number to search in array: "<<endl;
    cin>>x;

  
    int result=BinarySearch(0,n-1);
    if(result==-1)
    {
        cout<<x<<" is not present in array"<<endl;
    }
    else
    {
        cout<<x<<" is present at index "<<result<<endl;
    }

    return 0;
}