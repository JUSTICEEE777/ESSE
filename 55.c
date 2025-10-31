#include <stdio.h>

int main(void)
{
	double a,b;
	printf("How tall are you?[cm]\n");
	scanf("%d",&b);
	
	printf("What's your weigh?[kg]\n");
	scanf("%d",&a);
	
	 if(a/((b*b)/10000) > 18&&a/((b*b)/10000) <=20)
    {
        printf("You are a beauty weight.");
    }
    
    else if(a/((b*b)/10000) >=18&&a/((b*b)/10000) <20)
    {
        printf("You are Cinderella weight.");
    }
    
    else if(a/((b*b)/10000) >20&&a/((b*b)/10000) <=24.9)
    {
        printf("You are normal weight.");
    }
    
    else if(a/((b*b)/10000) <18)
    {
        printf("You are underweight.");
    }
    
    else
    {
        printf("You are a WAGAMAMA body");
    }




	return 0;

}