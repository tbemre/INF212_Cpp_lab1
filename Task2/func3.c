void print_number(struct Number *num);
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