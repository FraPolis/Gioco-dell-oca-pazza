//
//  tabellone.cpp
//  G.O.P.
//
//  Created by Filippo Bartolucci on 24/04/18.
//  Copyright © 2018 Filippo Bartolucci. All rights reserved.
//

#include "tabellone.hpp"
#include <iostream>
#include "casella.hpp"


tabellone::tabellone(){
    this->dim=(rand() % 41) + 58;
    this->caselle[0].setInizio();
    this->caselle[dim].setArrivo();
}

void tabellone::stampaTabellone(){
    for (int i=0;i<=dim;i++){
        cout<<i<<"- "<< this->caselle[i].getNomeTipo()<<endl;
    }
}

int tabellone::getDim(){
    return this->dim;
}

void tabellone::effetto(int n){
    this->caselle[n].effetto();
}



// Realizzazione del tabellone tramite lista di caselle

/*
tab initTabellone(){
    tab head=new tabellone;
    tab t=head;
    
    head->c.setInizio();
    
    for (int i=0;i<(rand() % 41) + 59;i++){
        t->next=new tabellone;
        t=t->next;
    }
    t->c.setArrivo();
    t->next=NULL;

    return head;
}

void stampaTabellone(tab t){
   
    int i=1;
    while (t!=NULL){
        cout <<i<<"-  "<<(t->c.getNomeTipo())<<endl;
        t=t->next;
        i++;
    }
    
}
*/
