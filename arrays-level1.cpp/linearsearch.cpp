#include<iostream>
#include<limits.h>

using namespace std;

// passing an array as argument in the function---->>
// void printarray(int array[], int array_size){
//     for (int i = 0; i < array_size; i++)
//     {
//       cout <<array[i]<<" ";
//     }

// }

// linearsearch function --->>
// bool linearsearch(int marks[] , int size, int target){
//     for (int i = 0; i < size; i++)
//     {
//         if (marks[i] == target)
//         {
//           return true;
//         }
//     }

//     return false;
// }


//Function to count number of '0' and '1' --->>
// void count_zero_one(int num[], int size,  int zero_count,  int one_count){
//     for (int i = 0; i < size; i++)
//     {
//        if (num[i] ==0 )
//        {
//         zero_count++;
//        }
//        if (num[i] ==1 )
//        {
//         one_count++;
//        }
       
//     }
//     cout<<" 0's count is: "<<zero_count<<endl;
//     cout<<" 1'scount is: "<<one_count<<endl;
// }

// getlargest function--->>
    // int getlargest(int marks[] , int size){
    //      int largest_num = INT_MIN;
    // int smallest_num = INT_MAX;

    //     for (int i = 0; i < size; i++){
    //         if (marks[i] > largest_num)
    //         {
    //             largest_num = marks[i]; 
               
    //         }
    
    //      }
    //      return largest_num;
        
    // }

    
// getsmallest function--->>
    // int getsmallest(int marks[] , int size){
    //      int largest_num = INT_MIN;
    // int smallest_num = INT_MAX;

    //     for (int i = 0; i < size; i++){
    //         if (marks[i] < smallest_num)
    //         {
    //             smallest_num = marks[i]; 
               
    //         }
    
    //      }
    //      return smallest_num;
        
    // }

//Function to reverse an array--->>
// void reversearray(int marks[], int size){
//     int start=0;
//     int end = size-1;
//     while (start < end)
//     {
//        int temp = marks[end];
//        marks[end] = marks[start];
//        marks[start] = temp;
//     start++;
//     end--;
//     }

//Using swap(a,b) function to reverse an array--->>

// void reversearray(int marks[], int size){
//     int start=0;
//     int end = size-1;
//     while (start <= end)
//     {
//        swap(marks[start], marks[end]);
//        start++;
//        end--;
//     }
    
// }

//extreame print in an array--->
// void extreameprint(int marks[], int size)
// {
//     int start=0;
//     int end = size-1;
//     cout<< "Extreame print is: ";

//     while (start<= end)
//     {
//     if (start ==end){
//         cout<<marks[start];
//     }
//     else{
//        cout<<marks[start]<<" ";
//        cout<<marks[end]<<" ";

//     }
//        start++;
//        end--;

//     }  
// }


//pairs in an array excluding itself--->>
// void pairsinarray(int num[], int size){
//     int firstelement;
//     // int i;
//     for (int i = 0; i < size; i++)
//     {
//         firstelement = num[i];
//         for (int j = i+1; j < size; j++)
//         {
//            cout<< "("<< firstelement<<","<<num[j]<<")"<<endl;;
//         }
//     }
        
//     }

//pairs in an array including itself--->>
void pairsinarray(int num[], int size){
    int firstelement;
    // int i;
    for (int i = 0; i < size; i++)
    {
        firstelement = num[i];
        for (int j = 0; j < size; j++)
        {
           cout<< "("<< firstelement<<","<<num[j]<<")"<<endl;;
        }
    }
        
    }

//functionto find ana unique element in an array--->>
// int findunique(int array[], int n){
//     int ans= 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans^array[i];
//     }
//     return ans;
// }
int main(){

//functionto find ana unique element in an array--->>
    // int n = 9;
    // int array[] = {2,2,3,3,4,4,5,5,11};
    // int final_ans = findunique(array,n);
    // cout<<"Uniquw element is : "<<final_ans;

//pairs in an array--->>
    int size = 4;
    int num[] = {10,20,30,40};
    pairsinarray(num,size);


//extreame print in an array--->
    // int i;
    // int size = 6;
    // int marks[] = {96,97,98,99,100,200};
    // extreameprint(marks,size);
  


// Function to reverse an array--->>
// int i;
//     int size = 5;
//     int marks[] = {96,97,98,99,100};
//     reversearray(marks,size);
//     cout<< "Reversed array is: ";

//     for (int i = 0; i < size; i++)
//     {
//        cout <<marks[i]<<" ";
//     }
    


// getlargest function:
    // int size = 5;
    // int marks[] = {96,97,98,99,100};
    // int smallest = getsmallest(marks,size);
    // cout<<"smallest num is: "<<smallest<<endl;
   
// // getlargest function:
//     int size = 5;
//     int marks[] = {96,97,98,99,100};
//     int largest = getlargest(marks,size);
//     cout<<"Largest num is: "<<largest<<endl;
   


//Function to count number of '0' and '1' --->>
    // int size = 15;
    // int zero_count = 0;
    // int one_count = 0;
    // int num[] = {0,0,1,1,0,1,0,1,1,15,14,12,19,13,1};
    // count_zero_one(num,size,zero_count,one_count);


//printarray function
    // int array_size = 5;
    // int array[] = {12,15,14,78,13};
    // printarray(array,array_size);


//linearsearch function:
    // int i;
    // int size;
    // int target;
    // // bool present = 0;
    // cout<<"Enter the size of the array: ";
    // cin>>size;
    // int marks[size];
    //     cout<<"Enter the elements of the array: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>marks[i];
    // }
    // cout<<"Enter the  element to target in the given array: ";
    // cin >>target;

    // bool ans = linearsearch( marks,target,size);

    // if (ans == true)
    // {
    //     cout<<"Target element found"<<endl;
    //     cout<<"Target element is: "<<target<<endl;

    // }
    // else    
    // {
    //     cout<<"Target element not found"<<endl;
      
    // }


    //Linear search 
    // int n = 5;
    // int num[n] = { 12,1,4,15,7};
    // int key = 15;
    // bool flag = 0;
    // int index;

    // for (int i = 0; i < n; i++)
    // {
    //    if (num[i] == key)
    //    {
    //     flag = 1;
    //     index = i;
    //     break;
    //    }
    // }
    // if (flag == 1)
    // {
    //     cout <<"Target element found"<<endl;
    //     cout <<"Target element found at index: "<<index<<endl;
    // }
    // else
    // {
    //     cout <<"Target element not found"<<endl;
    // }
    
    
    

    return 0;
}