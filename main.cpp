#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //Alulvon�s hi�nyzik
    int *b = new int[N_ELEMENTS];
    //Pontosvessz� hi�nyzik a sor v�g�r�l, helytelen id�z�jel haszn�lat
    //Illetve aj�nlott egy sort�r�st tenni a k�dsor v�g�re, hogy olvashat�bb legyen a kimenet
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    //Befejezetlen for ciklus, hi�nyzik a v�ltoz� n�vel�se, illetve a felt�tel meghat�roz�sa
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //nem teljesen j� megold�s, 0-99-ig v�gzi el a m�veletet
        b[i] = (i + 1) * 2;
    }
    //nincs befejezve a foron bel�l a felt�tel meghat�roz�sa, ez�rt a ciklus t�rzse nem fut le
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //sort�r�s, pontosvessz� hi�nyzik a sor v�g�r�l, a b-ben t�rolt �rt�kek nem ker�lnek ki�rat�sra
        std::cout << "Ertek:" << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //a v�ltoz�nak kezdeti �rt�ket kell adni
    int atlag = 0;
    //vessz� helyett pontosvessz�t kell haszn�lni
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //pontosvessz� hi�nya
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
