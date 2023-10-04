// Fill out your copyright notice in the Description page of Project Settings.

#include <time.h>
#include <chrono>
#include <fstream>
#include <string>
#include <algorithm>
//#include <CoreString.h>
#include "SelectorLetterGenerator.h"
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::seconds;
using std::chrono::system_clock;

FString USelectorLetterGenerator::RanLetGen(int var, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u, int v, int w, int x, int y, int z, int& aR, int& bR, int& cR, int& dR, int& eR, int& fR, int& gR, int& hR, int& iR, int& jR, int& kR, int& lR, int& mR, int& nR, int& oR, int& pR, int& qR, int& rR, int& sR, int& tR, int& uR, int& vR, int& wR, int& xR, int& yR, int& zR, bool& state)
{
    aR = a;
    bR = b;
    cR = c;
    dR = d;
    eR = e;
    fR = f;
    gR = g;
    hR = h;
    iR = i;
    jR = j;
    kR = k;
    lR = l;
    mR = m;
    nR = n;
    oR = o;
    pR = p;
    qR = q;
    rR = r;
    sR = s;
    tR = t;
    uR = u;
    vR = v;
    wR = w;
    xR = x;
    yR = y;
    zR = z;
    srand(var);
repeat:
    if ((a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p + q + r + s + t + u + v + w + x + y + z) > 0)
    {
        state = 1;
        switch (rand() % 26)
        {
            case 0:
            {
                if (a == 0) goto repeat; aR = aR - 1;
                return (FString::Printf(TEXT("A"))); break;
            }
            case 1:
            {
                if (b == 0) goto repeat; bR = bR - 1;
                return (FString::Printf(TEXT("B"))); break;
            }
            case 2:
            {
                if (c == 0) goto repeat; cR = cR - 1;
                return (FString::Printf(TEXT("C"))); break;
            }
            case 3:
            {
                if (d == 0) goto repeat; dR = dR - 1;
                return (FString::Printf(TEXT("D"))); break;
            }
            case 4:
            {
                if (e == 0) goto repeat; eR = eR - 1;
                return (FString::Printf(TEXT("E"))); break;
            }
            case 5:
            {
                if (f == 0) goto repeat; fR = fR - 1;
                return (FString::Printf(TEXT("F"))); break;
            }
            case 6:
            {
                if (g == 0) goto repeat; gR = gR - 1;
                return (FString::Printf(TEXT("G"))); break;
            }
            case 7:
            {
                if (h == 0) goto repeat; hR = hR - 1;
                return (FString::Printf(TEXT("H"))); break;
            }
            case 8:
            {
                if (i == 0) goto repeat; iR = iR - 1;
                return (FString::Printf(TEXT("I"))); break;
            }
            case 9:
            {
                if (j == 0) goto repeat; jR = jR - 1;
                return (FString::Printf(TEXT("J"))); break;
            }
            case 10:
            {
                if (k == 0) goto repeat; kR = kR - 1;
                return (FString::Printf(TEXT("K"))); break;
            }
            case 11:
            {
                if (l == 0) goto repeat; lR = lR - 1;
                return (FString::Printf(TEXT("L"))); break;
            }
            case 12:
            {
                if (m == 0) goto repeat; mR = mR - 1;
                return (FString::Printf(TEXT("M"))); break;
            }
            case 13:
            {
                if (n == 0) goto repeat; nR = nR - 1;
                return (FString::Printf(TEXT("N"))); break;
            }
            case 14:
            {
                if (o == 0) goto repeat; oR = oR - 1;
                return (FString::Printf(TEXT("O"))); break;
            }
            case 15:
            {
                if (p == 0) goto repeat; pR = pR - 1;
                return (FString::Printf(TEXT("P"))); break;
            }
            case 16:
            {
                if (q == 0) goto repeat; qR = qR - 1;
                return (FString::Printf(TEXT("Q"))); break;
            }
            case 17:
            {
                if (r == 0) goto repeat; rR = rR - 1;
                return (FString::Printf(TEXT("R"))); break;
            }
            case 18:
            {
                if (s == 0) goto repeat; sR = sR - 1;
                return (FString::Printf(TEXT("S"))); break;
            }
            case 19:
            {
                if (t == 0) goto repeat; tR = tR - 1;
                return (FString::Printf(TEXT("T"))); break;
            }
            case 20:
            {
                if (u == 0) goto repeat; uR = uR - 1;
                return (FString::Printf(TEXT("U"))); break;
            }
            case 21:
            {
                if (v == 0) goto repeat; vR = vR - 1;
                return (FString::Printf(TEXT("V"))); break;
            }
            case 22:
            {
                if (w == 0) goto repeat; wR = wR - 1;
                return (FString::Printf(TEXT("W"))); break;
            }
            case 23:
            {
                if (x == 0) goto repeat; xR = xR - 1;
                return (FString::Printf(TEXT("X"))); break;
            }
            case 24:
            {
                if (y == 0) goto repeat; yR = yR - 1;
                return (FString::Printf(TEXT("Y"))); break;
            }
            case 25:
            {
                if (z == 0) goto repeat; zR = zR - 1;
                return (FString::Printf(TEXT("Z"))); break;
            }
        }
        return (FString::Printf(TEXT("1")));
    }
    
    else
    {
        state = 0;
        return (FString::Printf(TEXT("2")));
    }
    return (FString::Printf(TEXT("2")));
}

