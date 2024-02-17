#include <cstddef>
#include <ctime>
#include <fstream>
#include <ios>
#include <iostream>
#include <limits>
#include <ostream>
#include <string>
#include <type_traits>
using namespace std;
void GPLisansi();
void AnaEkran();
void DepoEkran();
void DepoFonksiyon();
void AlimSatimEkran();
void AlimSatimFonksiyon();
void IntegerHataYakaliyici();
void IntegerHataYakaliyiciV2();
void TamGPLisansi();
void HakkimizdaYazi();
int KrakerSayisi;
int KekSayisi;
int MeyveSuyuSayisi;
int DegisenKraker;
int DegisenKek;
int DegisenMeyveSuyu;
int LisansKabul;
int CikartmaIslemSayi;
int EklemeIslemSayi;
ifstream LisansKabulOkuyucu("LisansKabul.txt");

void IntegerHataYakaliyici(int HataliInteger, int NegatifLimit, int PozitifLimit){

    while ((!cin)||(HataliInteger < NegatifLimit)||(HataliInteger > PozitifLimit)) {
            
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Tekrar deneyiniz."<<endl;
        cin>>HataliInteger;
    }
}

void RenkliYaziciFonksiyon(int RenkliDegisken){
    #define RESET   "\033[0m"
    #define RED     "\033[31m"
    #define GREEN   "\033[32m"

    if (RenkliDegisken < 100) {
        cout << RED << RenkliDegisken << RESET <<endl;
    }

    else if (RenkliDegisken >= 100) {
    cout << GREEN << RenkliDegisken << RESET <<endl;    
    }
}



void GPLisansi(){
cout<<"This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version."<<endl
    <<"This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details."<<endl
    <<"You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. "<<endl;
}

