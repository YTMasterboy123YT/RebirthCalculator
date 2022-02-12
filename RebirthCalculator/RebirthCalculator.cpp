#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <thread>

float DarkStarLevels[21] = {
	1250, // level 1
	2500, // level 2
	3750, // level 3
	5000, // level 4
	6250, // level 5
	7500, // level 6
	8750, // level 7
	10000, // level 8
	11250, // level 9
	12500, // level 10
	13750, // level 11
	15000, // level 12
	16250, // level 13
	17500, // level 14
	18750, // level 15
	20000, // level 16
	21250, // level 17
	22500, // level 18
	23750, // level 19
	0, // level 20 [[ its actually 25000 but for math reasons it is 0 ]]
};
float AccurateGlitchingNumbers[20] = {
	1250,
	3750,
	7500,
	12500,
	18750,
	26250,
	35000,
	45000,
	56250,
	68750,
	82500,
	97500,
	113750,
	131250,
	150000,
	170000,
	191250,
	213750,
	237500
};

float MuscleKingLevels[20] = {
	3000,
	4500,
	6000,
	7500,
	9000,
	10500,
	12000,
	13500,
	15000,
	16500,
	18000,
	19500,
	21000,
	22500,
	24000,
	25500,
	27000,
	28500,
	30000,
	0
};
float AccurateMuscleKingGlitchingNumbers[20] = {
	3000,
	7500,
	13500,
	21000,
	30000,
	40500,
	52500,
	66000,
	81000,
	97500,
	115500,
	135000,
	156000,
	178500,
	202500,
	228000,
	255000,
	283500,
	313500
};

void Pause(std::string option) {
	std::system("pause");
	if (option == "clear") {
		std::system("CLS");
	}
}

std::string GetFormattedXp(std::string _Name, int Xp) {
	std::string Output = "Level ";
	int ElevatedXp = 0;
	int Levels = 0;
	if (_Name == "Darkstar") {
		for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
			if (Xp >= AccurateGlitchingNumbers[i]) {
				ElevatedXp = AccurateGlitchingNumbers[i];
				Levels = Levels + 1;
			}
			else {
				Xp = Xp - ElevatedXp;
				break;
			}
		}
	}
	if (_Name == "Aura") {
		for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
			if (Xp >= AccurateMuscleKingGlitchingNumbers[i]) {
				ElevatedXp = AccurateMuscleKingGlitchingNumbers[i];
				Levels = Levels + 1;
			}
			else {
				Xp = Xp - ElevatedXp;
				break;
			}
		}
	}
	Levels = Levels + 1;
	Output = Output + std::to_string(Levels) + ", Xp " + std::to_string(Xp);
	return Output;
}

std::string GetGlitchingSpeed(int Level) {
	int AccurateLevel = Level + 1;
	AccurateLevel = AccurateLevel * 5;
	return "+" + std::to_string(AccurateLevel) + " Stats per punch";
}

