#include <stdio.h>

int main(void)
{
    printf("Hello World!\n");

    char arrMovieQuote[255] = "You get to drink from the firehose.";
    char arrMovieTitle[255] = "UHF";
	float productionYear = 1989;
	float amazonPrice = 9.62;
//	int i = 0;

//	while (arrMovieQuote[i])
//	{
//		printf("%c", arrMovieQuote[i]);
//		i++;
//	}
	printf("My favorite movie quote is '%s' from '%s' released in %.0f on Amazon for $%.2f. \n", arrMovieQuote, arrMovieTitle, productionYear, amazonPrice);

//	getchar();
    return 0;
}