void TamGPLisansi(){
#define YELLOW  "\033[33m"

cout<<YELLOW<<"0. Additional Definitions."<<endl

<<"As used herein, “this License” refers to version 3 of the GNU Lesser General Public License, and the “GNU GPL” refers to version 3 of the GNU General Public License."<<endl

<<"“The Library” refers to a covered work governed by this License, other than an Application or a Combined Work as defined below."<<endl

<<"An “Application” is any work that makes use of an interface provided by the Library, but which is not otherwise based on the Library. Defining a subclass of a class defined by the Library is deemed a mode of using an interface provided by the Library."<<endl

<<"A “Combined Work” is a work produced by combining or linking an Application with the Library. The particular version of the Library with which the Combined Work was made is also called the “Linked Version”."<<endl

<<"The “Minimal Corresponding Source” for a Combined Work means the Corresponding Source for the Combined Work, excluding any source code for portions of the Combined Work that, considered in isolation, are based on the Application, and not on the Linked Version."<<endl

<<"The “Corresponding Application Code” for a Combined Work means the object code and/or source code for the Application, including any data and utility programs needed for reproducing the Combined Work from the Application, but excluding the System Libraries of the Combined Work."<<endl
<<"1. Exception to Section 3 of the GNU GPL."<<endl

<<"You may convey a covered work under sections 3 and 4 of this License without being bound by section 3 of the GNU GPL."<<endl
<<"2. Conveying Modified Versions."<<endl

<<"If you modify a copy of the Library, and, in your modifications, a facility refers to a function or data to be supplied by an Application that uses the facility (other than as an argument passed when the facility is invoked), then you may convey a copy of the modified version:"<<endl

  <<"a) under this License, provided that you make a good faith effort to ensure that, in the event an Application does not supply the function or data, the facility still operates, and performs whatever part of its purpose remains meaningful, or"<<endl
  <<"b) under the GNU GPL, with none of the additional permissions of this License applicable to that copy."<<endl

<<"3. Object Code Incorporating Material from Library Header Files."<<endl

<<"The object code form of an Application may incorporate material from a header file that is part of the Library. You may convey such object code under terms of your choice, provided that, if the incorporated material is not limited to numerical parameters, data structure layouts and accessors, or small macros, inline functions and templates (ten or fewer lines in length), you do both of the following:"<<endl

  <<"a) Give prominent notice with each copy of the object code that the Library is used in it and that the Library and its use are covered by this License."<<endl
  <<"b) Accompany the object code with a copy of the GNU GPL and this license document."<<endl

<<"4. Combined Works."<<endl

<<"You may convey a Combined Work under terms of your choice that, taken together, effectively do not restrict modification of the portions of the Library contained in the Combined Work and reverse engineering for debugging such modifications, if you also do each of the following:"<<endl

   <<"a) Give prominent notice with each copy of the Combined Work that the Library is used in it and that the Library and its use are covered by this License."<<endl
   <<"b) Accompany the Combined Work with a copy of the GNU GPL and this license document."<<endl
   <<"c) For a Combined Work that displays copyright notices during execution, include the copyright notice for the Library among these notices, as well as a reference directing the user to the copies of the GNU GPL and this license document."<<endl
   <<"d) Do one of the following:"<<endl
        <<"0) Convey the Minimal Corresponding Source under the terms of this License, and the Corresponding Application Code in a form suitable for, and under terms that permit, the user to recombine or relink the Application with a modified version of the Linked Version to produce a modified Combined Work, in the manner specified by section 6 of the GNU GPL for conveying Corresponding Source."<<endl
        <<"1) Use a suitable shared library mechanism for linking with the Library. A suitable mechanism is one that (a) uses at run time a copy of the Library already present on the user's computer system, and (b) will operate properly with a modified version of the Library that is interface-compatible with the Linked Version."<<endl
    <<"e) Provide Installation Information, but only if you would otherwise be required to provide such information under section 6 of the GNU GPL, and only to the extent that such information is necessary to install and execute a modified version of the Combined Work produced by recombining or relinking the Application with a modified version of the Linked Version. (If you use option 4d0, the Installation Information must accompany the Minimal Corresponding Source and Corresponding Application Code. If you use option 4d1, you must provide the Installation Information in the manner specified by section 6 of the GNU GPL for conveying Corresponding Source.)"<<endl

<<"5. Combined Libraries."<<endl

<<"You may place library facilities that are a work based on the Library side by side in a single library together with other library facilities that are not Applications and are not covered by this License, and convey such a combined library under terms of your choice, if you do both of the following:"<<endl

    <<"a) Accompany the combined library with a copy of the same work based on the Library, uncombined with any other library facilities, conveyed under the terms of this License."<<endl
    <<"b) Give prominent notice with the combined library that part of it is a work based on the Library, and explaining where to find the accompanying uncombined form of the same work."<<endl

<<"6. Revised Versions of the GNU Lesser General Public License."<<endl

<<"The Free Software Foundation may publish revised and/or new versions of the GNU Lesser General Public License from time to time. Such new versions will be similar in spirit to the present version, but may differ in detail to address new problems or concerns."<<endl

<<"Each version is given a distinguishing version number. If the Library as you received it specifies that a certain numbered version of the GNU Lesser General Public License “or any later version” applies to it, you have the option of following the terms and conditions either of that published version or of any later version published by the Free Software Foundation. If the Library as you received it does not specify a version number of the GNU Lesser General Public License, you may choose any version of the GNU Lesser General Public License ever published by the Free Software Foundation."<<endl

<<"If the Library as you received it specifies that a proxy can decide whether future versions of the GNU Lesser General Public License shall apply, that proxy's public statement of acceptance of any version is permanent authorization for you to choose that version for the Library."<<RESET<<endl;
}