int Calculate(int rebirth) {
	bool check = false;
	bool MuscleKingCheck = false;
	float xpAdded = 0;
	int MuscleKingXpAdded = 0;
	std::cout << "\n";
	std::cout << "[DARKSTAR CALCULATIONS BELOW]" << std::endl;

	// DARKSTAR CALCULATIONS
	std::system("color 0A");
	while (xpAdded < 237500) {
		for (float index = 1; index < 20; index++) {
			float CalculatedXp = 5 * (float)rebirth / 100 + 1;
			CalculatedXp = CalculatedXp * 500 / 2;
			CalculatedXp = CalculatedXp * index;
			CalculatedXp = CalculatedXp + xpAdded;
			for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
				if (CalculatedXp == AccurateGlitchingNumbers[i]) {
					std::cout << "Your rebirth can glitch Darkstars on the Muscle King Rock! " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "] [" << GetFormattedXp("Darkstar", xpAdded) << "]" << std::endl;
					check = true;
				}
			};
			//if (check == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 100 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + xpAdded;
				for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Darkstars on the Legends Gym Rock! " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "] [" << GetFormattedXp("Darkstar",xpAdded) << "]" << std::endl;
						check = true;
					}
				};
			//}
			//if (check == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 45 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + xpAdded;
				for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Darkstars on the Eternal Gym Rock! " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "] [" << GetFormattedXp("Darkstar",xpAdded) << "]" << std::endl;
						check = true;
					}
				};
			//}
			//if (check == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 30 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + xpAdded;
				for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Darkstars on the Mythical Gym Rock! " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "] [" << GetFormattedXp("Darkstar",xpAdded) << "]" << std::endl;
						check = true;
					}
				};
			//}
			//if (check == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 15 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + xpAdded;
				for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Darkstars on the Frost Gym Rock! " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "] [" << GetFormattedXp("Darkstar",xpAdded) << "]" << std::endl;
						check = true;
					}
				};
			//}
			//if (check == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 8 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + xpAdded;
				for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Darkstars on the Golden Rock (5K Durability Rock)! " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "] [" << GetFormattedXp("Darkstar",xpAdded) << "]" << std::endl;
						check = true;
					}
				};
			//}
			//if (check == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 3 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + xpAdded;
				for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Darkstars on the Large Rock (100 Durability Rock)! " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "] [" << GetFormattedXp("Darkstar",xpAdded) << "]" << std::endl;
						check = true;
					}
				};
			//}
			//if (check == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 2 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + xpAdded;
				for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Darkstars on the Punching Rock (10 Durability Rock)! " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "] [" << GetFormattedXp("Darkstar",xpAdded) << "]" << std::endl;
						check = true;
					}
				};
			//}
			//if (check == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 1 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + xpAdded;
				for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Darkstars on the Tiny Gym Rock! " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "] [" << GetFormattedXp("Darkstar",xpAdded) << "]" << std::endl;
						check = true;
					}
				};
			//}
		}
		xpAdded = xpAdded + 5;
	}
	// MUSCLE KING CALCULATIONS
	std::system("color 0B");
	std::cout << "\n[MUSCLE KING AURA CALCULATIONS BELOW]" << std::endl;
	while (MuscleKingXpAdded < 313500) {
		for (float index = 1; index < 20; index++) {
			float CalculatedXp = 5 * (float)rebirth / 100 + 1;
			CalculatedXp = CalculatedXp * 500 / 2;
			CalculatedXp = CalculatedXp * index;
			CalculatedXp = CalculatedXp + MuscleKingXpAdded;
			for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
				if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
					std::cout << "Your rebirth can glitch Muscle King Auras on the Muscle King Rock! " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "] [" << GetFormattedXp("Aura", MuscleKingXpAdded) << "]" << std::endl;
					MuscleKingCheck = true;
				}
			};
			//if (MuscleKingCheck == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 100 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + MuscleKingXpAdded;
				for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Muscle King Auras on the Legends Gym Rock! Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "] [" << GetFormattedXp("Aura",MuscleKingXpAdded) << "]" << std::endl;
						MuscleKingCheck = true;
					}
				};
			//}
			//if (MuscleKingCheck == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 45 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + MuscleKingXpAdded;
				for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Muscle King Auras on the Eternal Gym Rock! Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "] [" << GetFormattedXp("Aura",MuscleKingXpAdded) << "]" << std::endl;
						MuscleKingCheck = true;
					}
				};
			//}
			//if (MuscleKingCheck == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 30 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + MuscleKingXpAdded;
				for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Muscle King Auras on the Mythical Gym Rock! Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "] [" << GetFormattedXp("Aura",MuscleKingXpAdded) << "]" << std::endl;
						MuscleKingCheck = true;
					}
				};
			//}
			//if (MuscleKingCheck == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 15 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + MuscleKingXpAdded;
				for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Muscle King Auras on the Frost Gym Rock! Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "] [" << GetFormattedXp("Aura",MuscleKingXpAdded) << "]" << std::endl;
						MuscleKingCheck = true;
					}
				};
			//}
			//if (MuscleKingCheck == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 8 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + MuscleKingXpAdded;
				for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Muscle King Auras on the Golden Rock (5K Durability Rock)! Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "] [" << GetFormattedXp("Aura",MuscleKingXpAdded) << "]" << std::endl;
						MuscleKingCheck = true;
					}
				};
			//}
			//if (MuscleKingCheck == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 3 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + MuscleKingXpAdded;
				for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Muscle King Auras on the Large Rock (100 Durability Rock)! Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "] [" << GetFormattedXp("Aura",MuscleKingXpAdded) << "]" << std::endl;
						MuscleKingCheck = true;
					}
				};
			//}
			//if (MuscleKingCheck == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 2 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + MuscleKingXpAdded;
				for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Muscle King Auras on the Punching Rock (10 Durability Rock)! Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "] [" << GetFormattedXp("Aura",MuscleKingXpAdded) << "]" << std::endl;
						MuscleKingCheck = true;
					}
				};
			//}
			//if (MuscleKingCheck == false) {
				CalculatedXp = 5 * (float)rebirth / 100 + 1;
				CalculatedXp = CalculatedXp * 1 / 2;
				CalculatedXp = CalculatedXp * index;
				CalculatedXp = CalculatedXp + MuscleKingXpAdded;
				for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
					if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
						std::cout << "Your rebirth can glitch Muscle King Auras on the Tiny Gym Rock! Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "] [" << GetFormattedXp("Aura",MuscleKingXpAdded) << "]" << std::endl;
						MuscleKingCheck = true;
					}
				};
			//}
		}
		MuscleKingXpAdded = MuscleKingXpAdded + 5;
	}
	switch (check) {
	case false:
		if (MuscleKingCheck == false) {
			std::cout << "Your rebirth sadly cannot glitch Darkstar Hunters nor Muscle King Auras on any Rock :(\n" << std::endl;
			Pause("clear");
			break;
		}
		else {
			std::cout << "Your rebirth sadly cannot glitch Darkstar Hunters on any Rock :(\n" << std::endl; Pause("clear");
			Pause("clear");
			break;
		}
	case true:
		std::cout << "\n";
		std::system("pause");
		std::system("CLS");
	}
	return 0;
}

