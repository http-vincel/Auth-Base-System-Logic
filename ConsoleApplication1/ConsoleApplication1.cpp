#include <string>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    string input_user;
    int eta;
    
    cout<<"2. Buttafuori del sistema"<<endl;
    cout<<"-------------------------"<<endl;
    
    
    
    
    /*
    if (input_user == "Cyber2026" && eta >= 18)
    {
        cout<<"Accesso Consentito"<<endl;
    } else if (input_user == "Cyber2026" && eta < 18)
    {
        cout<<"Accesso Limitato"<<endl;
    } else
    {
        cout<<"Accesso non Consentito"<<endl;
    }
    */
    
    
    
    
    
    int int_count = 3;
    int cicle = 0;
    bool consentito = false;
    
    
        while(cicle < 3 && consentito == false)
        {
        
            cout<<"1. Inserisci la password: "<<endl;
            cin>>input_user;
    
            cout<<"2. Inserisci la tua eta: "<<endl;
            cin>>eta;
        
            if (input_user == "Cyber2026")
            {
                if (eta >= 18)
                {
                    cout<<"Accesso Consentito"<<endl;
                    consentito = true;
                } else
                {
                    cout<<"Accesso Limitato"<<endl;
                }
            } else
            {
                cout<<"Accesso non Consentito"<<endl;
                int_count -= 1;
                cout << "Password Errata! Tentativi rimasti: " << int_count << endl;
            }

            cicle++;
        }
    
    
    
    if (consentito == true) {
        cout << "\nBenvenuto nel sistema, hacker!" << endl;
    } else {
        cout << "\nAccount bloccato. Troppi tentativi falliti." << endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
