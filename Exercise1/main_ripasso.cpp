#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>

int function(int a )
{
    int square = a * a;
    return square;
}

int somma(int N)
{
    int S = (N*(N+1)*(2*N+1))/6;
    return S;
}

int main()
{
    int a = -5;
    double d = M_PI;
    bool b = false;
    char c = 'i';
    unsigned int i = 1;
    std::string s = "Hello world";

    int a1 = 1;
    int a2 = 2;
    int sum = a1 + a2;
    int a3 = a1 + d;
    // std::string s1 = "Hello ";
    // std::string s2 = "world";
    // std::string conc = s1 + s2;

    // std::cout << "conc : " << conc << std::endl; // endl al posto di "\n"
    // std::cout << "a3 : " << a3 << std::endl;

    // std::cout << "size of int: " << sizeof(int) << std::endl;
    // std::cout << "size of unsigned: " << sizeof(unsigned) << std::endl;
    // std::cout << std::fixed << std::setprecision(0) << "interval for int: [" << -pow(2,31) << "," << pow(2,31)-1 << "]" << std::endl; // fixed per rappresentazione decimale
    // std::cout << std::fixed << std::setprecision(0) << "interval for int: [" << 0 << "," << pow(2,32) << "]" << std::endl;

    // i manipolatori modificano l'output finche non viene richiesta un'altra rappresentazione

    //std::cout << std::fixed << std::setprecision(0) << "interval for int: [" << std::numeric_limits<unsigned int>::min() << "," << std::numeric_limits<unsigned int>::max() << "]" << std::endl;

    // std::cout << "a before: " << a << std::endl;

    // for (unsigned int a = 0; a < 3; a++) //ciclo for: variabile da ciclare, condizione, variazione variabile
    // {
    //    std::cout << "a in: " << a << std::endl;
    //}

    // std::cout << "a after: " << a << std::endl; // la variabile a continua a essere come prima del blocco

    // std::cout << std::defaultfloat << std::setprecision(6) << "a after: " << a << std::endl;  // si usa un altro manipolatore

    // std::string s4 = s1 + std::to_string(a1); // con il comando to si converte numero in stringa

    // fstr >> val; // lettura da file

    //std::cin >> val1;  // devi mettere spunta Run in terminal in Project > Run
    //std::cin >> val2; // operatore nel terminale ignora spazi e punteggiatura

    //std::cout << val1 << std::endl;
    //std::cout << val1 << std::endl;

    std::string nameFile = "data1.csv";
    std::ifstream fstr(nameFile); // per aprire il file oppure fstr.open(nameFile)


    // per capire se esiste il file
    if(fstr.fail())
    {
        std::cerr << "File not found" << std::endl;  // si usa cerr per segnalare errore
        return 1; // exited code 1 per capire dove è il problema
    }

    int val;
    int sumValue = 0;
    int cont = 0;
    std::string header;
    fstr >> header;
    while(fstr >> val)
    {
        sumValue += val*val;
        cont += 1;

    };

    std::cout << "somma con formula: " << somma(cont) << std::endl;

    fstr.close();

    std::cout << "somma con ciclo: " << sumValue << std::endl;

    return 0; // tutto a buon fine con 0
}

