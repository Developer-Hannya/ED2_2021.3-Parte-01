#include <iostream>
#include<fstream>
#include <iomanip>
#include <string>
#include <vector>
#include "FileReader.h"
#include "TikTokData.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    FileReader f;
    f.readTikTok("teste de arquivo csv ed2.csv");
    return 0;
}