void HakkimizdaYazi(){
    #define MAGENTA "\033[35m"
    cout<<MAGENTA<<"Bu program, bir kantin depolama sistemi için bir kontrol paneli sağlar. Depoda bulunan ürün miktarlarını izlemek ve alım-satım işlemlerini gerçekleştirmek için kullanılabilir."<<endl 
        <<"Program, kullanıcıya ana menüdeki seçenekler arasından seçim yapma imkanı sunar ve kullanıcının seçimine göre depo bilgilerini görüntüler veya alım-satım işlemlerini gerçekleştirir."<<endl
        <<"Program, kullanıcıların kolayca depo envanterini yönetmelerine ve alım-satım işlemlerini gerçekleştirmelerine olanak tanır."<<endl;

cout<<"                                                                                                  KANTİN DEPOLAMA SİSTEMİ Versiyon 1.0"<<RESET<<endl;
}

string SimdikiZamaniBulma(){	
    #define YELLOW  "\033[33m"
    time_t curr_time;
	curr_time = time(NULL);

	char *tm = ctime(&curr_time);
    string Zaman = tm;
    cout<<YELLOW<<Zaman<<RESET;
    return Zaman;
    }
void VeriKaydetme(int EkranSecim, int SecilenUrunIndex){
    ofstream VeriKayitYazici;
    string SimdikiZaman = SimdikiZamaniBulma();
    VeriKayitYazici.open("Kayit.txt", ios::out | ios::app);
    if (EkranSecim != 1) {
        VeriKayitYazici<<SimdikiZaman<<"İşlem Geçiren Besin Türü: "<<SecilenUrunIndex<<" Satılmış Mal Miktarı: "<<"-"<<CikartmaIslemSayi<<endl;
    }

    else {
        VeriKayitYazici<<SimdikiZaman<<"İşlem Geçiren Besin Türü: "<<SecilenUrunIndex<<" Satın Alınmış Mal Miktarı: "<<"+"<<EklemeIslemSayi<<endl;
    }
    VeriKayitYazici.close();
}

void LisansKabuluEkran(){
cout<<"------------------------------------"<<endl
    <<"   Lisansı kabul ediyor musunuz?    "<<endl
    <<"     [0]Hayır        [1]Evet        "<<endl
    <<"------------------------------------"<<endl;
}

bool LisansKabulFonksiyon(){
    ifstream LisansKabulOkuyucu("LisansKabul.txt");
    LisansKabulOkuyucu>>LisansKabul;
        if (LisansKabul != 1) {
            GPLisansi();
            LisansKabuluEkran();
            cin>>LisansKabul;
            IntegerHataYakaliyici(LisansKabul, 0, 1);

            if (LisansKabul == 1) {
            ofstream LisansKabulYazici("LisansKabul.txt");
            LisansKabulYazici<<LisansKabul;
            return true;
            }
            else {
            return false;
            }
            }


return true;
}

void AnaEkran(){
    cout<<"----------------------------------------------------------------------------------------------------"<<endl                                                                                                 
        <<"                                       KANTİN DEPOLAMA SİSTEMİ                                      "<<endl
        <<"                                                                                                    "<<endl
        <<"                                 [1]Depo                                                            "<<endl
        <<"                                 [2]Alım-Satım                                                      "<<endl
        <<"                                 [3]Hakkımızda                                                      "<<endl
        <<"                                 [4]Lisans                                                          "<<endl
        <<"                                 [5]Saat Gösterimi                                                  "<<endl
        <<"                                                                                                    "<<endl
        <<"                                                                                                    "<<endl
        <<"                                                                                                    "<<endl
        <<"                                                                                                    "<<endl
        <<"                                                                                                    "<<endl
        <<"                                          [0]Kapat                                                  "<<endl
        <<"                                                                                                    "<<endl
        <<"                                                                                                    "<<endl
        <<"                                                                                                    "<<endl
        <<"                                                                                                    "<<endl
        <<"----------------------------------------------------------------------------------------------------"<<endl;
}


