#include <iostream>

using namespace std;

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a/b;
    *mod = a%b;
}

/*
int main(){
    int a, b;
    int *c, *d;
    c = &a;
    d = &b;
    ft_div_mod(5,3,c,d);
    cout<<a<<":"<<b;
    return 0;
}
*/
