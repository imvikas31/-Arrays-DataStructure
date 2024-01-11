#include<iostream>
#include<vector>
using namespace std;

// void printvector( vector<int> marks){

//     cout<<"Printing vector: "<<endl;
//     for (int i = 0; i < marks.size(); i++)
//     {
//        cout<<marks[i] <<endl;
//     }
// }
void printvector( vector<int> arr1){

    cout<<"Printing vector: "<<endl;
    for (int i = 0; i < arr1.size(); i++)
    {
       cout<<arr1.at(i)<<endl;
    }
}
int main(){
  // // vector initialization
    // vector<int>marks;  // default with no data, 0 size
    // int n;
    // cout<<"Enter size of the vector: "<<endl;
    // cin>>n;
   
    // for (int i = 0; i < n; i++)
    // {
    //     int d;
    //     cin>>d;
    //     marks.push_back(d);
    // }
    //  printvector(marks);

    //  marks.push_back(50);
   
    //  printvector(marks);
    //  marks.pop_back();
    // printvector(marks);

    vector<int>arr1{1,2,3,4,5};
    // printvector(arr1);

    arr1.push_back(6);
    arr1.push_back(8);
    arr1.push_back(9);
    arr1.push_back(10);

    // arr1.push_back(10);
    // arr1.clear();
    // printvector(arr1);  

    // cout<<"size of arrr1 vector is: "<<arr1.size()<<endl;
    // cout<<"capacity of arrr1 vector is: "<<arr1.capacity()<<endl;

    // cout << "Front element: " << arr1[0] << endl;
    // cout << "Front element: " << arr1.front() << endl;
    // cout << "End Element: " << arr1[arr1.size() - 1] << endl;
    // cout << "End Element: " << arr1.back() << endl;

    vector<int>arr2(arr1);
    printvector(arr2);







}