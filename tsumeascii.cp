#include <iostream>
#include <vector>
using namespace std;

int main()
{
	char RowT [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowS [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowR [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowQ [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowP [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowO [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowN [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowM [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowL [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowK [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowJ [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowH [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowG [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowF [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowE [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowD [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowC [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowB [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	char RowA [19] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.','.'};
	//char RowA [18] = {" . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ", " . ",};
	
	cout << "    1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 " << endl;
	cout << " T " << RowT [0] << RowT [1] << RowT [2] << RowT [3] << RowT [4] << RowT [5] << RowT [6] << RowT [7] << RowT [8] << RowT [9] << RowT [10] << RowT [11] << RowT [12] << RowT [13] << RowT [14] << RowT [15] << RowT [16] << RowT [17] << RowT [18] << endl;
	cout << " S " << RowS [0] << RowS [1] << RowS [2] << RowS [3] << RowS [4] << RowS [5] << RowS [6] << RowS [7] << RowS [8] << RowS [9] << RowS [10] << RowS [11] << RowS [12] << RowS [13] << RowS [14] << RowS [15] << RowS [16] << RowS [17] << RowS [18] << endl;
	cout << " R " << RowR [0] << RowR [1] << RowR [2] << RowR [3] << RowR [4] << RowR [5] << RowR [6] << RowR [7] << RowR [8] << RowR [9] << RowR [10] << RowR [11] << RowR [12] << RowR [13] << RowR [14] << RowR [15] << RowR [16] << RowR [17] << RowR [18] << endl;
	cout << " Q " << RowQ [0] << RowQ [1] << RowQ [2] << RowQ [3] << RowQ [4] << RowQ [5] << RowQ [6] << RowQ [7] << RowQ [8] << RowQ [9] << RowQ [10] << RowQ [11] << RowQ [12] << RowQ [13] << RowQ [14] << RowQ [15] << RowQ [16] << RowQ [17] << RowQ [18] << endl;
	cout << " P " << RowP [0] << RowP [1] << RowP [2] << RowP [3] << RowP [4] << RowP [5] << RowP [6] << RowP [7] << RowP [8] << RowP [9] << RowP [10] << RowP [11] << RowP [12] << RowP [13] << RowP [14] << RowP [15] << RowP [16] << RowP [17] << RowP [18] << endl;
	cout << " O " << RowO [0] << RowO [1] << RowO [2] << RowO [3] << RowO [4] << RowO [5] << RowO [6] << RowO [7] << RowO [8] << RowO [9] << RowO [10] << RowO [11] << RowO [12] << RowO [13] << RowO [14] << RowO [15] << RowO [16] << RowO [17] << RowO [18] << endl;
	cout << " N " << RowN [0] << RowN [1] << RowN [2] << RowN [3] << RowN [4] << RowN [5] << RowN [6] << RowN [7] << RowN [8] << RowN [9] << RowN [10] << RowN [11] << RowN [12] << RowN [13] << RowN [14] << RowN [15] << RowN [16] << RowN [17] << RowN [18] << endl;
	cout << " M " << RowM [0] << RowM [1] << RowM [2] << RowM [3] << RowM [4] << RowM [5] << RowM [6] << RowM [7] << RowM [8] << RowM [9] << RowM [10] << RowM [11] << RowM [12] << RowM [13] << RowM [14] << RowM [15] << RowM [16] << RowM [17] << RowM [18] << endl;
	cout << " L " << RowL [0] << RowL [1] << RowL [2] << RowL [3] << RowL [4] << RowL [5] << RowL [6] << RowL [7] << RowL [8] << RowL [9] << RowL [10] << RowL [11] << RowL [12] << RowL [13] << RowL [14] << RowL [15] << RowL [16] << RowL [17] << RowL [18] << endl;
	cout << " K " << RowK [0] << RowK [1] << RowK [2] << RowK [3] << RowK [4] << RowK [5] << RowK [6] << RowK [7] << RowK [8] << RowK [9] << RowK [10] << RowK [11] << RowK [12] << RowK [13] << RowK [14] << RowK [15] << RowK [16] << RowK [17] << RowK [18] << endl;
	cout << " J " << RowJ [0] << RowJ [1] << RowJ [2] << RowJ [3] << RowJ [4] << RowJ [5] << RowJ [6] << RowJ [7] << RowJ [8] << RowJ [9] << RowJ [10] << RowJ [11] << RowJ [12] << RowJ [13] << RowJ [14] << RowJ [15] << RowJ [16] << RowJ [17] << RowJ [18] << endl;
	cout << " H " << RowH [0] << RowH [1] << RowH [2] << RowH [3] << RowH [4] << RowH [5] << RowH [6] << RowH [7] << RowH [8] << RowH [9] << RowH [10] << RowH [11] << RowH [12] << RowH [13] << RowH [14] << RowH [15] << RowH [16] << RowH [17] << RowH [18] << endl;
	cout << " G " << RowG [0] << RowG [1] << RowG [2] << RowG [3] << RowG [4] << RowG [5] << RowG [6] << RowG [7] << RowG [8] << RowG [9] << RowG [10] << RowG [11] << RowG [12] << RowG [13] << RowG [14] << RowG [15] << RowG [16] << RowG [17] << RowG [18] << endl;
	cout << " F " << RowF [0] << RowF [1] << RowF [2] << RowF [3] << RowF [4] << RowF [5] << RowF [6] << RowF [7] << RowF [8] << RowF [9] << RowF [10] << RowF [11] << RowF [12] << RowF [13] << RowF [14] << RowF [15] << RowF [16] << RowF [17] << RowF [18] << endl;
	cout << " E " << RowE [0] << RowE [1] << RowE [2] << RowE [3] << RowE [4] << RowE [5] << RowE [6] << RowE [7] << RowE [8] << RowE [9] << RowE [10] << RowE [11] << RowE [12] << RowE [13] << RowE [14] << RowE [15] << RowE [16] << RowE [17] << RowE [18] << endl;
	cout << " D " << RowD [0] << RowD [1] << RowD [2] << RowD [3] << RowD [4] << RowD [5] << RowD [6] << RowD [7] << RowD [8] << RowD [9] << RowD [10] << RowD [11] << RowD [12] << RowD [13] << RowD [14] << RowD [15] << RowD [16] << RowD [17] << RowD [18] << endl;
	cout << " C " << RowC [0] << RowC [1] << RowC [2] << RowC [3] << RowC [4] << RowC [5] << RowC [6] << RowC [7] << RowC [8] << RowC [9] << RowC [10] << RowC [11] << RowC [12] << RowC [13] << RowC [14] << RowC [15] << RowC [16] << RowC [17] << RowC [18] << endl;
	cout << " B " << RowB [0] << RowB [1] << RowB [2] << RowB [3] << RowB [4] << RowB [5] << RowB [6] << RowB [7] << RowB [8] << RowB [9] << RowB [10] << RowB [11] << RowB [12] << RowB [13] << RowB [14] << RowB [15] << RowB [16] << RowB [17] << RowB [18] << endl;
	cout << " A " << RowA [0] << RowA [1] << RowA [2] << RowA [3] << RowA [4] << RowA [5] << RowA [6] << RowA [7] << RowA [8] << RowA [9] << RowA [10] << RowA [11] << RowA [12] << RowA [13] << RowA [14] << RowA [15] << RowA [16] << RowA [17] << RowA [18] << endl;
	
}
	