int32 USelectorLetterGenerator::randCalc(int variable)
{
    int p1 = 25057;
    int p2 = 39227;
    variable = variable + p1 + p2;
    return variable;
}

int32 USelectorLetterGenerator::verifyBag(int many, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u, int v, int w, int x, int y, int z)
{
    if ((a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p + q + r + s + t + u + v + w + x + y + z) >= 8)
        return 1;
    else
        return 0;
}

int32 USelectorLetterGenerator::verifyIntrebareNr(int nr)
{
    if ((nr) >= 10)
        return 1;
    else
        return 0;
}

int32 USelectorLetterGenerator::afisareincrem(int nr)
{
    if (nr >= 10)
        return 10;
    else
        return nr+1;
}
int32 USelectorLetterGenerator::genQuest(int seed0, int seed1, int seed2, int seed3, int seed4, int seed5, int seed6, int seed7, int seed8, int seed9, int variable, int seedQuest, int intrebare, FString& Quest, FString& Curs, FString& c0, FString& c1, FString& c2, FString& c3, FString& c4, FString& c5, FString& c6, FString& c7, FString& c8, FString& c9, FString& c10, FString& c11, FString& c12, FString& c13, FString& c14, int& i0, int& i1, int& i2, int& i3, int& i4, int& i5, int& i6, int& i7, int& i8, int& i9, int& i10, int& i11, int& i12, int& i13, int& i14)
{
    FString col11[] = { "Ce tip de management are ca scop procesul de organizare si planificare a modului de impartire a timpului intre diferite activitati.",
"Ce alta denumire mai poarta principiul numit regula 20/80?",
"Ce dependente pot fi definite in cadrul etapei de structurare a proiectului de catre management?",
"Ce dependente sunt caracterizate de constrangeri nespecifice proiectului?",
"Sa se precizeze tipul de diagrama conditionala ce introduce posibilitatea activitatilor non-secventiale.",
"Ce este metoda Monte-Carlo la baza ei?",
"Ce permite identificarea perioadelor in care activitatile sunt posibile?",
"Vorbind de constrangeri cine stabileste evenimentele cheie sau datele importante?",
"Ce tip de analiza permite calculul datelor de start/sfarsit al fiecarei activitati d.p.d.v teoretic?",
"Metoda drumului critic - care poate fi momentul de debut al unei activitati a.i. aceasta sa nu intefereze cu activitatile anterioare.",
"Metoda drumului critic - care poate fi durata efectuarii activitatii. ",
"Metoda drumului critic - care poate fi momentul de finalizare al unei activitati a.i. aceasta sa nu intefereze cu activitati viitoare.",
"Metoda drumului critic - care poate preciza cat de devreme o activitate se poate incheia.",
"Metoda drumului critic -care poate fi momentul de finalizare al unei activitati a.i. aceasta sa nu intefereze cu inceputul activitatilor ulterioare",
"Metoda drumului critic - care poate fi diferenta dintre data de incheiere a ultimei activitati si data de finalizare a proiectului",
"Ce tip de management reprezinta procesul de planificare si control al bugetului unui proiect?",
"Care este expresia baneasca a valorii marfii",
"Efortul de munca vie materializata pe care un agent economic il depune efectiv pentru fabricarea unui produs executarea unei lucrari sau a unui serviciu",
"Ce reprezinta procesul de utilizare a de bunuri materiale si servicii in scopul satisfacerii nevoilor",
"Estimari facute inaintea inceperii proiectului in lipsa informatiilor concrete si a incertitudinii activitatilor viitoare.",
"Estimari facute prin comparare costurilor pe care le-ar necesita realizarea unui proiect nou cu costurile unor proiecte similare executate in trecut.",
"Estimari facute dupa efectuarea unor activitati de conceptie preliminara a proiectului.",
"Estimari efectuate la sfarsitul proiectarii.",
"Ce poate reprezenta un indicator universal inteles al calitatii?",
"Ce reprezinta totalitatea particularitatilor si caracteristicilor unui produs sau serviciu care determina capacitatea acestuia de a satisface nevoile declarate sau implicite ale utilizatorului?",
"Care este metoda de comparare a proceselor proiectului pentru a obtine idei de imbunatatire a proceselor si proceduri prin care sa fie masurate performantele?",
"Ce alta denumire mai poarta costul de esec?",
"Ce tip de cost reprezinta costul total al eforturilor pentru atingerea cerintelor asociate unui produs sau serviciu?",
"Proces efectuat asupra produsului final in urma caruia se asigura ca acesta este in conformitate cu specificatiile initiale."

    };
    FString col12[] = {
"time",
"pareto",
"arbitrare",
"externe",
"gert",
"simulare",
"calendar",
"stakeholders",
"matematica",
"est",
"dur",
"lst",
"eft",
"lft",
"float",
"cost",
"pret",
"cost",
"consum",
"aproximative",
"comparative",
"fezabilitate",
"definitive",
"cost",
"calitate",
"benchmarking",
"neconformitate",
"calitatii",
"inspectie"
    };
    FString col13[] = { "4",
"4",
"4",
"4",
"4",
"4",
"4",
"4",
"4",
"4",
"4",
"4",
"4",
"4",
"4",
"5",
"5",
"5",
"5",
"5",
"5",
"5",
"5",
"5",
"6",
"6",
"6",
"6",
"6"
    };
    int col14[] = { 4,
6,
9,
7,
4,
8,
8,
12,
10,
3,
3,
3,
3,
3,
5,
4,
4,
4,
6,
12,
11,
12,
10,
4,
8,
12,
14,
9,
9
    };

    FString c[] = { "0",
"0",
"0",
"0",
"0",
"0",
"0",
"0",
"0",
"0",
"0",
"0",
"0",
"0",
"0" };

    int vector[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1 };
    int intrebareUse;
    int seed[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    seed[0] = seed0;
    seed[1] = seed1;
    seed[2] = seed2;
    seed[3] = seed3;
    seed[4] = seed4;
    seed[5] = seed5;
    seed[6] = seed6;
    seed[7] = seed7;
    seed[8] = seed8;
    seed[9] = seed9;
    
    intrebareUse = seed[intrebare];
    int p1 = 25057;
    int p2 = 39227;
    variable = variable + p1 + p2;
    int buffer1;
    Quest = col11[intrebareUse];
    Curs = col13[intrebareUse];
    srand(variable);

    int pozitie[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    for (int i = 0; i < col14[intrebareUse]; i++)
    {
    again:
        buffer1 = rand() % /*15*/col14[intrebareUse];
        for (int j = 0; j < i; j++)
        {
            if (pozitie[j] == buffer1)
                goto again;
        }
        pozitie[i] = buffer1;
    }


    for (int i = 0; i < col14[intrebareUse]; i++)
    {
        //char* result = TCHAR_TO_ANSI(*col12[intrebare]);
        c[pozitie[i]] = col12[intrebareUse].Mid(i, 1);
        c[pozitie[i]] = c[pozitie[i]].ToUpper();
        //transform(c[pozitie[i]].begin(), c[pozitie[i]].end(), c[pozitie[i]].begin(), ::toupper);
    }

    if (c[0] != "0")
    {
        c0 = c[0]; i0 = 1;
    }
    else i0 = 1;

    if (c[1] != "0")
    {
        c1 = c[1]; i1 = 1;
    }
    else i1 = 0;

    if (c[2] != "0")
    {
        c2 = c[2]; i2 = 1;
    }
    else i2 = 0;

    if (c[3] != "0")
    {
        c3 = c[3]; i3 = 1;
    }
    else i3 = 0;

    if (c[4] != "0")
    {
        c4 = c[4]; i4 = 1;
    }
    else i4 = 0;

    if (c[5] != "0")
    {
        c5 = c[5]; i5 = 1;
    }
    else i5 = 0;

    if (c[6] != "0")
    {
        c6 = c[6]; i6 = 1;
    }
    else i6 = 0;

    if (c[7] != "0")
    {
        c7 = c[7]; i7 = 1;
    }
    else i7 = 0;

    if (c[8] != "0")
    {
        c8 = c[8]; i8 = 1;
    }
    else i8 = 0;

    if (c[9] != "0")
    {
        c9 = c[9]; i9 = 1;
    }
    else i9 = 0;

    if (c[10] != "0")
    {
        c10 = c[10]; i10 = 1;
    }
    else i10 = 0;

    if (c[11] != "0")
    {
        c11 = c[11]; i11 = 1;
    }
    else i11 = 0;

    if (c[12] != "0")
    {
        c12 = c[12]; i12 = 1;
    }
    else i12 = 0;

    if (c[13] != "0")
    {
        c13 = c[13]; i13 = 1;
    }
    else i13 = 0;

    if (c[14] != "0")
    {
        c14 = c[14]; i14 = 1;
    }
    else i14 = 0;

    return int32();
}




int32 USelectorLetterGenerator::verifyWord(int seed0, int seed1, int seed2, int seed3, int seed4, int seed5, int seed6, int seed7, int seed8, int seed9, int intrebare, FString c0, FString c1, FString c2, FString c3, FString c4, FString c5, FString c6, FString c7, FString c8, FString c9, FString c10, FString c11, FString c12, FString c13, FString c14, bool &isvalid, int &points, FString &testStr1, FString &testStr2)
{
    #include <fstream>
    #define nrColMax 1000
    FString word;
    //FString coloana1[nrColMax];
    FString coloana1[] = { "time",
"pareto",
"arbitrare",
"externe",
"gert",
"simulare",
"calendar",
"stakeholders",
"matematica",
"est",
"dur",
"lst",
"eft",
"lft",
"float",
"cost",
"pret",
"cost",
"consum",
"aproximative",
"comparative",
"fezabilitate",
"definitive",
"cost",
"calitate",
"benchmarking",
"neconformitate",
"calitatii",
"inspectie" };
    int intrebareUse;
    int seed[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    seed[0] = seed0;
    seed[1] = seed1;
    seed[2] = seed2;
    seed[3] = seed3;
    seed[4] = seed4;
    seed[5] = seed5;
    seed[6] = seed6;
    seed[7] = seed7;
    seed[8] = seed8;
    seed[9] = seed9;

    intrebareUse = seed[intrebare];

    FString selectedWord = coloana1[intrebareUse];

    isvalid = 0;
    int constructWord = 1;
    char coi;
    points = 0;
    FString validChars = "abcdefghisklmnopqrstuvwxyz";
    if (validChars.Contains(c0) && constructWord != 0)
    {
        word = word + c0.ToLower();
        constructWord = 2;
        
        coi = (int)(c0[0]);
        
    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c1) && constructWord != 0)
    {
        word = word + c1.ToLower();
        constructWord = 2;

        coi = (int)(c1[0]);
        
    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c2) && constructWord != 0)
    {
        word = word + c2.ToLower();
        constructWord = 2;

        coi = (int)(c2[0]);
        
    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c3) && constructWord != 0)
    {
        word = word + c3.ToLower();
        constructWord = 2;

        coi = (int)(c3[0]);
        
    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c4) && constructWord != 0)
    {
        word = word + c4.ToLower();
        constructWord = 2;

        coi = (int)(c4[0]);
        
    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c5) && constructWord != 0)
    {
        word = word + c5.ToLower();
        constructWord = 2;

        coi = (int)(c5[0]);
        
    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c6) && constructWord != 0)
    {
        word = word + c6.ToLower();
        constructWord = 2;

        coi = (int)(c6[0]);
        
    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c7) && constructWord != 0)
    {
        word = word + c7.ToLower();
        constructWord = 2;

        coi = (int)(c7[0]);
        
    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c8) && constructWord != 0)
    {
        word = word + c8.ToLower();
        constructWord = 2;

        coi = (int)(c8[0]);

    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c9) && constructWord != 0)
    {
        word = word + c9.ToLower();
        constructWord = 2;

        coi = (int)(c9[0]);

    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c10) && constructWord != 0)
    {
        word = word + c10.ToLower();
        constructWord = 2;

        coi = (int)(c10[0]);

    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c11) && constructWord != 0)
    {
        word = word + c11.ToLower();
        constructWord = 2;

        coi = (int)(c11[0]);

    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c12) && constructWord != 0)
    {
        word = word + c12.ToLower();
        constructWord = 2;

        coi = (int)(c12[0]);

    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c13) && constructWord != 0)
    {
        word = word + c13.ToLower();
        constructWord = 2;

        coi = (int)(c13[0]);

    }
    else
        if (constructWord == 2)
            constructWord = 0;

    if (validChars.Contains(c14) && constructWord != 0)
    {
        word = word + c14.ToLower();
        constructWord = 2;

        coi = (int)(c14[0]);

    }
    else
        if (constructWord == 2)
            constructWord = 0;



    //FString filePath = FPaths::ProjectDir() / "dictionar.csv";
    FString filePath = FPaths::ProjectDir() / "dictionar.txt";
    //FString filePath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Source/Scrabble_Last_Hope/dictionar.csv"));


    int indexBuffer = 246;
    /* ASTA CITESTE 5 IN EDITOR SI 0 IN DEPLOY */

    /*int indexBuffer = 0;
    std::string line;
    std::ifstream file(TCHAR_TO_UTF8(*filePath));
    if (file.is_open()) {
        while (std::getline(file, line)) {
            coloana1[indexBuffer] = FString(line.c_str());
            indexBuffer++;
        }
        file.close();
    }*/

    /* ASTA CITESTE 5 IN EDITOR SI 41 IN DEPLOY */

    /*int indexBuffer;
    FILE* file = fopen(TCHAR_TO_UTF8(*filePath), "r");
    if (file) {
        char line[256];
        indexBuffer = 0;
        while (fgets(line, sizeof(line), file)) {
            coloana1[indexBuffer] = FString(line);
            
            //coloana1[indexBuffer].TrimEnd(); // sau coloana1[indexBuffer].TrimTrailing();
            indexBuffer++;
        }
        fclose(file);
    }*/



    //indexBuffer--;

    //for (int i = 0; i < indexBuffer; i++)
    //{
        //int32 lastCharacterIndex = coloana1[i].Len() - 1;
        //coloana1[i].RemoveAt(lastCharacterIndex);

        if (word == selectedWord)
        {
            isvalid = 1;
            points = points * 10;
            //break;
        }
    //}
    testStr1 = coloana1[0];
    testStr2 = coloana1[1];
    if (isvalid == 1)
        points = 1;
    else points = 0;

    return indexBuffer;

}

