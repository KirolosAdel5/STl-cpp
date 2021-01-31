#include <iostream>
#include <utility>
using namespace std;
 
int main()
{
	//Syntax : 
		//pair (data_type1, data_type2) Pair_name
    pair<int, char> PAIR1;
	
    PAIR1.first = 100;
    PAIR1.second = 'G';
 
    cout << PAIR1.first << " "<< PAIR1.second << endl;
	//output is:
	/**************************
	 100 G
	**************************/
    return 0;
}