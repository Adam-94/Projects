#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

class ReadAndWrite
{
public:
    string ReadWrite;
};

class FillWhiteSpace
{
private:
    ifstream inputfile;
    ofstream outputfile;
    vector<ReadAndWrite> whiteSpaces;

public:
    void ReadData(string filename);
    void WriteChanges(string filename);
};

void FillWhiteSpace::ReadData(string filename)
{
    ReadAndWrite Data;

    inputfile.open(filename);

    if (!inputfile)
        cerr << "Input file : Error" << endl;

    while (inputfile.peek() != EOF)
    {
        getline(inputfile, Data.ReadWrite);
        whiteSpaces.push_back(Data);
    }
    inputfile.close();
}

void FillWhiteSpace::WriteChanges(string filename)
{
    outputfile.open(filename);

    if (!outputfile)
        cerr << "Write Changes : Error" << endl;

    for (unsigned int i = 0; i < whiteSpaces.size(); ++i)
    {
        replace(whiteSpaces[i].ReadWrite.begin(), whiteSpaces[i].ReadWrite.end(), ' ', ',');
        outputfile << whiteSpaces[i].ReadWrite;
    }
    outputfile.close();
}


int main()
{
    FillWhiteSpace PassData;

    //Input file and output file
    PassData.ReadData("");
    PassData.WriteChanges("");

    return 0;
}
