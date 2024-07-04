#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int displayLogoGame_05()
{
    FILE *file;
    char ch;

    // Open the text file
    file = fopen("C:\\Users\\mriga\\OneDrive\\Desktop\\Aracde_Sem_1\\Games\\Game_5\\Game_5_Ascii.txt", "r");

    // Check if the file exists
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read and print the content character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

}

int scoreGame_05 = 0;

void printBody(int c);
void playHangman()
{
   srand(time(NULL));
char wordsg[][10]={"apple", "boy","cat","dog","elephant","fish","giraffe","pillow","jazz","quiz","zinc","junk","freeze","snowstorm","thermometer","disney","follow","friends","teach","miracle"};
int random=rand()%20;
int i=0;
int lives=7;
int correct=0;//tocheck how many guess are correct
int a;//inputted guess was right or not
int len=strlen(wordsg[random]);
int quit=0;
int count=0;
int letterg[10]={0,0,0,0,0,0,0,0,0,0};
char guess[10];
char letterentered;
printf("\n");
while(correct<len)
{

    printf(" HANGMAN WORD : ");

    for(i=0;i<len;i++)
    {
        if(letterg[i]==1)
        {
            printf("%c",wordsg[random][i]);
        }
        else
        {
            printf("-");
        }
    }
    printf("\n");
    printf("\n");
    printf("NUMBER OF LETTERS CORRECT SO FAR : %d\n", correct);
printf("GUESS A LETTER \n");
gets(guess);
if(strcmp(guess,"quit")==0){
quit=1;
break;
}
letterentered=guess[0];
printf("LETTER ENTERED : %c\n",letterentered);
a=correct;
for(i=0;i<len;i++)
{
    if(letterg[i]==1)
    {
        continue;
    }
    if(letterentered==wordsg[random][i])
    {
        letterg[i]=1;
        correct++;
    }
}
if(a==correct)
{
    lives--;
     count++;

    printf(" WRONG GUESS \n");
     printBody(count);
    if(lives==0)
    {
        break;
    }
}
else{
    printf(" RIGHT GUESS \n");
}
}
if(quit==1)
    {
        printf("THE USER HAS CHOSEN TO QUIT THE GAME \n");
    }
    else if(lives==0)
    {
        printf("NO MORE MOVES LEFT \n");
        printf("THE WORD WAS %s\n", strupr(wordsg[random]));
    }
    else{
        printf("YOU WIN \n");

}
printf("\n");
}
void printBody(int count) {
		if (count == 1) {

			printf(" \n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("___|___\n");
			printf("\n");
			printf("\n");
		}
		if (count == 2) {

			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("___|___\n");
		}
		if (count == 3) {

			printf("   ____________\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("   | \n");
			printf("___|___\n");
		}
		if (count == 4) {

			printf("   ____________\n");
			printf("   |          _|_\n");
			printf("   |         /   \\\n");
			printf("   |        |     |\n");
			printf("   |         \\_ _/\n");
			printf("   |\n");
			printf("   |\n");
			printf("   |\n");
			printf("___|___\n");
		}
		if (count == 5) {

			printf("   ____________\n");
			printf("   |          _|_\n");
			printf("   |         /   \\\n");
			printf("   |        |     |\n");
			printf("   |         \\_ _/\n");
			printf("   |           |\n");
			printf("   |           |\n");
			printf("   |\n");
			printf("___|___\n");
		}
		if (count == 6) {

			printf("   ____________\n");
			printf("   |          _|_\n");
			printf("   |         /   \\\n");
			printf("   |        |     |\n");
			printf("   |         \\_ _/\n");
			printf("   |           |\n");
			printf("   |           |\n");
			printf("   |          / \\ \n");
			printf(" __|__       /   \\\n");
		}
		if (count == 7) {

			printf("GAME OVER!\n");
			printf("    ____________\n");
			printf("    |          _|_\n");
			printf("    |         /   \\\n");
			printf("    |        |     |\n");
			printf("    |         \\_ _/\n");
			printf("    |          _|_\n");
			printf("    |         / | \\\n");
			printf("    |          / \\ \n");
			printf("  __|__       /   \\\n");

}}



int Game5(){
    system("cls");
    displayLogoGame_05();
    char playAgain = 'y';
    while (playAgain == 'y') {
        playHangman();

        printf("YOUR SCORE IS: %d \n \n", scoreGame_05);

        printf("Would you like to play again? (y/n): ");

        scanf(" %c", &playAgain);
    }
    if(playAgain=='n')
        {
        system("cls");
        main();

        }
    return 0;
}



