#include <iostream>

using namespace std;

int main()
{
	
	char SpaceOnBoard [19][19];
	char YIndex [19] = { 'T', 'S', 'R', 'Q', 'P', 'O', 'N', 'M', 'L', 'K', 'J', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A'};

	for ( int xx = 0; xx < 19; xx++){
		for( int yy = 0; yy < 19; yy++){
			SpaceOnBoard [xx][yy] = '.';
		}
	}	
	cout << "  1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19 ";
	for (int y = 0; y < 19; y++){
		if (y > 0){
			cout << endl; //one less space under the x index
		}
		cout << endl << YIndex [y] << " " ;
		for (int x = 0; x < 19; x++){
			cout << SpaceOnBoard [x][y] << "   ";
		}
	}
	cout << endl;
}