int ListCalculate(int rebirth) {
	// DARKSTARS 
	for (float index = 1; index < 20; index++) {
		float CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 500 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateGlitchingNumbers[i]) {
				std::cout << rebirth << " [Muscle King] " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 100 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateGlitchingNumbers[i]) {
				std::cout << rebirth << " [Legends Gym] " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 45 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateGlitchingNumbers[i]) {
				std::cout << rebirth << " [Eternal Gym] " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 30 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateGlitchingNumbers[i]) {
				std::cout << rebirth << " [Mythical Gym] " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 15 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateGlitchingNumbers[i]) {
				std::cout << rebirth << " [Frost Gym] " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 8 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateGlitchingNumbers[i]) {
				std::cout << rebirth << " [Golden Rock (5K Durability Rock)] " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 3 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateGlitchingNumbers[i]) {
				std::cout << rebirth << " [Large Rock (100 Durability Rock)] " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 2 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateGlitchingNumbers[i]) {
				std::cout << rebirth << " [Punching Rock (10 Durability Rock)] " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 1 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateGlitchingNumbers) / sizeof(AccurateGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateGlitchingNumbers[i]) {
				std::cout << rebirth << " [Tiny Gym Rock] " << GetGlitchingSpeed(i) << " [Darkstar Level " << index << "]" << std::endl;
			}
		};
	}

	// MUSCLE KING AURAS
	for (float index = 1; index < 20; index++) {
		float CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 500 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
				std::cout << rebirth << " [Muscle King] Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 100 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
				std::cout << rebirth << " [Legends Gym] Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 45 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
				std::cout << rebirth << " [Eternal Gym] Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 30 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
				std::cout << rebirth << " [Mythical Gym] Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 15 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
				std::cout << rebirth << " [Frost Gym] Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 8 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
				std::cout << rebirth << " [Golden Rock (5K Durability Rock)] Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 3 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
				std::cout << rebirth << " [Large Rock (100 Durability Rock)] Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 2 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
				std::cout << rebirth << " [Punching Rock (10 Durability Rock)] Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "]" << std::endl;
			}
		};
		CalculatedXp = 5 * (float)rebirth / 100 + 1;
		CalculatedXp = CalculatedXp * 1 / 2;
		CalculatedXp = CalculatedXp * index;
		for (int i = 0; i < sizeof(AccurateMuscleKingGlitchingNumbers) / sizeof(AccurateMuscleKingGlitchingNumbers[0]); i++) {
			if (CalculatedXp == AccurateMuscleKingGlitchingNumbers[i]) {
				std::cout << rebirth << " [Tiny Gym Rock] Glitches at Level " << GetGlitchingSpeed(i) << " [Muscle King Aura Level " << index << "]" << std::endl;
			}
		};
	}
	return 0;
}
char Characters[140] = {};
bool YesOrNo;
bool MoreRandom;

int Timer() {
	int Times = 0;
	while (true) {
		YesOrNo = true;
		Sleep(5);
		YesOrNo = false;
		Sleep(6);
	}
}

std::string SetupChars() {
	for (int i = 0; i < sizeof(Characters) / sizeof(Characters[0]); i++) {
		Characters[i] = i;
	}
	return "\0";
}

