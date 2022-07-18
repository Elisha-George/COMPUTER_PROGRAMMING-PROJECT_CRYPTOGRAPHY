#include <stdio.h>

		


int main()
{
	char code[100];
	int i=0;
	int x;
	
       
			printf("\xdb\xdb CP FINL PROJECT  \n\xdb\xdb FA19-BSSE-0002\n\xdb\xdb ELISHA ALI BAKHSH (BM)");
			printf("\t\t\xdb WELCOME TO CESEAR CIPHER \xdb\n\n");
			
			printf("\n--------------------------------------------------------------------------------------\n\n");
		printf("\n\t\xdb PLEASE ENTER YOUR CODE (please use lower case letters) \xdb\n\n: ");
	gets(code);
			
			printf("\n--------------------------------------------------------------------------------------");
		
			printf("\n PLEASE CHOOSE A NUMBER \n 1 TO ENCRYPT THE CODE: \n 2 TO DECRYPT THE CODE: ");
			scanf("%d", &x);
			printf("\n\n--------------------------------------------");
		
			
			switch(x)
			{
				case 1:
					
					
					for (i = 0; i < 10000; i++){
                     printf("\r\t In progress %d", i/100);		//code for progress bar
                      }
                    printf("\n");
   
   
					for(i=0;(i<100 && code[i]!=0);i++)
					{
						if(code[i]>=97 && code[i]<=119 )//&& code[i]!=122 && code[i]!=121 && code[i]!=120)
						{
						
						code[i]=3+code[i];
					    }
					     if(code[i]>=120 && code[i]<=122)                        //(code[i]==122 || code[i]==121 || code[i]==120)
						{
							
							code[i]=code[i]-26;		// having problem for x,w,y,z
													/* these character arn't giving the right answer fter adding 3 in them*/
							code[i]+=3;
						}
				}
					
					printf("\n\tYOUR ENCRYPTED CODE: \n\n\n\t \xdb %s \xdb", code);
				break;
				case 2:
					
					for (i = 0; i < 10000; i++){					// code for progress bar
                   printf("\rIn progress %d", i/100);
                   }
                   printf("\n");
   
					
					
					for(i=0;(i<100 && code[i]!=0);i++)
					{
						
						if(code[i]>=100 && code[i]<=122)	// working correctly with all alphabetskb
																			
						{
						code[i]-=3;
					    }
					    else if(code[i]==99 || code[i]==98 || code[i]==97 )
					    {
					    	code[i]=code[i]+26;
					    	code[i]-=3;
				       }
					}
					printf("\n\tYOUR DECRYPTED CODE: \n\n\n\t  \xdb %s \xdb", code);
					break;
					
					default:
					printf("sorry!! :( not valid");	
			}
			

}
