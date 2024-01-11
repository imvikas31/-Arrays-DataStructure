#include<iostream>
#include<limits.h>
using namespace std;

  // taking input in 2D array --->>
  void takeinput(int array[][3],int n,int m){

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
       cin>>array[i][j];
       }
       cout<<endl;
       
    }
}
  
// print 2DArray --->>
void print2DArray(int array[][3],int n, int m){
  // Row wise output of 2D array--->
   //  cout<<"Printing 2D array row wise"<<endl;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
       cout<<array[i][j]<<" ";
       }
       cout<<endl;
       
    } 

    // Column wise output of 2D array--->
//     cout<<"Printing 2D array column wise"<<endl;
//     for (int i = 0; i < m; i++)
//     {
//        for (int j = 0; j < n; j++)
//        {
//        cout<<array[j][i]<<" ";
//        }
//        cout<<endl;
       
//     }  
}

// bool search(int array[][3],int n , int m , int key,bool flag){
//     // bool flag = 0;
//     for (int i = 0; i <n ; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (array[i][j] == key)
//             {
          
//             //   cout<<"Key found"<<endl;
//             //   cout<<"Key found at index: "<<"("<<i<<","<<j<<")"<<endl;
//               return true;
//               return i;
//               return j;
//             }
            
//         }
        
//     }
//   cout<<"Key not found";
//   return false;  
// }

// Function to find maximum element ---->>
// int findmax(int array[][3], int n, int m){
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//         if ( array[i][j] >  max)
//         {
//            max = array[i][j];
//         }
        
//        }
       
//     }
//     return max;
// }
// Function to find minimum element ---->>
// int findmin(int array[][3], int n, int m){
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//         if ( array[i][j] <  min)
//         {
//            min = array[i][j];
//         }
        
//        }
       
//     }
//     return min;
// }

// Function to find sum of 2D array elements row wise ---->>
// int findsum(int array[][3],int n,int m, int sum){
//    int finalsum= 0;
//    for (int i = 0; i < n; i++)
//    {
//       int sum = 0;
     
//       for (int j = 0; j < m; j++)
//       {
//          sum = sum + array[i][j];
//          finalsum = finalsum + array[i][j];
//       }
//       cout<<"Sum of "<<i<<"th row is: "<<sum<<endl;
//       // cout<<endl;
      
//    }
//    return finalsum;;
// }
// Function to find sum of 2D array elements column wise ---->>
// int findsum(int array[][3],int n,int m, int sum){
//    int finalsum= 0;
//    for (int i = 0; i < m; i++)
//    {
//       int sum = 0;
     
//       for (int j = 0; j < n; j++)
//       {
//          sum = sum + array[j][i];
//          finalsum = finalsum + array[j][j];
//       }
//       cout<<"Sum of "<<i<<"th column is: "<<sum<<endl;
//       // cout<<endl;
      
//    }
//    return finalsum;;
// }

// Function to find sum of 2D array elements Diagonal wise ---->>
// int Diagonalsum(int array[][4],int n,int m){
//    int sum = 0;
//    int i;
//    for (int i = 0; i < n; i++){
//       for (int  j = 0; j < m; j++)
//       {
//          if (i == j){
//            sum += array[i][j];
//          }
//           else if(i+j == n-1){
//            sum += array[i][j];

//          } 
//     }

   
// }
// return sum;
// }


// int Diagonalsum(int array[][3],int n,int m){
//    int sum = 0;
//    int i;
//    for (int i = 0; i < n; i++){
//       sum += array[i][i];
//       if (i != n-1-i)
//       {
//       sum += array[i][n-i-1];
        
//       }
              
//     }

//    return sum;

// }

// void printtranspose(int array[][3],int n,int m){

//    for (int i = 0; i < n; i++){
//       for (int j = i; j < m; j++)
//       {
//          swap(array[i][j],array[j][i]);
   
//       }

      
//    }
// }


int main(){
    int n = 3;
    int m = 3;
    int array[n][3];

    takeinput(array,n,m);
    cout<<"Printing 2D array before transpose"<<endl;
    print2DArray(array,n,m);
    cout<<endl;

// Function to find maximum element ---->>
   //  findmax(array,n,m);
   //  cout<<"Maximum element is : "<<findmax(array,n,m)<<endl;

// Function to find minimum element ---->>
   //  findmin(array,n,m);
   //  cout<<"Maximum element is : "<<findmin(array,n,m)<<endl;

// Function to find sum of 2D array elements row wise ---->>
   // int sum=0;
   //  int finalsum = findsum(array,n,m,sum);
   //  cout<<"Sum of all elements is : "<<finalsum<<endl;

   // int diagonalsum = Diagonalsum(array,n,m);
   //  cout<<"Sum of primary diagonal elements is : "<<diagonalsum<<endl;
   // if (diagonalsum == 0){
   //    cout<< "singular matrix"<<endl;
   //    cout<<endl;
   // }
   // else
   //    cout<<"Non singular matrix"<<endl;
   //    cout<<endl;

   cout<<"Doing transpose"<<endl;
   printtranspose(array,n,m);
    cout<<endl;


    cout<<"Printing 2D array after transpose"<<endl;
    print2DArray(array,n,m);


    return 0;
}