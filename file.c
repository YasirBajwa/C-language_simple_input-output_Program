#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
int height,base;
float ans;
char input[5];
printf("Please Enter y or yes to perform task...");
scanf("%s",input);
if(strcmp(input,"y")==0){
    printf("Welcome now you can calculate area of triangle..\n");
    printf("Enter the height and base..\n");
    scanf(" %d %d",&height,&base);
    ans=0.5*height*base;
    scanf("Area is = %f \n",ans);
    return 0;
}
else if(strcmp(input,"yes")==0){
    printf("Welcome now you can calculate area of triangle..\n");
    printf("Enter the height and base..\n");
    scanf(" %d %d",&height,&base);
    ans=0.5*height*base;
    scanf("Area is = %f \n",ans);
    return 0;
    
}
else if(strcmp(input,"no")==0){
    printf("Not Allowed......\n");
    return 0;
}
else{
    printf("You are not allowed......\n");
    return 0;
}
return 0;
}