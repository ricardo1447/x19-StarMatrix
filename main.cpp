#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector < vector < char > > first;
    int rows;
    int cols;
    cout << "Please enter the number of rows: " << endl;
    cin >> rows;
    cout << "Please enter the number of columns: " << endl;
    cin >> cols;

    first.resize(rows);//number of rows
    for(int row1 = 0; row1 < first.size(); row1++)
    {
        first[row1].resize(cols);//number of columns
    }
    
    if(first.size() > 0 && first[0].size() > 0)
    {
        for(int row = 0; row < first.size(); row++)
        {
            for(int col = 0; col < first[0].size(); col++)
            {
                cout << '*';
            }
            cout << endl;
        }
    }

    return 0;

}
