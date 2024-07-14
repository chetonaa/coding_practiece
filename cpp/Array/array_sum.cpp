#include <iostream>
using namespace std;
int main(){
    const int size = 4;
    int nums[size];
    for(int i=0; i<size;i++){
        cout<<"enter number for index "<<i<<" : ";
        cin >>nums[i];
    }
    int sum=0;
    for(int i=0; i<size;i++){
        sum=sum+nums[i];
    }
    cout<<sum<<endl;
}