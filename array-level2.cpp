#include<iostream>
using namespace std;
//function to print triplets --->>
// void printtriplets(int arr[] , int size){
//     for (int i = 0; i < size; i++)
//     {
//        for (int j =0; j < size; j++)
//        {
//         for (int k = 0; k < size; k++)
//         {
//             cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
//         }
        
//        }
       
//     }
// }

// /function to sort '0's and '1's --->
// void sort_zero_one(int arr[], int n){
//     int zero_count = 0;
//     int one_count = 0;
//     //count zero's and one's--->
//     for (int i = 0; i < n; i++)
//     {
//        if (arr[i] == 0)
//        {
//         zero_count++;
//        }
//        if (arr[i] == 1)
//        {
//         one_count++;
//        }
//     }

    //place all zero's first then one's using for loop --->
    //  int i;
    //  for (  i = 0; i < zero_count; i++)
    //  {
    //    arr[i] = 0;
    //  }
    //  for (int  j = i; j < n; j++)
    //  {
    //    arr[j] = 1;
    //  }


    //place all zero's first then one's using while loop--->

//     int index = 0;
//     while (zero_count--)
//     {
//         arr[index] = 0;
//         index++;
//     }
//     while (one_count--)
//     {
//         arr[index] = 1;
//         index++;
//     }
    
     
// }


//funcion to move forward each element by one index --->>
// void movearr_element(int arr[], int n){
//     int temp = arr[n-1];
   
//     for (int i = n-1; i >0; i--)
//     {
//        arr[i] = arr[i-1];
      
//     }
//      arr[0 ] = temp;
// }
//funcion to move backword each element by one index --->>
// void movearr_element(int arr[], int n){
//     int temp = arr[0];
   
//     for (int i = 0; i<n; i++)
//     {
//        arr[i] = arr[i+1];
      
//     }
//      arr[n-1 ] = temp;
// }

//function to print subarrays  --->>
// void printsubarrays(int arr[],int n){
//     int curr_sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         // int start = i;
//        for (int j = i; j < n; j++) // can use i as start  
//        {
//         // int end = j;
//         for (int k = i; k <= j; k++)  // can use j as end 
//         {  
//             cout<<arr[k]<<","; 
            
//         }
//         cout<<endl;
        
//        }
//         cout<<endl;
       
//     }
    
// }
//function to print subarrays sum --->>
// void printsubarrays(int arr[],int n){
//     int curr_sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         // int start = i;
//        for (int j = i; j < n; j++) // can use i as start  
//        {
//         // int end = j;
//         curr_sum = 0;
//         for (int k = i; k <= j; k++)  // can use j as end 
//         {  
//             curr_sum += arr[k];
//             cout<<arr[k]<<","; 
            
         
            
          
            
//         }
//         cout<<endl;
//         cout<<"sum of above sub array is: "<<curr_sum<<endl;
       
//        }
//         cout<<endl;
       
//     }
    
// }

//function to print max subarrays sum --->>
void printsubarrays(int arr[],int n){
    int curr_sum = 0;
    int min_sum  =  INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        // int start = i;
       for (int j = i; j < n; j++) // can use i as start  
       {
        // int end = j;
        curr_sum = 0;
        for (int k = i; k <= j; k++)  // can use j as end 
        {  
            curr_sum += arr[k];
            cout<<arr[k]<<","; 
            
         
            
          
            
        }
        cout<<endl;
        cout<<"sum of above sub array is: "<<curr_sum<<endl;
        if (min_sum > curr_sum)
        {
           min_sum = curr_sum;
        }
        
       }
       
    }
    cout<<"Minimum sum is : "<<min_sum;
}
// //function to print max subarrays sum --->>
// void printsubarrays(int arr[],int n){
//     int curr_sum = 0;
//     int max_sum  =  INT64_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         // int start = i;
//        for (int j = i; j < n; j++) // can use i as start  
//        {
//         // int end = j;
//         curr_sum = 0;
//         for (int k = i; k <= j; k++)  // can use j as end 
//         {  
//             curr_sum += arr[k];
//             cout<<arr[k]<<","; 
            
         
            
          
            
//         }
//         cout<<endl;
//         cout<<"sum of above sub array is: "<<curr_sum<<endl;
//         if (max_sum < curr_sum)
//         {
//            max_sum = curr_sum;
//         }
        
//        }
       
//     }
//     cout<<"Maximum sum is : "<<max_sum;
// }




int main (){

//function to print subarrays --->>
int max_sum;
int n = 5;
int arr[] = {2,4,6,8,10};
printsubarrays(arr ,n);

//funcion to move forward each element by one index --->>
// int n = 5;
// int arr[] = {10,20,30,40,50};
// movearr_element(arr,n);
// for (int i = 0; i < n; i++)
// {
//    cout<<arr[i]<<",";
// }



// /function to sort '0's and '1's --->
//    int n = 10;
//    int arr[] = {1,0,1,0,0,1,0,1,0,1};
//    sort_zero_one(arr , n);
//    for (int i = 0; i < n; i++)
//    {
//     cout<<arr[i]<<",";
//    }
   




//function to print triplets --->>
    // int size = 4;
    // int arr[]= {1,2,3,4};
    // printtriplets(arr,size);


    return 0;
}