
#define _CRT_SECURE_NO_DEPRECATE // suppress some compilation warning messages (for VC++ users)
#define _CRT_SECURE_NO_WARNINGS
#define  _SCL_SECURE_NO_WARNINGS

#include "ConsoleColor.h"

/**************************************ad-hoc Algorithm*************************************************/
//UVA

//#define UVA_103_STACKING_BOXES
//#define UVA_10285_LONGEST_RUN_ON_SNOWBOARD
//#define UVA_11450_WEDDING_SHOPPING
//#define UVA_1056_DEGREE_OF_SEPERATION
//#define UVA_11951_AREA
//#define UVA_1203_ARGUS
//#define UVA_11367_FULLTANK
//#define UVA_11906_KNIGHT_IN_WAR_GRID
//#define UVA_481_WHATGOESUP
//#define UVA_108_MAXIMUM_SUM
//#define UVA_469_WETLANDS_OF_FLORIDA
//#define UVA_11456_TRAINSORTING
//#define UVA_100_3NPLUS1
//#define UVA_11790_MURCIA_SKYLINE
//#define UVA_10213_HOW_MANY_PIECES_OF_LAND
//#define UVA_104_ARBITRAGE
//#define UVA_436_ARBITRAGEII
//#define UVA_452_PROJECT_SCHEDULING
//#define SPOJ_FISHMONGER
//#define UVA_259_SOFTWARE_ALLOCATION
//#define UVA_820_INTERNET_BANDWIDTH
//#define UVA_10480_SABOTAGE
//#define UVA_11380_DOWN_WENT_THE_TITANIC
//#define UVA_10459_THE_TREE_ROOT
//#define UVA_12379_CENTRAL_POST_OFFICE
//#define UVA_11506_ANGRY_PROGRAMMER
//#define UVA_10801_LIFT_HOPPING
//#define UVA_988_MANY_PATHS_ONE_DESTINATION
//#define UVA_11957_CHECKERS
//#define UVA_12047_HIGHEST_PAID_TOLL
//#define UVA_10369_ARCTIC_NETWORK
//#define UVA_12125_MARCH_OF_THE_PENGUINS
//#define UVA_10278_FIRE_STATION
//#define UVA_10048_AUDIOPHOBIA
//#define UVA_10010_WHERE_WALDORF
//#define UVA_11475_EXTEND_TO_PALINDROMES
//#define UVA_12467_SECRET_WORD
//#define UVA_4106_ACORN
//#define UVA_10507_WAKING_UP_BRAIN
//#define UVA_11503_VIRTUAL_FRIENDS
//#define UVA_10341_SOLVE_IT
//#define UVA_10130_SUPERSALE
//#define UVA_10819_TROUBLE_OF_13_DOTS
//#define UVA_10261_FERRY_LOADING
//#define UVA_1213_SUM_OF_DIFFERENT_PRIMES
//#define UVA_10360_RAT_ATTACK
//#define UVA_10911_FORMING_QUIZ_TEAMS
//#define UVA_10364_SQUARE
//#define UVA_11391_BLOBS_IN_THE_BOARD
//#define UVA_1099_SHARING_CHOCOLATE
//#define UVA_10003_CUTTING_STICKS
//#define UVA_10496_COLLECTING_BEEPERS
//#define UVA_216_GETTING_IN_LINE
//#define UVA_10898_COMBO_DEAL
//#define UVA_11284_SHOPPING_TRIP
//#define UVA_562_DIVIDING_COINS
//#define UVA_990_DIVING_FOR_GOLD
//#define UVA_10616_DIVISIBLE_GROUP_SUMS
//#define SELF_MAX_COVER

#define UVA_836_LARGEST_SUBMATRIX
/*******************************************************************************************************/
#include <iostream>
#include <string>
#include <direct.h>

#define CAT(A, B)   A##B
#define FILE_NAME1(A, B) CAT(A, B)
#define FILE_NAME(A, B) FILE_NAME1(A, B)

#define READ_INPUT(A)													\
	int before_main1()													\
{																		\
	std::string path_dir = _getcwd(NULL, 0);							\
	std::string st = FILE_NAME1(#A, ".txt");							\
	std::string input_file = path_dir + "\\..\\input\\" + st;			\
	freopen(input_file.c_str(), "r", stdin);							\
	return 0;															\
}																		\
	int nn = before_main1();											\
	/*******************************************************************************************************/


