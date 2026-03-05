#include<iostream>
using namespace std;
int main(){
  int n;
cout<<"Enter Size : ";
cin>>n;
int arr[n];
cout<<"Enter Elements : ";
for(int i = 0;i < n;i++){
cin>>arr[i];
}
int MAX = arr[0];
for(int i = 1;i < n;i++){
if (arr[i] > MAX){
MAX = arr[i];
}
}
cout<<"MAX = "<<MAX;
return 0;
}
