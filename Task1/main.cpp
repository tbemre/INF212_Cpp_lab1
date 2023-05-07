#include <iostream>
using namespace std;

struct Number
{
    int img;
    int real;
};

void set_real(struct Number *num){
    cout<<"enter a real part\n";
    int real;
    cin>>real;
    num->real = real;
}
void set_imaginer(struct Number *num){
    cout<<"enter a imaginer part\n";
    int img;
    cin>>img;
    num->img = img;
}
void print_number(struct Number *num){
    if(num->img > 0){
        cout<<"İmaginer Number is = "<<num->real<<'+'<<num->img<<'i'<<endl;
    }
    else if(num->img == 0){
        cout<<"İmaginer Number is = "<<num->real<<endl;
    }
    else{
        cout<<"İmaginer Number is = "<<num->real<<num->img<<'i'<<endl;
    }
}
int main() {
    struct Number num;
    set_real(&num);
    set_imaginer(&num);
    print_number(&num);
    return 0;
}