#include<iostream>
using namespace std;
void swap(int arr[], int i, int j) //swap function for swapping two elements. 
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r) //partition function for partitioning the array.
{
    int pivot = arr[r];
    int i = l -1;

    for(int j = l; j<r; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;

}

void quickSort(int arr[],int l, int r) //quicksort function for sorting the array.
{
    if(l<r)
    {
        int pi = partition(arr, l,r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);

    }
}



int main()
{
    int arr[100],n,i;
    cout<<"Enter number of element :"; //input number of elements.
    cin>>n;
    cout<<"Enter elements : "<<endl; //input elements.
    for(i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Quicksort"<<endl; //print before quicksort.
    for(i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    quickSort(arr, 0,n-1); //quicksort function call.
    cout<<endl<<"After Quicksort"<<endl; //print after quicksort.
    for(i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
