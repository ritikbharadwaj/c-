#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
      int s = 1;
      int e = n;
      
      int mid = s + (e-s)/2;

      while (s <= e)
      {
        if (arr[mid] == key)
        {
            return mid;
        }
        
        if (arr[mid]< key)
        {
            s= mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
        
      }
      return s;
}

int main()
{
    int arr[100],n;
    cout<<"enter the space in the array u want= ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    int key=0;
    cout<<"enter the key u want to search= ";
    cin>>key;
    cout<<"the number is present at index= "<<binarysearch(arr, n, key);
    return 0;
}