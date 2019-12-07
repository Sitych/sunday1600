#include <iostream>

using namespace std;

void ft_sort(int *mas, int len){
    int v;
    //cout<<*mas;

    for (int i=0; i<len-1; i++){
        for (int j=0; j<len-i-1;j++){
                if (*(mas+j)>*(mas+j+1)){
                    v = *(mas+j);
                    *(mas+j)=*(mas+j+1);
                    *(mas+j+1)=v;
                }
        }
    }
}

/*
int main(){
    int a[]={5,-12,-12,9,10,0,-9,-12,-1,23,65,64,11,43,39,-15};

    int *b=a;
    int s=16;
    ft_sort(b, s);
    for (int j=0; j<s;j++){
        cout<<j<<"::"<<a[j]<<endl;
    }
    //cout<<a[0];
    return 0;
}
*/
