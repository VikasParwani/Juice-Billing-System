/*
 JUICES
1.Apple Juice
2.Orange Juice
3.Pineapple Juice
4.Grape Juice
5.Mango Juice
6.Pomegrenate Juice
7.Gauva Juice
\t SHAKES
8.Banana Shake
9.Oreo Shake
10.Oreo Shake with Ice Cream
11.Kitkat Shake
12.Kitkat Shake with Ice Cream
13.Belgian Chocolate Shake
14.Belgian Chocolate Shake with Ice Cream
15.Ferrero Rocher Shake
16.Ferrero Rocher Shake with Ice Cream
17.Vanilla Ice Cream
18.Muskmelon Shake
\t LASSI
19.Sweet Lassi
20.Banana Lassi
21.Mango Lassi
22.Strawberry Lassi
23.Kesar Lassi
24.Dryfruit Lassi
\t COLD COFFEE
25.Hard Rock
26.Chocolate
27.Strawberry
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c,i,n,v;
	char ch;
	float cbb=0,cb=0,tb=0,gst=0,dis=0;
	FILE *fp=fopen("Bill.txt","w");
	printf("    Welcome to BCA(HONOURS) Juice Waala:)\n");
	printf("Please Enter the day:\n");
	printf("1.Monday\n2.Tuesday\n3.Wednesday\n4.Thrusday\n5.Friday\n6.Saturday\n7.Sunday\n");
	printf("select the no. according to the day\n");
	scanf("%d",&v);
	switch(v)
	 {
		case 1: break;
		case 2: break;
		case 3: break;
		case 4: break;
		case 5: break;
		case 6: break;
		case 7: printf("Its Sunday you get a Discount of 10%%\n");
		break;
		default:printf("Invalid choice\n");
		break;
	 }
	printf("\t\tMENU\n");
	printf("\tNAMES\t\t\tPrice(Exclusive of G.S.T)\n\tJUICES\n1.Apple Juice\t\t\tRs.80\n2.Orange Juice\t\t\tRs.85\n3.Pineapple Juice\t\tRs.95\n4.Grape Juice\t\t\tRs.100\n5.Mango Juice\t\t\tRs.100\n6.Pomegrenate Juice\t\tRs.90\n7.Gauva Juice\t\t\tRs.75\n\t SHAKES\n8.Banana Shake\t\t\tRs.80\n9.Oreo Shake\t\t\tRs.110\n10.Oreo Shake with Ice Cream\tRs.125\n11.Kitkat Shake\t\t\tRs.115\n12.Kitkat Shake with Ice Cream\tRs.130\n13.Belgian Chocolate Shake\tRs.150\n14.Ferrero Rocher Shake\t\tRs.160\n15.Munch Shake\t\t\tRs.200\n16.Vanilla Ice Cream Shake\tRs.90\n17.Muskmelon Shake\t\tRs.100\n\tLASSI\n18.Sweet Lassi\t\t\tRs.45\n19.Banana Lassi\t\t\tRs.55\n20.Mango Lassi\t\t\tRs.60\n21.Strawberry Lassi\t\tRs.55\n22.Kesar Lassi\t\t\tRs.60\n23.Dryfruit Lassi\t\tRs.50\n\t COLD COFFEE\n24.Hard Rock\t\t\tRs.75\n25.Chocolate\t\t\tRs.70\n26.Strawberry\t\t\tRs.80\n");
	printf("Please Input the No. Of orders ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 {
		printf("Choose the number what you want to order\n");	
		scanf("%d",&c);
		switch(c)
	 {
		case 1 :  printf("Order:Apple Juice\nCharge:Rs.80.00\n");
		break;
		case 2 :  printf("Order:Orange Juice\nCharge:Rs.85.00\n");
		break;
		case 3 :  printf("Order:Pineapple Juice\nCharge:Rs.95.00\n");
		break;
		case 4 :  printf("Order:Grape Juice\nCharge:Rs.100.00\n");
		break;
		case 5 :  printf("Order:Mango Juice\nCharge:Rs.100.00\n");
		break;
		case 6 :  printf("Order:Pomegrenate Juice\nCharge:Rs.90.00\n");
		break;
		case 7 :  printf("Order:Guava Juice\nCharge:Rs.75.00\n");
		break;
		case 8 :  printf("Order:Banana Shake\nCharge:Rs.80.00\n");
		break;
		case 9 :  printf("Order:Oreo Shake\nCharge:Rs.110.00\n");
		break;
		case 10 : printf("Order:Oreo Shake with Ice Cream\nCharge:Rs.125.00\n");
		break;
		case 11 : printf("Order:Kitkat Shake\nCharge:Rs.115.00\n");
		break;
		case 12 : printf("Order:Kitkat Shake with Ice Cream\nCharge:Rs.130.00\n");
		break;
		case 13 : printf("Order:Belgian Chocolate Shake\nCharge:Rs.150.00\n");
		break;
		case 14 : printf("Order:Ferrero Rocher Shake\nCharge:Rs.160.00\n");
		break;
		case 15 : printf("Order:Munch Shake\nCharge:Rs.200.00\n");
		break;
		case 16 : printf("Order:Vanilla Ice Cream Shake\nCharge:Rs.90.00\n");
		break;
		case 17 : printf("Order:Muskmelon Shake\nCharge:Rs.100.00\n");
		break;
		case 18 : printf("Order:Sweet Lassi\nCharge:Rs.45.00\n");
		break;
		case 19 : printf("Order:Banana Lassi\nCharge:Rs.55.00\n");
		break;
		case 20 : printf("Order:Mango Lassi\nCharge:Rs.60.00\n");
		break;
		case 21 : printf("Order:Strawberry Lassi\nCharge:Rs.55.00\n");
		break;
		case 22 : printf("Order:Kesar Lassi\nCharge:Rs.60.00\n");
		break;
		case 23 : printf("Order:Dryfruit Lassi\nCharge:Rs.50.00\n");
		break;
		case 24 : printf("Order:Hard Rock Cold Coffee\nCharge:Rs.75.00\n");
		break;
		case 25 : printf("Order:Chocolate Cold Coffee\nCharge:Rs.70.00\n");
		break;
		case 26 : printf("Order:Strawberry Cold Coffee\nCharge:Rs.80.00\n");
		break;
		default : printf("Invalid Choice\n");
		break;
		}
		if(c==1)
		cb+=80.0;
		else if(c==2)
		cb+=85.0;
		else if(c==3)
		cb+=95.0;
		else if(c==4)
		cb+=100.0;
		else if(c==5)
		cb+=100.0;
		else if(c==6)
		cb+=90.0;
		else if(c==7)
		cb+=75.0;
		else if(c==8)
		cb+=80.0;
		else if(c==9)
		cb+=110.0;
		else if(c==10)
		cb+=125.0;
		else if(c==11)
		cb+=115.0;
		else if(c==12)
		cb+=130.0;
		else if(c==13)
		cb+=150.0;
		else if(c==14)
		cb+=160.0;
		else if(c==15)
		cb+=200.0;
		else if(c==16)
		cb+=90.0;
		else if(c==17)
		cb+=100.0;
		else if(c==18)
		cb+=45.0;
		else if(c==19)
		cb+=55.0;
		else if(c==20)
		cb+=60.0;
		else if(c==21)
		cb+=55.0;
		else if(c==22)
		cb+=60.0;
		else if(c==23)
		cb+= 50.0;
		else if(c==24)
		cb+=75.0;
		else if(c==25)
		cb+=70.0;
		else if(c==26)
		cb+=80.0;
		printf("Your Current Bill is(exclusive of GST):Rs.%.2f\n\n",cb);
	 }
		cbb=cb;
		gst=(float)(12*cb)/100;
		if(v==7)
		 { 
			dis=(float)(10*cb)/100;
			cb=(float)cb-dis;
			tb=(float)tb+cb+gst;
		 }
		else 
		 {
			tb=(float)gst+cb;
		 }
		 printf("\t   TOTAL BILL\nYour Bill:\t\tRs.%.2f\nDiscount\t\tRs.%.2f\nTax:\t\t\tRs.%.2f\n\n\t\t\t---------\nAmount to be paid:\tRs.%.2f",cbb,dis,gst,tb);
	 	
   		/*if(fp==NULL)
			{
			exit(0);
			}
		while(ch=='\n')
		{
		 fprintf(fp,"\t   TOTAL BILL\nYour Bill:\t\tRs.%.2f\nDiscount\t\tRs.%.2f\nTax:\t\t\tRs.%.2f\n\n\t\t\t---------\nAmount to be paid:\tRs.%.2f",cbb,dis,gst,tb);	
		}
		fclose(fp);*/
		
		return 0;
}
