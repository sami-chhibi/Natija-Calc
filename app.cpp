// Lah Ysahal
#include <iostream>
using namespace std;

int main(){
    string 
    first_Msg = 
    "==========================================\n========= Hsb Natija Dyalk Akhay =========\n==========================================\n",
    second_Msg = 
    "\n\n================================================\n================= Natija Dyalk =================\n================================================\n",
    third_Msg = 
    "\n========================================\n================Lah Ywfa9===============\n========================================\n";

    float 
    note_Assiduite_Et_Conduite,
    note_Education_Physique[3],
    note_Histoire_Geographie[3],
    note_Informatique[3],
    note_Instruction_Islamique[3],
    note_Langue_Anglaise[3],
    note_Langue_Arabe[3],
    note_Langue_Francaise[5],
    note_Mathematiques[3],
    note_Philosophie[3],
    note_Physique_Chimie[4],
    note_Svt[3];

    cout << first_Msg;

    cout << "\n============== Dakhal No9at ==============\n\n";
    
    cout << "NOTE ASSIDUITE ET CONDUITE : "; cin >> note_Assiduite_Et_Conduite; cout << "\n";
    cout << "NOTE EDUCATION PHYSIQUE CONTROL 1 : "; cin >> note_Education_Physique[0]; cout << "\n";
    cout << "NOTE EDUCATION PHYSIQUE CONTROL 2 : "; cin >> note_Education_Physique[1]; cout << "\n";
    cout << "NOTE EDUCATION PHYSIQUE ACTIVITES INTEGREES : "; cin >> note_Education_Physique[2]; cout << "\n";
    cout << "NOTE HISTOIRE GEOGRAPHIE CONTROL 1 : "; cin >> note_Histoire_Geographie[0]; cout << "\n";
    cout << "NOTE HISTOIRE GEOGRAPHIE CONTROL 2 : "; cin >> note_Histoire_Geographie[1]; cout << "\n";
    cout << "NOTE HISTOIRE GEOGRAPHIE ACTIVITES INTEGREES : "; cin >> note_Histoire_Geographie[2]; cout << "\n";
    cout << "NOTE INFORMATIQUE CONTROL 1 : "; cin >> note_Informatique[0]; cout << "\n";
    cout << "NOTE INFORMATIQUE CONTROL 2 : "; cin >> note_Informatique[1]; cout << "\n";
    cout << "NOTE INFORMATIQUE ACTIVITES INTEGREES : "; cin >> note_Informatique[2]; cout << "\n";
    cout << "NOTE INSTRUCTION ISLAMIQUE CONTROL 1 : "; cin >> note_Instruction_Islamique[0]; cout << "\n";
    cout << "NOTE INSTRUCTION ISLAMIQUE CONTROL 2 : "; cin >> note_Instruction_Islamique[1]; cout << "\n";
    cout << "NOTE INSTRUCTION ISLAMIQUE ACTIVITES INTEGREES : "; cin >> note_Instruction_Islamique[2]; cout << "\n";
    cout << "NOTE LANGUE ANGLAISE CONTROL 1 : "; cin >> note_Langue_Anglaise[0]; cout << "\n";
    cout << "NOTE LANGUE ANGLAISE CONTROL 2 : "; cin >> note_Langue_Anglaise[1]; cout << "\n";
    cout << "NOTE LANGUE ANGLAISE ACTIVITES INTEGREES : "; cin >> note_Langue_Anglaise[2]; cout << "\n";
    cout << "NOTE LANGUE ARABE CONTROL 1 : "; cin >> note_Langue_Arabe[0]; cout << "\n";
    cout << "NOTE LANGUE ARABE CONTROL 2 : "; cin >> note_Langue_Arabe[1]; cout << "\n";
    cout << "NOTE LANGUE ARABE ATIVITES INTEGREES : "; cin >> note_Langue_Arabe[2]; cout << "\n";
    cout << "NOTE LANGUE FRANCAISE CONTROL 1 : "; cin >> note_Langue_Francaise[0]; cout << "\n";
    cout << "NOTE LANGUE FRANCAISE CONTROL 2 : "; cin >> note_Langue_Francaise[1]; cout << "\n";
    cout << "NOTE LANGUE FRANCAISE CONTROL 3 : "; cin >> note_Langue_Francaise[2]; cout << "\n";
    cout << "NOTE LANGUE FRANCAISE CONTROL 4 : "; cin >> note_Langue_Francaise[3]; cout << "\n";
    cout << "NOTE LANGUE FRANCAISE ACTIVITES INTEGREES : "; cin >> note_Langue_Francaise[4]; cout << "\n";
    cout << "NOTE MATHEMATIQUES CONTROL 1 : "; cin >> note_Mathematiques[0]; cout << "\n";
    cout << "NOTE MATHEMATIQUES CONTROL 2 : "; cin >> note_Mathematiques[1]; cout << "\n";
    cout << "NOTE MATHEMATIQUES CONTROL 3 : "; cin >> note_Mathematiques[2]; cout << "\n";
    cout << "NOTE PHILOSOPHIE CONTROL 1 : "; cin >> note_Philosophie[0]; cout << "\n";
    cout << "NOTE PHILOSOPHIE CONTROL 2 : "; cin >> note_Philosophie[1]; cout << "\n";
    cout << "NOTE PHILOSOPHIE ACTIVITES INTEGREES : "; cin >> note_Philosophie[2]; cout << "\n";
    cout << "NOTE PHYSIQUE CHIMIE CONTROL 1 : "; cin >> note_Physique_Chimie[0]; cout << "\n";
    cout << "NOTE PHYSIQUE CHIMIE CONTROL 2 : "; cin >> note_Physique_Chimie[1]; cout << "\n";
    cout << "NOTE PHYSIQUE CHIMIE CONTROL 3 : "; cin >> note_Physique_Chimie[2]; cout << "\n";
    cout << "NOTE PHYSIQUE CHIMIE ACTIVITES INTEGREES : "; cin >> note_Physique_Chimie[3]; cout << "\n";
    cout << "NOTE SVT CONTROL 1 : "; cin >> note_Svt[0]; cout << "\n";
    cout << "NOTE SVT CONTROL 2 : "; cin >> note_Svt[1]; cout << "\n";
    cout << "NOTE SVT ACTIVITES INTEGREES : "; cin >> note_Svt[2]; cout << "\n";

    float moyen_General_Assiduite_Et_Conduite = note_Assiduite_Et_Conduite,
    moyen_General_Education_Physique = ((note_Education_Physique[0] + note_Education_Physique[1]) / 2 * 0.75 ) + (note_Education_Physique[2] * 0.25) ,
    moyen_General_Histoire_Geographie = ( (note_Histoire_Geographie[0] + note_Histoire_Geographie[1]) / 2 * 0.75 ) + (note_Histoire_Geographie[2] * 0.25) ,
    moyen_General_Informatique = ( (note_Informatique[0] + note_Informatique[1]) / 2 * 0.75 ) + (note_Informatique[2] * 0.25) ,
    moyen_General_Instruction_Islamique = ( (note_Instruction_Islamique[0] + note_Instruction_Islamique[1]) / 2 * 0.75 ) + (note_Instruction_Islamique[2] * 0.25) ,
    moyen_General_Langue_Anglaise = ( (note_Langue_Anglaise[0] + note_Langue_Anglaise[1]) / 2 * 0.75 ) + (note_Langue_Anglaise[2] * 0.25) ,
    moyen_General_Langue_Arabe = ( (note_Langue_Arabe[0] + note_Langue_Arabe[1]) / 2 * 0.75 ) + (note_Langue_Arabe[2] * 0.25) ,
    moyen_General_Langue_Francaise = ( (note_Langue_Francaise[0] + note_Langue_Francaise[1] + note_Langue_Francaise[2] + note_Langue_Francaise[3]) / 4 * 0.75 ) + (note_Langue_Francaise[4] * 0.25) ,
    moyen_General_Mathematiques = (note_Mathematiques[0] + note_Mathematiques[1] + note_Mathematiques[2]) / 3 ,
    moyen_General_Philosophie = ( (note_Philosophie[0] + note_Philosophie[1]) / 2 * 0.75 ) + (note_Philosophie[2] * 0.25) ,
    moyen_General_Physique_Chimie = ( (note_Physique_Chimie[0] + note_Physique_Chimie[1] + note_Physique_Chimie[2]) / 3 * 0.75 ) + (note_Physique_Chimie[3] * 0.25) ,
    moyen_General_Svt = ( (note_Svt[0] + note_Svt[1]) / 2 * 0.75 ) + (note_Svt[2] * 0.25) ,
    moyen_General_Session = (moyen_General_Assiduite_Et_Conduite + (moyen_General_Education_Physique *2) + (moyen_General_Histoire_Geographie * 2) + (moyen_General_Informatique * 2) + (moyen_General_Instruction_Islamique * 2) + (moyen_General_Langue_Anglaise * 3) + (moyen_General_Langue_Arabe * 2) + (moyen_General_Langue_Francaise * 3) + (moyen_General_Mathematiques * 4) + (moyen_General_Philosophie * 2) + (moyen_General_Physique_Chimie * 4) + (moyen_General_Svt * 4)) / 31 ;
    
    cout << second_Msg; 
    cout << "\n\n";
    cout << "\tASSIDUITE ET CONDUITE : " << moyen_General_Assiduite_Et_Conduite; cout << "\n\n";
    cout << "\tEDUCATION PHYSIQUE : " << moyen_General_Education_Physique; cout << "\n\n";
    cout << "\tHISTOIRE GEOGRAPHIE : " << moyen_General_Histoire_Geographie; cout << "\n\n";
    cout << "\tINFORMATIQUE : " << moyen_General_Informatique; cout << "\n\n";
    cout << "\tINSTRUCTION ISLAMIQUE : " << moyen_General_Instruction_Islamique; cout << "\n\n";
    cout << "\tLANGUE ANGLAISE : " << moyen_General_Langue_Anglaise; cout << "\n\n";
    cout << "\tLANGUE ARABE : " << moyen_General_Langue_Arabe; cout << "\n\n";
    cout << "\tLANGUE FRANCAISE : " << moyen_General_Langue_Francaise; cout << "\n\n";
    cout << "\tMATHEMATIQUES : " << moyen_General_Mathematiques; cout << "\n\n";
    cout << "\tPHILOSOPHIE : " << moyen_General_Philosophie; cout << "\n\n";
    cout << "\tPHYSIQUE CHIMIE : " << moyen_General_Physique_Chimie; cout << "\n\n";
    cout << "\tSVT : " << moyen_General_Svt; cout << "\n\n";
    cout << "========================================\n"; 
    cout << "\n";
    cout << "\tMOYENNE SESSION : " << moyen_General_Session;
    cout << "\n";
    cout << third_Msg;
    cout << "\n";
    int exit;
    cout << "Enter A Number To Exit: ";
    cin >> exit;
    return 0;
}