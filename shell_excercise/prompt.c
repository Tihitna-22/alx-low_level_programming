#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *string; // character array pointer
    
    size_t size = 10; // initial size of char array

     printf("$");
    string = (char*) malloc (size);//dynamic memory allocation of character array
   
    if(string == NULL)
    {
        printf("unable to allocate memory");
        exit(1);
    }
    else
    {
        char **string_pointer = &string; // double pointer to char array
    
	 size_t characters = getline(string_pointer,&size,stdin);
       (*string_pointer)[characters - 1] = '\0';
	 printf("%s\n", string);
	   return 0;   
    }
  
}
