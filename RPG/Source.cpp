#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>  
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

	srand((unsigned)time(0));

	//General
	int choice, opponent, attack, attackSuccess, level = 1, attribute, damage, scaleEnemy = 0, difficulty, decision, item;
	//Enemy
	int attackEnemy, defenseEnemy, speedEnemy, healthEnemy = 100, critEnemy, expEnemy, goldEnemy;
	//Player
	int attackPlayer, defensePlayer, speedPlayer, healPlayer, healthPlayer = 100, exp = 0, gold = 0, levelup = 200;
	//Names
	string namePlayer, nameEnemy;
	char exit;

	//Classes
	do {
		cout << "Hello! Thanks for playing this game. Have fun!\n" << endl;

		cout << "(1) Wizard:\nattack - 50\ndefense - 40\nspeed - 60\n" << endl;
		cout << "(2) Paladin:\nattack - 50\ndefense - 75\nspeed - 30\n" << endl;
		cout << "(3) Warrior:\nattack - 60\ndefense - 50\nspeed - 50\n" << endl;
		cout << "(4) Assassin:\nattack - 40\ndefense - 40\nspeed - 65\n" << endl;
		cout << "(5) Warlock:\nattack - 60\ndefense - 65\nspeed - 40\n" << endl;

		cout << "Which class would you like to play?: ";
		cin >> choice;
		cout << "You must enter a number between 1 and 5!\n\n";
		if (choice < 1 || choice > 6)
		{
			system("cls");
			cout << "You must enter a number between 1 and 5!\n\n";
			system("pause");
			system("cls");
		}
	} while (choice < 1 || choice > 6);

	//Info
	switch (choice)
	{
	case 1:
		attackPlayer = 50, defensePlayer = 40, speedPlayer = 60, namePlayer = "Wizard";
		break;
	case 2:
		attackPlayer = 50, defensePlayer = 60, speedPlayer = 40, namePlayer = "Paladin";
		break;
	case 3:
		attackPlayer = 60, defensePlayer = 50, speedPlayer = 50, namePlayer = "Warrior";
		break;
	case 4:
		attackPlayer = 40, defensePlayer = 40, speedPlayer = 65, namePlayer = "Assassin";
		break;
	case 5:
		attackPlayer = 60, defensePlayer = 65, speedPlayer = 40, namePlayer = "Warlock";
		break;
	default:
		break;
	}
	do {
		do {
			system("cls");
			cout << "Hello " << namePlayer << ". What do you want to do?\n\n";
			cout << "(1)\n**********\nGo to the Arena\n**********\n\n";
			cout << "(2)\n**********\nGo to the Armory\n**********\n\nChoice: ";
			cin >> decision;

			switch (decision)
			{
			case 1:
				int random1, random2, random3;
				random1 = (rand() % 4) + 1;
				random2 = (rand() % 4) + 1;
				random3 = (rand() % 4) + 1;
				if (healthEnemy == 0)
					healthEnemy = 100;
				system("cls");

				do {
					cout << "Welcome to the arena, " << namePlayer << ". Which one of the opponents do you want to fight?\n" << endl;
					difficulty = (level * -1);
					switch (random1)
					{
					case 1:
						if (level <= 1)
						{
							cout << "(" << difficulty + 2 << ")\n***************\nTimber Wolf(lvl 1):\n attack - 0\n defense - 20\n speed - 0\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if (level <= 1)
						{
							cout << "(" << difficulty + 2 << ")\n***************\nDwarven Sharpshooter(lvl 1):\n attack - 0\n defense - 30\n speed - 0\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if (level <= 1)
						{
							cout << "(" << difficulty + 2 << ")\n***************\nPharaoh Cat(lvl 1):\n attack - 0\n defense - 10\n speed - 0\n***************\n";
							cout << endl;
						}
						break;
					case 4:
						if (level <= 1)
						{
							cout << "(" << difficulty + 2 << ")\n***************\nKaren(lvl 1):\n attack - 0\n defense - 5\n speed - 0\n***************\n";
							cout << endl;
						}
						break;
					default:
						break;
					}
					switch (random2)
					{
					case 1:
						if (level <= 2)
						{
							cout << "(" << difficulty + 3 << ")\n***************\nSteel Beetle(lvl 2):\n attack - 30\n defense - 20\n speed - 30\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if (level <= 2)
						{
							cout << "(" << difficulty + 3 << ")\n***************\nScavenging Hyena(lvl 2):\n attack - 40\n defense - 20\n speed - 30\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if (level <= 2)
						{
							cout << "(" << difficulty + 3 << ")\n***************\nMana Wyrm(lvl 2):\n attack - 45\n defense - 25\n speed - 30\n***************\n";
							cout << endl;
						}
						break;
					case 4:
						if (level <= 2)
						{
							cout << "(" << difficulty + 3 << ")\n***************\nMana Cyclone(lvl 2):\n attack - 30\n defense - 20\n speed - 35\n***************\n";
							cout << endl;
						}
						break;
					default:
						break;
					}
					switch (random3)
					{
					case 1:
						if (level <= 3)
						{
							cout << "(" << difficulty + 4 << ")\n***************\nPyromaniac(lvl 3):\n attack - 65\n defense - 35\n speed - 45\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if (level <= 3)
						{
							cout << "(" << difficulty + 4 << ")\n***************\nFlamewalker(lvl 3):\n attack - 60\n defense - 50\n speed - 50\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if (level <= 3)
						{
							cout << "(" << difficulty + 4 << ")\n***************\nArcane Amplifier(lvl 3):\n attack - 65\n defense - 55\n speed - 45\n***************\n";
							cout << endl;
						}
						break;
					case 4:
						if (level <= 3)
						{
							cout << "(" << difficulty + 4 << ")\n***************\nVoid Terror(lvl 3):\n attack - 55\n defense - 45\n speed - 55\n***************\n";
							cout << endl;
						}
						break;
					default:
						break;
					}
					switch (random1)
					{
					case 1:
						if ((level <= 4) && (level >= 2))
						{
							cout << "(" << difficulty + 5 << ")\n***************\nMistwraith(lvl 4):\n attack - 75\n defense - 35\n speed - 55\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if ((level <= 4) && (level >= 2))
						{
							cout << "(" << difficulty + 5 << ")\n***************\nPlaguebringer(lvl 4):\n attack - 65\n defense - 30\n speed - 60\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if ((level <= 4) && (level >= 2))
						{
							cout << "(" << difficulty + 5 << ")\n***************\nHench-Clan Burglar(lvl 4):\n attack - 75\n defense - 35\n speed - 55\n***************\n";
							cout << endl;
						}
						break;
					case 4:
						if ((level <= 4) && (level >= 2))
						{
							cout << "(" << difficulty + 5 << ")\n***************\nYeti(lvl 4):\n attack - 70\n defense - 40\n speed - 50\n***************\n";
							cout << endl;
						}
						break;
					default:
						break;
					}
					switch (random2)
					{
					case 1:
						if ((level <= 5) && (level >= 3))
						{
							cout << "(" << difficulty + 6 << ")\n***************\nOasis Surger(lvl 5):\n attack - 80\n defense - 45\n speed - 45\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if ((level <= 5) && (level >= 3))
						{
							cout << "(" << difficulty + 6 << ")\n***************\nStarving Buzzard(lvl 5):\n attack - 65\n defense - 55\n speed - 50\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if ((level <= 5) && (level >= 3))
						{
							cout << "(" << difficulty + 6 << ")\n***************\nEarth Elemental(lvl 5):\n attack - 75\n defense - 45\n speed - 50\n***************\n";
							cout << endl;
						}
						break;
					case 4:
						if ((level <= 5) && (level >= 3))
						{
							cout << "(" << difficulty + 6 << ")\n***************\nAbomination(lvl 5):\n attack - 80\n defense - 55\n speed - 30\n***************\n";
							cout << endl;
						}
						break;
					default:
						break;
					}
					switch (random3)
					{
					case 1:
						if (level <= 6 && level >= 4)
						{
							cout << "(" << difficulty + 7 << ")\n***************\nCenarius(lvl 6):\n attack - 85\n defense - 55\n speed - 60\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if (level <= 6 && level >= 4)
						{
							cout << "(" << difficulty + 7 << ")\n***************\nKing Krush(lvl 6):\n attack - 90\n defense - 65\n speed - 55\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if (level <= 6 && level >= 4)
						{
							cout << "(" << difficulty + 7 << ")\n***************\nArchmage Antonidas(lvl 6):\n attack - 75\n defense - 70\n speed - 50\n***************\n";
							cout << endl;
						}
						break;
					case 4:
						if (level <= 6 && level >= 4)
						{
							cout << "(" << difficulty + 7 << ")\n***************\nAl'Akir the Windlord(lvl 6):\n attack - 70\n defense - 60\n speed - 55\n***************\n";
							cout << endl;
						}
						break;
					default:
						break;
					}
					if (level <= 99 && level >= 5)
					{
						cout << "(" << difficulty + 8 << ")\n***************\nSocial Justice Warrior(lvl ?):\n attack - ??\n defense - ??\n speed - ??\n***************\n";
						cout << endl;
					}
					cout << "Choice: ";
					cin >> opponent;
					if ((opponent > 3) || (opponent < 1))
					{
						system("cls");
						cout << "Enter a value between 1 and 3!\n\n";
						system("pause");
						system("cls");
					}
				} while ((opponent > 3) || (opponent < 1));
				system("cls");
				opponent = opponent + scaleEnemy;

				switch (opponent)
				{
				case 1:
					switch (random1)
					{
					case 1:
						attackEnemy = 0, defenseEnemy = 20, speedEnemy = 0, nameEnemy = "Timber Wolf", expEnemy = 40, goldEnemy = 20;
						break;
					case 2:
						attackEnemy = 0, defenseEnemy = 30, speedEnemy = 0, nameEnemy = "Dwarven Sharpshooter", expEnemy = 60, goldEnemy = 30;
						break;
					case 3:
						attackEnemy = 0, defenseEnemy = 10, speedEnemy = 0, nameEnemy = "Pharaoh Cat", expEnemy = 20, goldEnemy = 10;
						break;
					case 4:
						attackEnemy = 0, defenseEnemy = 5, speedEnemy = 0, nameEnemy = "Karen", expEnemy = 10, goldEnemy = 5;
						break;
					}
					break;
				case 2:
					switch (random2)
					{
					case 1:
						attackEnemy = 30, defenseEnemy = 20, speedEnemy = 30, nameEnemy = "Steel Beetle", expEnemy = 160, goldEnemy = 80;
						break;
					case 2:
						attackEnemy = 40, defenseEnemy = 20, speedEnemy = 30, nameEnemy = "Scavenging Hyena", expEnemy = 180, goldEnemy = 90;
						break;
					case 3:
						attackEnemy = 45, defenseEnemy = 25, speedEnemy = 30, nameEnemy = "Mana Wyrm", expEnemy = 200, goldEnemy = 100;
						break;
					case 4:
						attackEnemy = 35, defenseEnemy = 20, speedEnemy = 35, nameEnemy = "Mana Cyclone", expEnemy = 180, goldEnemy = 90;
						break;
					}
					break;
				case 3:
					switch (random3)
					{
					case 1:
						attackEnemy = 65, defenseEnemy = 35, speedEnemy = 45, nameEnemy = "Pyromaniac", expEnemy = 290, goldEnemy = 145;
						break;
					case 2:
						attackEnemy = 60, defenseEnemy = 50, speedEnemy = 50, nameEnemy = "Flamewalker", expEnemy = 320, goldEnemy = 160;
						break;
					case 3:
						attackEnemy = 65, defenseEnemy = 55, speedEnemy = 45, nameEnemy = "Arcane Amplifier", expEnemy = 330, goldEnemy = 165;
						break;
					case 4:
						attackEnemy = 55, defenseEnemy = 45, speedEnemy = 55, nameEnemy = "Void Terror", expEnemy = 310, goldEnemy = 155;
						break;
					}
					break;
				case 4:
					switch (random1)
					{
					case 1:
						attackEnemy = 85, defenseEnemy = 35, speedEnemy = 65, nameEnemy = "Mistwraith", expEnemy = 330, goldEnemy = 165;
						break;
					case 2:
						attackEnemy = 75, defenseEnemy = 30, speedEnemy = 70, nameEnemy = "Plaguebringer", expEnemy = 310, goldEnemy = 155;
						break;
					case 3:
						attackEnemy = 85, defenseEnemy = 35, speedEnemy = 85, nameEnemy = "Hench-Clan Burglar", expEnemy = 330, goldEnemy = 165;
						break;
					case 4:
						attackEnemy = 80, defenseEnemy = 40, speedEnemy = 60, nameEnemy = "Yeti", expEnemy = 320, goldEnemy = 160;
						break;
					}
					break;
				case 5:
					switch (random2)
					{
					case 1:
						attackEnemy = 90, defenseEnemy = 45, speedEnemy = 55, nameEnemy = "Oasis Surger", expEnemy = 340, goldEnemy = 170;
						break;
					case 2:
						attackEnemy = 80, defenseEnemy = 55, speedEnemy = 60, nameEnemy = "Starving Buzzard", expEnemy = 350, goldEnemy = 175;
						break;
					case 3:
						attackEnemy = 85, defenseEnemy = 45, speedEnemy = 70, nameEnemy = "Earth Elemental", expEnemy = 340, goldEnemy = 170;
						break;
					case 4:
						attackEnemy = 90, defenseEnemy = 55, speedEnemy = 45, nameEnemy = "Abomination", expEnemy = 340, goldEnemy = 170;
						break;
					}
					break;
				case 6:
					switch (random3)
					{
					case 1:
						attackEnemy = 105, defenseEnemy = 55, speedEnemy = 70, nameEnemy = "Cenarius", expEnemy = 400, goldEnemy = 200;
						break;
					case 2:
						attackEnemy = 110, defenseEnemy = 65, speedEnemy = 65, nameEnemy = "King Krush", expEnemy = 420, goldEnemy = 210;
						break;
					case 3:
						attackEnemy = 95, defenseEnemy = 70, speedEnemy = 60, nameEnemy = "Archmage Antonidas", expEnemy = 390, goldEnemy = 195;
						break;
					case 4:
						attackEnemy = 90, defenseEnemy = 60, speedEnemy = 65, nameEnemy = "Al'Akir the Windlord", expEnemy = 370, goldEnemy = 185;
						break;
					}
					break;
				case 7:
					attackEnemy = 90, defenseEnemy = 60, speedEnemy = 65, nameEnemy = "Social Justice Warrior", expEnemy = 370, goldEnemy = 185;
					break;
				default:
					break;
				}
				//Hit rate
				attackSuccess = speedPlayer - defenseEnemy + 50;
				cout << "First Round is: " << namePlayer << " vs. " << nameEnemy << "!";

				//Damage dealt
				damage = attackPlayer - defenseEnemy;
				critEnemy = 100 - defensePlayer;
				attackEnemy = attackEnemy - defensePlayer;
				if (attackEnemy < 0)
					attackEnemy = 0;
				else
					attackEnemy = attackEnemy;
				do
				{
					//RNG
					int random4, random5;
					random4 = rand() % 100;
					random5 = rand() % 100;
					system("CLS");

					//Treshold
					if (attackSuccess > 100)
						attackSuccess = 100;
					else
						attackSuccess = attackSuccess;

					//Options
					do
					{
						healPlayer = attackEnemy - 5;

						if (healPlayer <= 0)
							healPlayer = 10;

						cout << "What would you like to do?\n\n"
							<< "(1)\n***************\nattack: " << attackSuccess << "% chance of success.\n***************\n\n"
							<< "(2)\n***************\nheal + " << healPlayer << "hp.\n***************\n\nChoice: ";
						cin >> attack;
						if (attack > 3)
						{
							system("cls");
							cout << "You must select between 1 or 2!\n\n";
							system("pause");
							system("cls");
						}
					} while (attack > 3);
					system("cls");
					cout << "Calculating results";
					system("cls");
					switch (attack)
					{
					case 1:
						if (random4 <= attackSuccess)
						{
							if (random4 <= 10)
							{
								cout << "CRITICAL DAMAGE!\n\n";
								damage = damage * 2;
							}
							if (damage < 0)
								damage = 5;
							cout << "You took away " << damage << " health points from " << nameEnemy << "!\n\n";
							healthEnemy = healthEnemy - damage;
							if (healthEnemy < 0)
								healthEnemy = 0;
							cout << "The " << nameEnemy << "'s health is: " << healthEnemy << endl << "Your health is: " << healthPlayer << endl << endl;
							if (random4 <= 10)
								damage = damage / 2;
						}
						else
						{
							cout << "You missed!\n\n";
							cout << "The " << nameEnemy << "'s health is: " << healthEnemy << endl << "Your health is: " << healthPlayer << endl << endl;
						}
						break;
					case 2:
						if (healthPlayer < 100)
						{
							healthPlayer = healthPlayer + healPlayer;
							cout << "You recovered from " << healthPlayer - healPlayer << ", to " << healthPlayer << "." << endl << endl;
						}
						else
							cout << "Your health is already full!" << endl << endl;
						break;
					default:
						break;
					}
					system("pause");
					system("cls");
					if (healthEnemy > 0)
					{
						cout << "The opponent is now attacking";
						system("cls");
						if (critEnemy <= random5)
						{
							if (random5 <= 5)
							{
								cout << "CRITICAL DAMAGE!\n\n\a";
								attackEnemy = attackEnemy + 15;
							}
							if (attackEnemy <= 0)
								attackEnemy = 5;
							if (opponent == 1)
								attackEnemy = 0;
							cout << "The opponent took away " << attackEnemy << " health points from you!\n\n";
							healthPlayer = healthPlayer - attackEnemy;
							if (healthPlayer < 0)
								healthPlayer = 0;
							cout << "Opponent's health is: " << healthEnemy << endl << "Your health is: " << healthPlayer << endl << endl;
							if (random5 <= 5)
								attackEnemy = attackEnemy - 15;
						}
						else
						{
							cout << "The opponent missed!\n\n";
							cout << "Opponent's health is: " << healthEnemy << endl << "Your health is: " << healthPlayer << endl << endl;
						}
						system("pause");
					}
				} while ((healthEnemy >= 1) && (healthPlayer >= 1));
				system("cls");
				if (healthEnemy >= 1)
				{
					cout << "You were defeated by the " << nameEnemy << "\n\n";
				}
				else if (opponent != 7)
				{
					if (healthPlayer > 0)
					{
						healthPlayer = 100;
						cout << "You have gained " << expEnemy << " experience, and " << goldEnemy << " gold!\n\n";
						exp = exp + expEnemy;
						gold = gold + goldEnemy;
						cout << "You have " << exp << " experience points!\n";
						if (levelup > exp)
							cout << "You need " << levelup - exp << " more exp points to level up.\n";
						cout << "You have " << gold << "gold" << endl;
						system("pause");
						system("cls");
					}
					if (exp >= levelup)
					{
						scaleEnemy++;
						level++;
						cout << "Good job! You are now level " << level << "!\n\n";
						cout << "Which attribute do you want to increase by 5 points?" << endl;
						cout << endl << "(1)\n*****\nattack\n*****\n\n(2)\n*****\ndefense\n*****\n\n(3)\n*****\nspeed\n*****\n\n:";
						cin >> attribute;
						switch (attribute)
						{
						case 1:
							attackPlayer = attackPlayer + 5;
							break;
						case 2:
							defensePlayer = defensePlayer + 5;
							break;
						case 3:
							speedPlayer = speedPlayer + 5;
							break;
						default:
							break;
						}
						system("cls");
						cout << "Your current Stats are:\nattack - " << attackPlayer << "\ndefense - " << defensePlayer << "\nspeed - " << speedPlayer << endl;
						system("pause");
						system("cls");
						levelup = levelup * 2;
					}
				}
				system("pause");
				break;
			case 2:
				do {
					do {
						system("cls");
						cout << "You have " << gold << " gold left.\n\n";
						cout << "What item would you like to purchase?\n\n";
						cout << "(1) Butter Knife (+5 attack) - 300 gold\n";
						cout << "(2) Fight Club (+10 attack) - 500 gold\n";
						cout << "(3) Thunderfury, Blessed Blade of the Windseeker (+15 attack) - 700 gold\n\n";
						cout << "(4) Buckler (+5 defense) - 300 gold\n";
						cout << "(5) Shield (+10 defense) - 500 gold\n";
						cout << "(6) Giant Yeti's Bowl (+15 defense) - 700 gold\n\n";
						cout << "(7) Crocs Shoes (+5 speed) - 300 gold\n";
						cout << "(8) Running Shoes (+10 speed) - 500 gold\n";
						cout << "(9) Tesla (+15 speed) - 700 gold\n\n";
						cout << "(10) Exit\n\nChoice: ";
						cin >> item;
						system("cls");
					} while ((item > 10) || (item < 0));

					switch (item)
					{
					case 1:
						if (gold >= 300)
						{
							cout << "You have gained 5 attack!\n\n";
							gold = gold - 300;
							attackPlayer = attackPlayer + 5;
							break;
						}
					case 2:
						if (gold >= 500)
						{
							cout << "You have gained 10 attack!\n\n";
							gold = gold - 500;
							attackPlayer = attackPlayer + 10;
							break;
						}
					case 3:
						if (gold >= 700)
						{
							cout << "You have gained 15 attack!\n\n";
							gold = gold - 700;
							attackPlayer = attackPlayer + 15;
							break;
						}
					case 4:
						if (gold >= 300)
						{
							cout << "You have gained 5 defense!\n\n";
							gold = gold - 300;
							defensePlayer = defensePlayer + 5;
							break;
						}
					case 5:
						if (gold >= 500)
						{
							cout << "You have gained 10 defense!\n\n";
							gold = gold - 500;
							defensePlayer = defensePlayer + 10;
							break;
						}
					case 6:
						if (gold >= 700)
						{
							cout << "You have gained 15 defense!\n\n";
							gold = gold - 700;
							defensePlayer = defensePlayer + 15;
							break;
						}
					case 7:
						if (gold >= 300)
						{
							cout << "You have gained 5 speed!\n\n";
							gold = gold - 300;
							speedPlayer = speedPlayer + 5;
							break;
						}
					case 8:
						if (gold >= 500)
						{
							cout << "You have gained 10 speed!\n\n";
							gold = gold - 500;
							speedPlayer = speedPlayer + 10;
							break;
						}
					case 9:
						if (gold >= 700)
						{
							cout << "You have gained 15 speed!\n\n";
							gold = gold - 700;
							speedPlayer = speedPlayer + 15;
							break;
						}
					default:
						break;
					}

					//Exit armory
					cout << "Would you like to exit? (y or n): ";
					cin >> exit;
					system("cls");
				} while (exit != 'y');
				break;
			default:
				cout << "Please select 1 or 2!";
			}

		} while ((healthPlayer >= 1) && (opponent != 7));

	} while ((healthPlayer >= 1) && (opponent != 7));

	if (healthPlayer >= 1)
		cout << "YOU WON!\n";

	return 0;
}