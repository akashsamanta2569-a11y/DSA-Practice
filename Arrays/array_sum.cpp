#include<iostream>
using namespace std;
int main(){
  int n;
cout << "Enter Size";
cin >> n;
int arr[n];
cout << "Enter Elements: ";
for (int i = 0;i < n; i++){
cin >> arr[i];
}
int sum = 0;
for (int i = 0;i < n; i++){
sum += arr[i];
}
cout<< "sum = "<<sum;
return 0;
}
