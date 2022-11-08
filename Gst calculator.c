#include<stdio.h>
#include<conio.h>
void main()
{
	int n,j;
	printf("Enter the number of product: ");
	scanf("%d",&n);
	float price[n];
	for(j=1;j<=n;j++)
	{
		printf("Enter the %d price: ",j);
		scanf("%f",&price[j]);
	}
	printf("\n\n----------Gst Tax Calculation------------\n");
	{
		for(j=1;j<=n;j++)
		{		
			printf("\nPrice of product %d = %.2f",j,price[j] + (0.18 * price[j]));
		}
	}
getch();
}
