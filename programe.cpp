#include<iostream>
using namespace std;

int main(){
    cout<<"         Linear Search           "<<endl;
    int n;
    cout<<"Enter No. Of Elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter Element To Search : ";
    cin>>x;
    bool found=0;

    for(int j=0;j<n;j++){
        if(arr[j]==x){
            cout<<"The Element Is Found At "<<j<<" Index"<<endl;
            found=1;
        }
    }
    if(found==0){
        cout<<"Sorry!, Element Not Found!...";
    }


    return 0;
}