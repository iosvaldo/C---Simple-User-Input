#include <stdio.h>
// #include <string.h>
  
// int main(void)
// {
//   char word[100], name[50];
//   printf("What is your name? ");
//   fgets(name,sizeof (name),stdin);
//   // scanf("%[^\n]", name);
//   printf("Enter your sentence: ");
//   // scanf("%[^\n]",word); 
//   fgets(word,sizeof (word),stdin);
//   // scanf("%s", word);
//   printf("Output : %s", word);
//     return 0;
// }


int main(){
  char name[100];
  printf("Hi, What is your name ? ");
  fgets( name, sizeof(name),stdin);

  char sentence[100];
  printf("Enter you sentence: ");
  fgets( sentence,sizeof(sentence),stdin);

  printf( "Hi %s You Wrote: %s\n", name, sentence);
  return 0;
}