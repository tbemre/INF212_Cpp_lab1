void print_number(struct Number *num);
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