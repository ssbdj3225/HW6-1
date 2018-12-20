#include<stdio.h>

struct card {
	char *face;
	char *suit;
};

int main(void)
{
	struct card aCard, *cardptr;

	aCard.face = "Ace";
	aCard.suit = "Spades";

	cardptr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit, cardptr->face, " of ", cardptr->suit, (*cardptr).face, " of ", (*cardptr).suit);

	system("pause");
	return 0;
}