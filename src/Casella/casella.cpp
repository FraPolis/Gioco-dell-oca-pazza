//  casella.cpp

#include "casella.hpp"
#include <cstdlib>
#include <iostream>


casella::casella(){
    int n=(rand() % 9) + 1;
    switch (n) {
            
        case (5):
            this->tipo=Avanti;
            break;
        
        case (6):
            this->tipo=Indietro;
            break;
            
        case (7):
            this->tipo=Pesca;
            break;
            
        case (8):
            this->tipo=Fermo;
            break;
            
        case (9):
            this->tipo=Domanda;
            break;
            
            
        default:
            this->tipo=Vuota;
            break;
    }

}

void casella::setInizio(){
    this->tipo=Inizio;
}

void casella::setArrivo(){
    this->tipo=Arrivo;
}


void casella::effetto(){
    switch (this->tipo) {
        case Inizio:
            
            break;
        
        case Vuota:
            std::cout<<"Casella Vuota"<<endl;
            break;
        
        case Avanti:
            
            break;
        
        case Indietro:
            
            break;
            
        case Pesca:
            
            break;
            
        case Fermo:
            
            break;
            
        case Domanda:
            
            break;
            
        case Arrivo:
            
            break;
        
    }
    
    
    
    
}

string casella::getNomeTipo(){
    switch (this->tipo) {
        case Inizio:
            return "Inizio  ";
            break;
            
        case Vuota:
            return "Vuota   ";
            break;
            
        case Avanti:
            return "Avanti  ";
            break;
            
        case Indietro:
            return "Indietro";
            break;
            
        case Pesca:
            return "Pesca   ";
            break;
            
        case Fermo:
            return "Vuota   ";
            break;
            
        case Domanda:
            return "Domanda ";
            break;
            
        case Arrivo:
            return "Arrivo  ";
            break;
    }
}
