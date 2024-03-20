#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>


int main()
{   float val1;
    float val2;
    float mean = 0;
    float sumVal = 0;
    int cont = 1;
    // per non confondersi con il file dell'esercizio 1 si cambia i nomi dei file excel, quindi quello dato per questo esercizio si chiama "data2.csv"
    std::string nameFileI = "data2.csv";
    std::string nameFileO = "result.csv";
    std::ifstream fstr(nameFileI);
    std::ofstream ofs(nameFileO);
    if(fstr.fail())
    {
        std::cerr << "File not found" << std::endl;
        return 1;
    }

    if(ofs.fail())
    {
        std::cerr << "File not created" << std::endl;
        return 2;
    }

    // la funzione per rimappare è la retta y = 0.75*x - 1.75
    float header;
    fstr >> header;
    sumVal = (0.75)*header - 1.75;
    ofs << sumVal << std::endl;

    while(fstr >> val1)
    {
        val2 = (0.75)*val1 - 1.75;
        sumVal += val2;
        cont += 1;
        mean = sumVal/cont;
        ofs << mean << std::endl;

    };
    ofs.close();
    return 0;
}
