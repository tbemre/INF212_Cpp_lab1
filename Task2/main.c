#include <stdio.h>
struct Number
{
    int img;
    int real;
};

void set_real(struct Number *num){
    printf("enter a real part\n");
    int real;
    scanf("%d",&real);
    num->real = real;
}
void set_imaginer(struct Number *num){
    printf("enter a imaginer part\n");
    int img;
    scanf("%d",&img);
    num->img = img;
}
void print_number(struct Number *num){
    if(num->img > 0){
        printf("Real Number is = %d+%di \n",num->real,num->img);
    }
    else if(num->img == 0){
        printf("Real Number is = %d\n",num->real);
    }
    else{
        printf("Real Number is = %d%di \n",num->real,num->img);
    }
}
int main() {
    struct Number num;
    set_real(&num);
    set_imaginer(&num);
    print_number(&num);
    return 0;
}