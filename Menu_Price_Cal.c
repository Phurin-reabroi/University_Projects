#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	
	char type,order[30];
	int price,menu,unit;
	float total;
	
	
	printf("------------------------CS&IT UDRU Cafe------------------------\n");
	printf("---------------------------------------------------------------\n");
	printf("%s|%15s  |%10s  |%10s  |%10s|\n","Number","Menu","Hot","Cold","Blended");
	printf("---------------------------------------------------------------\n");
	printf("%6s|%15s  |%10s  |%10s  |%10s|\n","1","Americano","45","50","55");
	printf("%6s|%15s  |%10s  |%10s  |%10s|\n","2","Cappuccino","60","65","70");
	printf("%6s|%15s  |%10s  |%10s  |%10s|\n","3","Espresso","40","60","65");
	printf("%6s|%15s  |%10s  |%10s  |%10s|\n","4","Latte","50","55","60");
	printf("%6s|%15s  |%10s  |%10s  |%10s|\n","5","Mocha","65","70","75");
	printf("---------------------------------------------------------------\n\n");
	
	printf("Enter Menu Number==>");
	scanf("%d", &menu);
	getchar();
	
	printf("Enter Type(H/C/B)==>");
	scanf("%c", &type);
	getchar();
	
	printf("Enter Quantity==>");
	scanf("%d", &unit);
	getchar();
	
	
	if(type=='H'||type=='h'){
	switch(menu){
		case 1 : price=45;strcpy(order,"Hot Americano");break;
		case 2 : price=60;strcpy(order,"Hot Cappuccino");break;
		case 3 : price=40;strcpy(order,"Hot Espresso");break;
		case 4 : price=50;strcpy(order,"Hot Latte");break;
		case 5 : price=65;strcpy(order,"Hot Mocha");break;
		default:;
 	}}
 	else if(type=='C'||type=='c'){
	switch(menu){
		case 1 : price=50;strcpy(order,"Cold Americano");break;
		case 2 : price=65;strcpy(order,"Cold Cappuccino");break;
		case 3 : price=60;strcpy(order,"Cold Espresso");break;
		case 4 : price=55;strcpy(order,"Cold Latte");break;
		case 5 : price=70;strcpy(order,"Cold Mocha");break;
		default:;
	}}
	else if(type=='B'||type=='b'){
	switch(menu){
		case 1 : price=55;strcpy(order,"Blended Americano");break;
		case 2 : price=70;strcpy(order,"Blended Cappuccino");break;
		case 3 : price=65;strcpy(order,"Blended Espresso");break;
		case 4 : price=60;strcpy(order,"Blended Latte");break;
		case 5 : price=75;strcpy(order,"Blended Mocha");break;
		default:;
	}}
 	else{
 		price=0;
 		(order,"invalid");
	 }
	 
    total=unit*price;
	 
    printf("\n\n-----------------------------Bill---------------------------------\n");
	 
	printf("------------------------------------------------------------------\n");
    printf("| %18s | %15s | %24s |\n","Order","Quantity","Price");
    printf("------------------------------------------------------------------\n");
	printf("|%-20s|  %15d| %15d baht/cup |\n\n",order,unit,price);
	printf("------------------------------------------------------------------\n\n\n");
	printf("%38s : %20.2f baht|","Total",total);

	return 0;
}
