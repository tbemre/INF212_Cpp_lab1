void set_real(struct Number *num);
void set_real(struct Number *num){
    printf("enter a real part\n");
    int real;
    scanf("%d",&real);
    num->real = real;
}