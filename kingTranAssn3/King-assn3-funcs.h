/*****************************************************************************
// CODE FILENAME: KingTran-assn3-main.cpp
// DESCRIPTION:
// CLASS/TERM: CS372 Spring 8 Week 1
// DESIGNER: Adam King
******************************************************************************/

int * createList(int &last);
int getTableSize();
chainNode** initSeperateChain(int tableSize, bool &allocated);
chainNode** makeSeperateChain(chainNode *sepChain[], int randomNums[], 
						      int tableSize);
chainNode** insertToChain(chainNode* sepChain[], int tblData, int tblSize);
void calcKnuth(int tableSize, testType theTest, double loadFactor, double &avg, 
									double &kAvg, int numToSearch, int count);
void searchChainTable(chainNode *sepChain[], int randomNums[], int tableSize,
	int &elemTouch);
int hashIt(int num, int tblSz);
void runTest(int openTable[], chainNode* sepChain[], int randomNums[], 
			int tableSize, testType theTest,double loadFactor, double &avg, 
			double &kAvg, int &count, int numToSearch);