void DepoEkran() {
    ifstream KantinMamaOkuyucu("KantinMama.txt"); // okuma

    KantinMamaOkuyucu >> KrakerSayisi >> KekSayisi >> MeyveSuyuSayisi;

    cout << "----------------------------------------------------------------------------------------------------" << endl
         << "                                             DEPO                                                   " << endl
         << "                                                                                                    " << endl
         << "        Kraker Sayısı: ";
            RenkliYaziciFonksiyon(KrakerSayisi);
    cout << "                                                                                                    " << endl
         << "           Kek Sayısı: ";
            RenkliYaziciFonksiyon(KekSayisi);
    cout << "                                                                                                    " << endl
         << "   Meyve Suyu Sayısı: ";
            RenkliYaziciFonksiyon(MeyveSuyuSayisi);
    cout << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                          [1]Girilmemiş kaynakları yaz                              " << endl
         << "                                          [0]Geri Dön                                               " << endl
         << "                                                                                                    " << endl
         << "----------------------------------------------------------------------------------------------------" << endl;
}


void DepoFonksiyon(){
    
    int DepoEkranSecim;
    cin>>DepoEkranSecim; 
    IntegerHataYakaliyici(DepoEkranSecim, 0, 1);
        switch (DepoEkranSecim) {
            case 0:
                break;
        
            case 1:
                cout<<"Kraker sayısını giriniz."<<endl;
                cin>>KrakerSayisi;
                IntegerHataYakaliyici(KrakerSayisi,0,10000);
                
                cout<<"Kek sayısını giriniz."<<endl;
                cin>>KekSayisi;
                IntegerHataYakaliyici(KekSayisi,0,10000);    

                cout<<"Meyve Suyu sayısını giriniz."<<endl;
                cin>>MeyveSuyuSayisi;
                IntegerHataYakaliyici(MeyveSuyuSayisi,0,10000);
                
                ofstream KantinMamaYazici("KantinMama.txt"); //yazma
                KantinMamaYazici<<KrakerSayisi<<" "<<KekSayisi<<" "<<MeyveSuyuSayisi; //yazma
        }
}




void AlimSatimEkran() {
    ifstream DegisenMamaOkuyucu("DegisenMama.txt"); // okuma

    DegisenMamaOkuyucu >> DegisenKraker >> DegisenKek >> DegisenMeyveSuyu;

    cout << "----------------------------------------------------------------------------------------------------" << endl
         << "                                            ALIM-SATIM                                              " << endl
         << "                                                                                                    " << endl
         << "          Kraker Sayısı: ";
            RenkliYaziciFonksiyon(DegisenKraker);
    cout << "                                                                                                    " << endl
         << "             Kek Sayısı: ";
            RenkliYaziciFonksiyon(DegisenKek);
    cout << "                                                                                                    " << endl
         << "      Meyve Suyu Sayısı: ";
            RenkliYaziciFonksiyon(DegisenMeyveSuyu);
    cout << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                                                                                    " << endl
         << "                                          [2]Ekleme-Çıkartma                                        " << endl
         << "                                          [1]Günlük Kayıt                                           " << endl
         << "                                          [0]Geri Dön                                               " << endl
         << "                                                                                                    " << endl
         << "----------------------------------------------------------------------------------------------------" << endl;
}


void ToplaCikartBesinEkran(){
    cout<<"-----------------------------------------------"<<endl
        <<"|       [0]Kraker                             |"<<endl
        <<"|       [1]Kek                                |"<<endl
        <<"|       [2]Meyve suyu                         |"<<endl
        <<"-----------------------------------------------"<<endl;
}

int ToplaCikartBesinFonksiyon(int BesinIsleme){
    switch (BesinIsleme) {
        case 0:
            BesinIsleme = DegisenKraker;
            break;
        case 1:
            BesinIsleme = DegisenKek;
            break;
        case 2:
            BesinIsleme = DegisenMeyveSuyu;
            break;
    }
    return BesinIsleme;
}

void ToplaCikartSecimEkran(){
    cout<<"----------------------------------------------"<<endl
        <<"|                                            |"<<endl
        <<"|     [1]Ekle              [0]Çıkart         |"<<endl    
        <<"|                                            |"<<endl
        <<"----------------------------------------------"<<endl;    
        
}



