#include <stdio.h>
#include <string.h>
  
int main(void)
{
  // char word[100], name[50];
   // char word[100], name[50]
  printf("What is your name? ");
  fgets(name,sizeof (name),stdin);
  // scanf("%[^\n]", name);
  printf("Enter your sentence: ");
  // scanf("%[^\n]",word); 
  fgets(word,sizeof (word),stdin);
  // scanf("%s", word);
  printf("Output : %s", word);
    return 0;
}