int32 USelectorLetterGenerator::addPoints(int input1, int input2, int& output)
{
    output = input1 + input2;
    return int32();
}

int32 USelectorLetterGenerator::questSeedGenerator(int variable, int NoOfQuestions, int& seed0, int& seed1, int& seed2, int& seed3, int& seed4, int& seed5, int& seed6, int& seed7, int& seed8, int& seed9)
{
    int p1 = 25057;
    int p2 = 39227;
    int buffer;
    int seed[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    variable = variable + p1 + p2;
    srand(variable);
    for (int i = 0; i < 10; i++)
    {
        flag69:
        buffer = rand() % NoOfQuestions;
        for (int j = 0; j < i; j++)
            if (buffer == seed[j])
                goto flag69;
                //variable++;
        seed[i] = buffer;
        variable++;
        //srand(variable);
    }

    seed0 = seed[0];
    seed1 = seed[1];
    seed2 = seed[2];
    seed3 = seed[3];
    seed4 = seed[4];
    seed5 = seed[5];
    seed6 = seed[6];
    seed7 = seed[7];
    seed8 = seed[8];
    seed9 = seed[9];

    return int32();
}


int32 USelectorLetterGenerator::addinBag(FString input, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u, int v, int w, int x, int y, int z, int& aR, int& bR, int& cR, int& dR, int& eR, int& fR, int& gR, int& hR, int& iR, int& jR, int& kR, int& lR, int& mR, int& nR, int& oR, int& pR, int& qR, int& rR, int& sR, int& tR, int& uR, int& vR, int& wR, int& xR, int& yR, int& zR)
{
    aR = a;
    bR = b;
    cR = c;
    dR = d;
    eR = e;
    fR = f;
    gR = g;
    hR = h;
    iR = i;
    jR = j;
    kR = k;
    lR = l;
    mR = m;
    nR = n;
    oR = o;
    pR = p;
    qR = q;
    rR = r;
    sR = s;
    tR = t;
    uR = u;
    vR = v;
    wR = w;
    xR = x;
    yR = y;
    zR = z;
    char var = input[0];
    switch (var)
     {
        case 'A':
        {
            aR = aR + 1;
            break;
        }
        case 'B':
        {
            bR = bR + 1;
            break;
        }
        case 'C':
        {
            cR = cR + 1;
            break;
        }
        case 'D':
        {
            dR = dR + 1;
            break;
        }
        case 'E':
        {
            eR = eR + 1;
            break;
        }
        case 'F':
        {
            fR = fR + 1;
            break;
        }
        case 'G':
        {
            gR = gR + 1;
            break;
        }
        case 'H':
        {
            hR = hR + 1;
            break;
        }
        case 'I':
        {
            iR = iR + 1;
            break;
        }
        case 'J':
        {
            jR = jR + 1;
            break;
        }
        case 'K':
        {
            kR = kR + 1;
            break;
        }
        case 'L':
        {
            lR = lR + 1;
            break;
        }
        case 'M':
        {
            mR = mR + 1;
            break;
        }
        case 'N':
        {
            nR = nR + 1;
            break;
        }
        case 'O':
        {
            oR = oR + 1;
            break;
        }
        case 'P':
        {
            pR = pR + 1;
            break;
        }
        case 'Q':
        {
            qR = qR + 1;
            break;
        }
        case 'R':
        {
            rR = rR + 1;
            break;
        }
        case 'S':
        {
            sR = sR + 1;
            break;
        }
        case 'T':
        {
            tR = tR + 1;
            break;
        }
        case 'U':
        {
            uR = uR + 1;
            break;
        }
        case 'V':
        {
            vR = vR + 1;
            break;
        }
        case 'W':
        {
            wR = wR + 1;
            break;
        }
        case 'X':
        {
            xR = xR + 1;
            break;
        }
        case 'Y':
        {
            yR = yR + 1;
            break;
        }
        case 'Z':
        {
            zR = zR + 1;
            break;
        }
    }

    return int32();
}