int Blacklisted(int number) {
	switch (number) {
	case 0:
		return 0;
	case 7:
		return 0;
	case 8:
		return 0;
	case 9:
		return 0;
	case 10:
		return 0;
	case 13:
		return 0;
	default:
		return 1;
	}
}

std::string GetChars() {
	int NextSpace = 0;
	std::string Default = "___________________________________________________________________________________________________________________________________";
	for (int i = 0; i < sizeof(Characters) / sizeof(Characters[0]); i++) {
		if (YesOrNo == true && Blacklisted(i)!=0) {
			Default[NextSpace] = Characters[i];
			NextSpace = NextSpace + 1;
		}
		if (YesOrNo == true) {
			Sleep(7);
		}
		else {
			Sleep(9);
		}
	}

	for (int i = 0; i <= Default.length(); i++) {
		if (Default[i] == '_') {
			Default[i] = '\0';
		}
	}
	return Default;
}
int SpoofConsole() {
	while (true) {
		SetConsoleTitleA(GetChars().c_str());
	}
	return 0;
}

// Version 1.14
int main() {
	SetConsoleTitle(L"RebirthCalculator - Muscle Legends");
	SetupChars();


	std::ifstream File;
	File.open("Credits.txt");
	std::string Line;
	if (File.is_open()) {
		while (std::getline(File, Line)) {
			std::cout << Line << std::endl;
		}
	}
	else {
		std::cout << "failed to load .txt" << std::endl;
	}
	std::cout << std::endl;
	File.close();
	std::thread EnableRandom(Timer);
	std::thread NewSpoof(SpoofConsole);

	HWND hwnd = GetConsoleWindow();
	if (hwnd != NULL) { MoveWindow(hwnd, 100, 100, 1450, 600, TRUE); }
	int rebirth = 0;
	while (true) {
		std::cout << "Version 1.21, Keep the window at the automatic set size to ensure correct formatting.\n" << std::endl;
		std::cout << "Developed By: Cypher#2763, Codes_SoundzYT#6288 and SiZzY#9158 / Roblox Users: CypherV5, Codes_Soundz and [Her users almost always contain \"sizzy\"]\n" << std::endl;
		std::cout << "Type -4 into the console to print ALL POSSIBLE GLITCHABLE REBIRTHS.\n" << std::endl;
		std::cout << "Type rebirth here: ";
		std::cin >> rebirth;
		if (rebirth == 0) {
			std::system("CLS");
			std::cout << "Process error.";
			MessageBox(hwnd, L"Cannot cast LPCWSTR(lpText) to type \"int\", Do not do that again", L"RebirthCalculator.exe", MB_ICONERROR);
			std::exit(0);
		}
		if (rebirth >= INT_MAX || rebirth <= INT_MIN) {
			std::system("CLS");
			std::cout << "Process error.";
			MessageBox(hwnd, L"Type int exceeded", L"RebirthCalculator.exe", MB_ICONERROR);
			std::exit(0);
		}
		if (rebirth == -4) {
			std::cout << "\nYou may experience a slow down at the last calculating Rebirths..." << std::endl;
			for (int i = 0; i < 12600000; i++) {
				ListCalculate(i);
			};
			std::system("pause");
			std::system("CLS");
		}
		if (rebirth == -5) {
			std::system("CLS");
			std::string NewLine;
			std::cout << "Command: ";
			std::cin >> NewLine;
			std::cout << std::endl;
			if (NewLine[0] == 'C' && NewLine[1] == 'M' && NewLine[2] == 'D') {
				switch(NewLine[4]){
				case 'M':
					if (NewLine[3] == '-') {
						std::cout << "Rebirth Number: ";
						std::cin >> rebirth;
						std::cout << "Manual Calculating..." << std::endl;
						Calculate(rebirth);
					}
					break;
				case 'B':
					if (NewLine[3] == '-') {
						std::exit(0);
					}
					break;
				case 'T':
					if (NewLine[3] == '-') {
						std::terminate();
					}
					break;
				case 'C':
					if (NewLine[3] == '=') {
						std::cout << "Mapping..." << std::endl;
						for (int i = 0; i < 12600000; i++) {
							ListCalculate(i);
						};
					}
					break;
				default:
					break;
				}
			}
		}
		std::cout << "Calculating..." << std::endl;
		Calculate(rebirth);
		//std::system("pause");
	};
	return 0;
}