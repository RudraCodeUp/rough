#include<stdio.h> 
int main()
{ 
	int a,b,c,d;
	printf("wlecome to Indian Railways ticket booking centre\n");
	printf("for english press 1 and for hindi press 2");
	scanf("%d",&a);
	if (a==1)
	{
		printf("for regular train booking press 1 \n for tatkaal train booking press 2 \n for speaking with our representative press 3 \n for refund process press 4 ");
		scanf("%d",&b);
		if (b==1)
		{ 
			printf("1 for shatabdi express \n 2 for duroonto express \n 3 for rajdhani \n 4 for jetking express\n ");
			printf("please select your train code from above options");
			scanf("%d",&c);
			if (c==1)
			{ 
				printf(" available 2 tickets time 10 am \n");
				printf("to book press 1 and recieve a message for payment");
				scanf("%d",&d);
	
				if(d==1)
				{ 
				printf("message sent\n thank you");
				}
				else
				{
				printf("thank you for calling indian railways");
				}	
			}
			else if(c==2)
			{
				printf(" available 10 tickets time 1 pm \n");
				printf("to book press 1 and recieve a message for payment");
				scanf("%d",&d);
	
				if(d==1)
				{
				 printf("message sent\n thank you");
				}
				else
				{
					printf("thank you for calling indian railways");
				}
	
			}
			else if(c==3)
			{
			printf(" available 5 tickets time 3 pm \n");
			printf("to book press 1 and recieve a message for payment");
			scanf("%d",&d);
			
			if(d==1)
			{ printf("message sent\n thank you");
			}
			else
			{printf("thank you for calling indian railways");
			}
			}
			else if(c==4)
			{
			printf(" available 4 tickets time 5 pm \n");
			printf("to book press 1 and recieve a message for payment");
			scanf("%d",&d);
			if(d==1)
			{ printf("message sent\n thank you");
			}
			else
			{printf("thank you for calling indian railways");
			}
			}
			else
			{printf("thank you for calling indian railways");
			}
	}
	else if(b==2)
	{
		printf("tatkal tickets are subject to availability/n Dial *121 to get your sms id for tatakal booking ");
	}
	else if(b==3)
	{
	       printf("all are representatives are busy currently\n average waiting time is 2 mins till that time listen to are special song of the day");
		
	}
	else if(b==4)
	{
		printf("the booking id with your registered phone number has been retrievd.\n you will recieve an sms on your registered mobile number for bank details.");
	}
	else
	{printf("thank you for calling indian railways");
	}
}
	else if(a==2)
	{
	printf("niyamit train booking ke liye press 1 \n tatkal train booking ke liye press karen 2 \n hamare pratinidhi se baat karne ke liye press karen 3 \n dhanavapsi prakriya ke lie 4 dabayen");
	scanf("%d",&b);
		if (b==1)
		{ 
			printf("1 dabaye shatabdi express \n 2 dabye duroonto express \n 3 dabaye rajdhani \n 4 dabaye jetking express\n ");
			printf("please select your train code from above options");
			scanf("%d",&c);
			if (c==1)
			{ 
				printf(" Uplabdh 2 tickets time 10 am \n");
				printf("seat rookne ke liye 1 dabaye and paise jama karwane ke message ka inteezar kare");
				scanf("%d",&d);
	
				if(d==1)
				{ 
				printf("bhejdiya hai \n dhanyewad");
				}
				else
				{
				printf("indian railways ko apna samye dene ke liye shukriya");
				}	
			}
			else if(c==2)
			{
				printf(" Uplabdh 2 tickets time 1 pm \n");
				printf("seat rookne ke liye 1 dabaye and paise jama karwane ke message ka inteezar kare");
				scanf("%d",&d);
	
				if(d==1)
				{
				 printf("bhejdiya hai \n dhanyewad");
				}
				else
				{
					printf("indian railways ko apna samye dene ke liye shukriya");
				}
	
			}
			else if(c==3)
			{
			printf(" Uplabdh 2 tickets time 3 pm \n");
			printf("seat rookne ke liye 1 dabaye and paise jama karwane ke message ka inteezar kare");
			scanf("%d",&d);
			
			if(d==1)
			{ printf("bhejdiya hai \n dhanyewad");
			}
			else
			{printf("indian railways ko apna samye dene ke liye shukriya");
			}
			}
			else if(c==4)
			{
			printf(" Uplabdh 2 tickets time 5 pm \n");
			printf("seat rookne ke liye 1 dabaye and paise jama karwane ke message ka inteezar kare");
			scanf("%d",&d);
			if(d==1)
			{ printf("bhejdiya hai \n dhanyewad");
			}
			else
			{printf("indian railways ko apna samye dene ke liye shukriya");
			}
			}
			else
			{printf("indian railways ko apna samye dene ke liye shukriya");
			}
	}
	else if(b==2)
	{
		printf("tatkal tickets sharte lago hoti hai /n Dabaye *121 taki tatakal booking ka sms aaye");
	}
	else if(b==3)
	{
	       printf("sabhi pratinidhi vyast hain\n vartamaan mein ausat pratiksha samay 2 minute hai jab tak ki us samay tak din ka vishesh geet sunen");
		
	}
	else if(b==4)
	{
		printf("aapke panjikrit phone number ke saath booking id punah prapt ki gai hai\n aapko bank vivaran ke lie apane panjikrit mobile number par ek sms prapt hoga");
	}
	else
	{printf("indian railways ko apna samye dene ke liye shukriya");
	}
}
	
	else
	{
	printf("wrong code please press correct option");
	}
}
