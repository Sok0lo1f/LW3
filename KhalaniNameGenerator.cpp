// KhalaniNameGenerator.cpp : Defines the entry point for the console application.
//

//Просто нужно хоть что-то изменить, блин

#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "time.h"
#include "conio.h"
#include "stdlib.h"

int randomChoice()
{
	int choice = -1;
	choice = 1 + rand() % 4;
	printf("~Choice have been made.~");
	return choice;
}

void manyDots(int iterations)
{
	int i;
	for (i = 0; i < iterations; i++)
		printf("...\n");
}

int main()
{
	int choice, choiceAux;
	choice = 0;
	choiceAux = 0;

	srand(time(NULL));

	printf("Preparing khaydarin memory matrix...\n");
	manyDots(3);
	printf("Crystal Preserver is ready.\n\n");
	printf("~I am at your service~\n\n");
	
	do
	{
		printf("~Nas beru unh'adarr?~\n\n");
		printf("1. I want you to make a name.\n");
		printf("2. Show me wisdom of the past.\n");
		printf("3. Tell me about marvels of the past.\n");
		printf("4. Nothing for now.\n");
		printf("Enter your choice: ");
		scanf_s("%d", &choice);
		switch (choice)
		{
			case 1:
				int first, second;
				printf("\n~As you order~\n\n");
				first = 1 + rand() % 16;
				second = 1 + rand() % 10;

				printf("~The name shall be ");
				switch (first)
				{
				case 1:
					printf("Tassa");
				break;
				
				case 2:
					printf("Tal");
				break;
				
				case 3:
					printf("Ur");
				break;
				
				case 4:
					printf("Arta");
				break;
				
				case 5:
					printf("Ala");
				break;
				
				case 6:
					printf("Zera");
				break;
				
				case 8:
					printf("Kar");
				break;
				
				case 9:
					printf("Ulre");
				break;
				
				case 10:
					printf("Voraz");
				break;
				
				case 11:
					printf("Selen");
				break;
				
				case 12:
					printf("Clola");
				break;
				
				case 13:
					printf("Kha");
				break;
				
				case 14:
					printf("Alda");
				break;
				
				case 15:
					printf("Mohan");
				break;
				}
				switch (second)
				{
				case 1:
					printf("nis");
				break;

				case 2:
					printf("ris");
				break;

				case 3:
					printf("is");
				break;

				case 4:
					printf("dis");
				break;

				case 5:
					printf("andar");
				break;

				case 6:
					printf("rak");
				break;

				case 7:
					printf("zaj");
				break;

				case 8:
					printf("rion");
				break;

				case 9:
					printf("un");
				break;
				}
				printf("~\n\n");
			break;

			case 2:
				int number;
				number = 1 + rand() % 15;
				printf("\n~Accessing data banks...~\n");
				switch (number)
				{
				case 1:
					printf("\"We are all that stands against the shadows. But if we are to meet our end this day, then we will do it so AS ONE! En taro Tassadar!\"\n");
					printf("~Those were the words of Dark Prelate Zeratul right before the very last battle that the Firstborn waged under the unnamed star...~\n");
					printf("~Wait, what? That never happened... Must be some sort of glitch. I apologize for this~\n");
				break;

				case 2:
					printf("\"The future belongs to us.\" - Hierarch Artanis\n");
				break;
				
				case 3:
					printf("\"En taro Adun!\" - ancient battle cry.\n");
				break;

				case 4:
					printf("\"I abandoned everything I knew to study and serve the Khala. I will not forsake my vows - even now.\" - Grand Preserver Rohana.\n");
				break;

				case 5:
					printf("- There was a time when the protoss broken. Throughout the Aeon of Strife, we tore at each other with wanton abandon. Only one path was ever found to end the madness and unify our people: the Khala. The dark ones rejected its light. They denied their own races. How can you fight for them?\n");
					printf("- For one so sworn to preserve our history. Rohana, how can you be so blind to its turn?\n");
					printf("- I... I see I have offended you, Hierarch. My apologies. Adapting to this period is... difficult.\n");
					printf("~Grand Preserver Rohana and Hierarch Artanis aboard The Spear of Adun, high orbit of Shakuras~\n");
				break;

				case 6:
					printf("\"The cost of peace is high, and it is paid for with the lives of the just\" - Executor Adun.\n");
				break;

				case 7:
					printf("\"My friends, this is our final hour. Not all of us may survive the coming conflict. Yet, death may be a blessing should we fail here. We seek now to destroy a foe that has ravaged its way across the universe consuming all in its path. And now it has reached the end of its long journey. The Overmind has come to destroy all that we hold dear and assimilate us into itself. And I say to thee, this shall not come to pass! Aiur shall not fall!\" - Executor Tassadar shortly before the final assault on the Overmind.\n");
				break;

				case 8:
					printf("\"Since our banishment long ago, we have never failed in our responsibility to Aiur. Though it shall cause us great pain to see our homeland once more, we shall return with you, Tassadar. We will do what we can.\" - Dark Prelate Zeratul accepts Executor Tassadar's request to return to Aiur.\n");
				break;

				case 9:
					printf("\"My life for Auir\" - battle cry and Dark Prelate Zeratul's epitaph.\n");
				break;

				case 10:
					printf("\"Hesitation leads to defeat\" - Dark Prelate Zeratul.\n");
				break;

				case 11:
					printf("\"Through the darkest night, we await the coming of the dawn\" - Dark Prelate Zeratul.\n");
				break;

				case 12:
					printf("\"I fear no enemy. For the Khala is my strength!\" - Praetor Fenix.\n");
				break;

				case 13:
					printf("\"Adun; Tassadar; Zeratul. All of my mentors met an early end. Perhaps the cost of greatness is too high\" - Hierarch Artanis.\n");
				break;

				case 14:
					printf("\"Victory or death. There is no alternative\" - unknown Scout pilot.\n");
				break;
				}
			break;

			case 4:
				int number;
				number = 1 + rand() % 7;
				printf("\n~Accessing data banks...~\n");
				switch (number)
				{
				case 1:
					printf("~The colossi was the most terrifying war machines that space have ever known. Those quadropedal giants could easily climb even the highest mountains to bring death from above.~\n");
					printf("~They were prohibited for centuries... and brought back to the battlefield at the our darkest hour.~\n");
					break;

				case 2:
					printf("~When ruin had come to our people, even the most peaceful creations have turned into weapons - just as motherships did.~\n");
					printf("~Created for studying and colonization, these shipbuilding crowns became a true horror for enemies of the Firstborn.~\n");
				break;

				case 3:
					printf("~You have probably seen psi-blades, so I think that you don't need any explanations about them.~\n");
					break;

				case 4:
					printf("~Although khaydarin crystals are xel-naga's legacy, they are the foundation of our progress and culture. The Firstborn wouldn't have succeed without them.~\n");
					printf("~Warp-in, communications, weaponry, craft and art - even my very existence depends on those crystals.~\n");
				break;

				case 5:
					printf("~Even the motherships have never surpassed The Spear of Adun - the symbol of glory and hope for countless generations that came after Hierarch Artanis.~\n");
					printf("~Created millenias ago with two his brothers that was lost during the civil war, the ship was intended to be a vessel of salvation for entire race - when the time will be right.~\n");
					printf("~Equiped with cutting-edge technologies, The Spear of Adun became a great asset in The Last War that drastically turned the tide in favour of the Firstborn.~\n");
					break;

				case 6:
					printf("~Warrior's service for his people can't end even after his death.~\n");
					printf("~'Twas a great honour - to be put into the shell of dragoon. Some had stepped ever more far and made stalkers from themselves.~\n");
					printf("~Their sacrifices will never be forgotten.~\n");
				break;
				}
			break;

			case 42:
				printf("\n~Have you known that there is no overall reason to live? Yet I have mine, because I know my predestination.~\n");
			break;

			default:
				printf("\n~I am sorry, but I can't recognize this command~\n\n");
			break;
		}
	} while (choice != 4);

	printf("~En taro Adun~\n");
	manyDots(3);
	printf("Khaydarin matrix deactivated.\n");
    return 0;
}

