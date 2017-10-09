#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

	int summa()
	{
		float a,b,c;
		printf("Vvedite slogaemie:\n");
		scanf("%f%f",&a,&b);
		c=a+b;
		printf("Summa = %.1f",c);
	}
	int raznost()
	{
		float a,b,c;
		printf("Vvedite slogaemoe i vichitaemoe:\n");
		scanf("%f%f",&a,&b);
		c=a-b;
		printf("Raznost = %.1f",c);
	}
	int umnozhenie()
	{
		float a,b,c;
		printf("Vvedite mnozhiteli:\n");
		scanf("%f%f",&a,&b);
		c=a*b;
		printf("Summa = %.1f",c);
	}
	int delenie()
	{
		float a,b,c;
		printf("Vvedite delimoe i delitel:\n");
		scanf("%f%f",&a,&b);
		c=a/b;
		printf("Summa = %.1f",c);
	}
	int main()
	{
		int a;
		 do
    {
         printf("\n1) Summa\n2) Raznost\n3) Umnozhenie\n4) Delenie\nEsc - vyhod\n");
		 a = getch();
		 system("cls");
         switch(a)
         {
             case 49: 
              system("cls");
			  summa();
			  printf("\nEsc - nazad");
			  getch();
			  system("cls");
             break;
            
             case 50:  
             system("cls");
			  raznost();
			    printf("\nEsc - nazad");
				getch();
			  system("cls");
			 break;
             
             case 51:
             	system("cls");
              umnozhenie();
                printf("\nEsc - nazad");
				getch();
			  system("cls");
             break;
             
			 case 52:
			 	system("cls");
              delenie();  
                printf("\nEsc - nazad");
				getch();
			  system("cls");
             break; 
			                          	    
             case 27: exit(0); break;
         }
    }
    while(1);
    return 0;
}  
	
	
