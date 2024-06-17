#include <bits/stdc++.h>
using namespace std;
// Done and dusted merge sort...
void merge(int *arr,int low,int mid,int high){
     int i=low,j=mid+1;
     int ctr=0;
     int temp[(high-low)+1];
      while(i<mid+1&&j<high+1){
        if(arr[i]<=arr[j]){ 
          temp[ctr]=arr[i];
            i++;
            
        }
        else{ 
            temp[ctr]=arr[j];
            j++;
        }
        ctr++;
        
     }
      while(i<mid+1){
         temp[ctr]=arr[i];
        i++;
          ctr++;
         
      }
     while(j<high+1){
          temp[ctr]=arr[j];
            j++;
              ctr++;
         
     }
     
     for(int i=low;i<=high;i++){ 
        arr[i]=temp[i-low];
     }
      
}

void mergeSort(int *arr,int low,int high){
    if(low==high)return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);

}

int main()
{   cout<<"Enter the size"<<endl;
    int size;
    cin>>size;
   int *arr=new int[size];
   cout<<endl;
   cout<<"Enter array elements "<<endl;
    for(int i=0;i<size;i++){ 
        cin>>arr[i];
    }

   mergeSort(arr,0,size-1);
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   
    

    return 0;


}
