#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //Alulvonás hiányzik
    int *b = new int[N_ELEMENTS];
    //Pontosvesszõ hiányzik a sor végérõl, helytelen idézõjel használat
    //Illetve ajánlott egy sortörést tenni a kódsor végére, hogy olvashatóbb legyen a kimenet
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    //Befejezetlen for ciklus, hiányzik a változó növelése, illetve a feltétel meghatározása
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //nem teljesen jó megoldás, 0-99-ig végzi el a mûveletet
        b[i] = (i + 1) * 2;
    }
    //nincs befejezve a foron belül a feltétel meghatározása, ezért a ciklus törzse nem fut le
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //sortörés, pontosvesszõ hiányzik a sor végérõl, a b-ben tárolt értékek nem kerülnek kiíratásra
        std::cout << "Ertek:" << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //a változónak kezdeti értéket kell adni
    int atlag = 0;
    //vesszõ helyett pontosvesszõt kell használni
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //pontosvesszõ hiánya
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
