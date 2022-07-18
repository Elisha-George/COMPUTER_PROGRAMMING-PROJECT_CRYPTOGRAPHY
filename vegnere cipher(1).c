#include <stdio.h>

int main ()
{
	char alpah_l[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char alpha_u[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char key[x];
	char word[100];
	int x,i;
	
	
	printf("PLEASE EENTR A CODE TO ENCRYPT");
	gets(word);
	
	printf("press 1 for LOWER CASE & 2 for UPPER CASE letters: ");
	scanf("%d", &x);
	
	switch(x) {
		case 1:
			printf("PLEASE ENTER A KEY WORD (SHOULD BE <= 4)");
	    scanf("%c", &x);
	    if(key[x]<=4){
	    	for(i=0;(i<100 && word[i]!=0);i++)
	    	{
	    		word[i]=key[i];
					
					if(key[i]> x)	
					{	
						key[i-4];			    		//(key[i]==alpha_1[26]){
					}		
									    		//	key[i]=alpha_l[i];
			}
			
			printf("\n\n%s", word);
		}
	    
	    
	    






	    
	    
	    case 2:
	    	printf("PLEASE ENTER A KEY WORD (SHOULD BE <= 4)");
	scanf("%c",&key);
	   
}
	
	
	
	
}
