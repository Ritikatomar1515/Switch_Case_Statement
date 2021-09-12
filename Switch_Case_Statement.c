#include<stdio.h>
#include<conio.h>

int main()
{
	
	int num;
	
	printf("please enter the number from 1 to 5 : \n");
	scanf("%d" , &num);
	
	
	switch(num)
	{
		
	    case 1:
		       printf("food name is : Pizza \n");
		       printf("Its price is : Rs 239 \n");
		       break;
		       
		case 2: 
		       printf("food name is : Burger \n");
		       printf("Its price is : Rs 129 \n");
		       break;     
			   
	    case 3: 
		       printf("food name is : Pasta \n");
		       printf("Its price is : Rs 179 \n");
		       break;	
			   
	    case 4: 
		       printf("food name is : French Fries \n");
		       printf("Its price is : Rs 99 \n");
		       break;		   	     
		       
		case 5: 
		       printf("food name is : Sandwich \n");
		       printf("Its price is : Rs 149 \n");
		       break;       
		       
			   
	    default :
		        printf("please enter a proper number \n");		    
	}
	
	
	return 0;
}
