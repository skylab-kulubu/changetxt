#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*-----------------------------------------------------
---------bu kısımda kullanıcıdan hedef yolu + ---------
---------- dosya tipini + uzantisini almayi -----------
------------ planliyoruz.------------------------------
int main(){
const char r;
int o,a,d;
printf("hangi yoldaki dosyalari duzenlemek istersiniz?\n");
scanf("%c", &r);
printf("dosyanın uzantisi nedir?\n");
scanf("%d", &o);
printf("dosyanin adi nedir?\n");
scanf("%d", &a);

  	{
		char str[100];
	  char* nstr;
		char s;
	  int i=0;
		FILE *file;
	
	file = fopen(r , "r");
	if (file) 
	    {
	        // dosyayı bastan sona array ile tara ve arrayda topla
      		while((s=fgetc(file)) != EOF)
        		{
          	 str[i]=s;
          	 i++;
        		}
		//tanımadigimiz array i satir baslari ile ayiriyoruz
		nstr = strtok(str, "\n"); // char* = strtok(char[]," ")-> (fonksiyon tanımı)
 	 //nstr = IP:192.168.10.10(örnegin dosyanın icinde olan ip)
 	 
 	     //array ile tanimladigimiz stringi printf ile yazdiriyoruz sonra kiriyoruz.
 	     while(nstr != NULL)
		      {
			    printf("%s\n", str);
			    nstr = strtok(str, "\n");
	        break;
		      }
	      
	    // dosyasyı kapat
	    fclose(file);
	    }
		
		return 0;
	  }
	}

