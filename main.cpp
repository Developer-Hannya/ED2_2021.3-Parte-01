#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream arquivoE;
    string linha;
    arquivoE.open("tiktok_app_reviews.csv");
    if(arquivoE.is_open()){
        while(getline(arquivoE,linha)){
            cout<<linha<<endl;
        }
    }else{
        cout<<"Nao foi possivel abrir o arquivo"<<endl;
    }
    return 0;
}

