#include <iostream>
#include <algorithm>
/*

int main(){
    int liczba(0);
    std::cout<<"Podaj dowolną liczbę"<<std::endl;
    std::cin>>liczba;
    if(liczba<10)
    {
        std::cout<<"Liczba jest za mała"<<std::endl;

    }
    else if (liczba >100)
    {
        std::cout<<"Liczba jest za duża"<<std::endl;

    }
    else if (liczba%9==0)
    {
        std::cout<<"Liczba jest zła"<<std::endl;
    }

    return 0;
}*/


/*
int main()
{
    int bokA(0);
    int bokB(0);
    int bokC(0);
    std::cout<<"Podaj długość boku A: ";
    std::cin>>bokA;
    std::cout<<"Podaj długość boku B: ";
    std::cin>>bokB;
    std::cout<<"Podaj długość boku C: ";
    std::cin>>bokC;

    if(bokA<=0 || bokB<=0 || bokC<=0)
    {
        std::cout<<"Nie można zbudować trójkąta z ujemnego boku"<<std::endl;
    }

    else if((bokA+bokB)>bokC && (bokA+bokC)>bokB && (bokB+bokC)>bokA)
    {
        std::cout<<"Tak, z podanych  długości boków można zbudować trójkąt";
    }

    return 0;
}*/

/*int main()
{
    *//*int liczbaA(0);
    int liczbaB(0);
    int liczbaC(0);

    std::cout<<"Podaj liczbę a, b i c: ";
    std::cin>>liczbaA>>liczbaB>>liczbaC;
    std::cout<<std::max(liczbaA,std::max(liczbaB,liczbaC))<< '\n';
*//*
    *//*if(liczbaA>=liczbaB && liczbaA>=liczbaC)
    {
        std::cout<<liczbaA;
    }
    else if(liczbaB>=liczbaC)
    {
        std::cout<<liczbaB;
    }
    else
    {
        std::cout<<liczbaC;
    }*/

/*    int main()
{
        std::cout<<"Podaj współczynnik funkcji kwadratowej typu: Ax^2+Bx+C=0"<<std::endl;
        int wspA(0);
        int wspB(0);
        int wspC(0);

        std::cin>>wspA>>wspB>>wspC;

        if(wspA!=0)
        {
            int delta=wspB^2-4*wspA*wspC;
            if (delta > 0)
            {
                std::cout << "Miejsca zerowe funkcji o podanych współczynnikach to:" << (-wspB + delta^(0.5)) / (wspA * 2)
                          << " oraz " << (-wspB - delta^(0.5)) / (wspA * 2);
            }
            else if(delta==0)
            {
                std::cout << "Miejsca zerowe funkcji o podanych współczynnikach to:" <<-wspB/(2*wspA);
            } else
            {
                std::cout << "Brak miejsc zerowych";
            }
        }else
        {
            if(wspB!=0)
            {
                std::cout << "Miejsca zerowe funkcji o podanych współczynnikach to:" << -wspC / wspB;
            }else
            {
                if(wspC==0)
                {
                    std::cout<<"Nieskoczenie wiele miejsc zerowych";
                } else
                {
                    std::cout << "Brak miejsc zerowych";
                }
            }
        }

    return 0;
}*/


int main(){
        int liczba1(0);
        int liczba2(0);
        char operand('=');
        std::cout<<"Podaj działanie jakie chcesz wykonać (+ lub - lub * lub  /)"<<std::endl;
        std::cin>>liczba1>>operand>>liczba2;

        if(operand=='+')
        {
            std::cout<<liczba1+liczba2;
        }
        else if(operand=='-')
        {
        std::cout<<liczba1-liczba2;
        }
        else if(operand=='*')
        {
            std::cout<<liczba1*liczba2;
        }
        else if(operand=='/')
        {
            if(liczba2!=0)
            {
                std::cout << liczba1/liczba2;
            }
            else
            {
                std::cout<<"Nie dzielimy przez 0";
            }
        }
    return 0;
    }
