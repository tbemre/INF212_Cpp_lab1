void set_imaginer(struct Number *num);
void set_imaginer(struct Number *num){
    printf("enter a imaginer part\n");
    int img;
    scanf("%d",&img);
    num->img = img;
}