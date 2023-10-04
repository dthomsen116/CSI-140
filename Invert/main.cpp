#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {

    string file;
    cout << "Please input the file name (without .ascii.pgm extension):" << endl;
    cin >> file;

    //Open the file for reading
    ifstream fin("..\\" + file + ".ascii.pgm");
    if (!fin.is_open()) {
        cerr << "Error opening file" << endl;
        return 1; // quits the program with an error code
    }

    //Read the contents of the file line by line
    string line;

    //Output to a file (inv.pgm)
    ofstream fout;
    fout.open("..\\" + file + ".ascii.inv.pgm");

    //Begin output
    string type;
    int h, w, val, count;

    fin >> type >> w >> h >> val;
    fout << type << endl << w << " " << h << endl << val << endl;

    for(int i=0; i<h; i++){
        for(int d=0; d<w; d++){
            int pix, invpix;
            fin >> pix;
            invpix = val - pix;

            if(count < 17){
                fout << invpix << " ";
                count++;

            }
            else{
                fout << invpix << endl;
                count = 0;
            }
        }
    }

    //Close the files
    fin.close();
    fout.close();

    return 0;
}