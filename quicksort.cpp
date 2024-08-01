class Solution
{
     public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=low;
       int i=low;
       int j=high;
       while(i<j)
    {
           while(arr[i]<=arr[pivot]&&i<=high)
           i++;
           while(arr[j]>arr[pivot]&&j>=low)
           j--;
           swap(arr[i],arr[j]);
       }
     swap(arr[low],arr[j]);
       
    }
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
        {int pindex=partition(arr,low,high);
        quickSort(arr,low,pindex-1);
        quickSort(arr,pindex+1,high);
            
        }
    }
    
   
};