int ToplaCikartSecimFonksiyon(int IslemYapilacakSayi, int AlimSatimEkranSecim){
   
        int sonuc;
        
        switch (AlimSatimEkranSecim) {

            case 0:
                cout<<"Çıkartılacak sayı miktarını yazın."<<endl;
                cin>>CikartmaIslemSayi;
                IntegerHataYakaliyici(CikartmaIslemSayi,0,10000);
                sonuc = (IslemYapilacakSayi - CikartmaIslemSayi);
                cout<<"Bulunan sonuç:"<<sonuc<<endl;
                return sonuc;
                break;

            case 1:
                cout<<"Toplanacak sayı miktarını yazın."<<endl;
                cin>>EklemeIslemSayi;
                IntegerHataYakaliyici(EklemeIslemSayi,0,10000);
                sonuc = IslemYapilacakSayi + EklemeIslemSayi;
                cout<<"Bulunan sonuç:"<<sonuc<<endl;
                return sonuc;
                break;
                
        }   
    return 0;
}

void AlimSatimFonksiyon(){
    int AlimSatimEkranSecim;
    int BesinSecim;
    int AlimSatimIslemYapilacakSayi;
    cin>>AlimSatimEkranSecim;    
    IntegerHataYakaliyici(AlimSatimEkranSecim,0,2);
    
    switch (AlimSatimEkranSecim) {
        case 0:
            break;

        case 1:
            cout<<"Kraker sayısını giriniz."<<endl;
            cin>>DegisenKraker;
            IntegerHataYakaliyici(DegisenKraker,0,10000);

            cout<<"Kek sayısını giriniz."<<endl;
            cin>>DegisenKek;
            IntegerHataYakaliyici(DegisenKek,0,10000);
            
            cout<<"Meyve Suyu sayısını giriniz."<<endl;
            cin>>DegisenMeyveSuyu;
            IntegerHataYakaliyici(DegisenMeyveSuyu,0,10000);
            break;

        case 2:
            int ToplaCikartEkranSecim;
            ToplaCikartBesinEkran();
            cout<<"İşlem yapılacak besini seçiniz."<<endl;
            cin>>BesinSecim;
            IntegerHataYakaliyici(BesinSecim,0,2);

            

            ToplaCikartSecimEkran();
            cin>>ToplaCikartEkranSecim;

            int islemsonuc = ToplaCikartSecimFonksiyon(ToplaCikartBesinFonksiyon(BesinSecim),ToplaCikartEkranSecim);
            switch (BesinSecim) {
                case 0:
                    DegisenKraker = islemsonuc;
                    break;
                case 1:
                    DegisenKek = islemsonuc;
                    break;
                case 2:
                    DegisenMeyveSuyu = islemsonuc;
                    break;
            }
            VeriKaydetme(ToplaCikartEkranSecim,BesinSecim);
            break;



}
if (AlimSatimEkranSecim != 0) {
            ofstream DegisenMamaYazici("DegisenMama.txt");
            DegisenMamaYazici<<DegisenKraker<<" "<<DegisenKek<<" "<<DegisenMeyveSuyu; //yazma
}
}
int main(){
    int AnaEkranSecim;
    bool LisansKabulMu = LisansKabulFonksiyon();    
    if (LisansKabulMu != 1) {
    return 0;
    }
        
        while (true) {
            AnaEkran();
            cin>>AnaEkranSecim;
            IntegerHataYakaliyici(AnaEkranSecim,0,5);

                switch (AnaEkranSecim) {
            
                    case 0:
                    {
                        return 0;
                    }
                    case 1:
                    {
                        DepoEkran();
                        DepoFonksiyon();
                        break;
                    }
                    case 2:
                    {
                        AlimSatimEkran();
                        AlimSatimFonksiyon();
                        break;
                    }
                    case 3:
                    {
                        HakkimizdaYazi();
                        break;
                    }
                    case 4:
                    {
                        TamGPLisansi();
                        break;
                    }
                    case 5:
                    {
                        SimdikiZamaniBulma();
                        break;
                    }
                }
                }
    }