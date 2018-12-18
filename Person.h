#pragma once;
#include <iostream>
#include <string>
#include <vector>
#include "Anschrift.h"
using namespace std;

class Person {

private:

    string _name;
    Anschrift _anschrift;
    vector<Person*> _freunde;
public:
    Person() {
        _name = "Anonymus";
    }
    Person(string const& name) {
        this->_name = name;
    }
    ~Person () {}
    string name() const {
        return _name;
    }
    void setzeAnschrift(Anschrift anschrift) {
            this->_anschrift = anschrift;
    }
    void setzeAnschrift(string const& strasse, string const& hausnummer, int postleitzahl, string const& stadt) {
        Anschrift a(strasse,hausnummer, postleitzahl, stadt);
        this->_anschrift = a;
    }
    Anschrift anschrift() const {
        return _anschrift;
    }
    void  befreunden(Person& person) {

        _freunde.push_back(&person);
        person._freunde.push_back(this);
    }
    string text (const Person& person) const {
        stringstream s, freundetext;

        if (_freunde.empty()){
            freundetext << "---Keine Freunde\n";
        } else {
                for (unsigned int i = 0; i<_freunde.size(); i++) {
                    freundetext << "---Freund: "<< _freunde[i]->_name << "(" << &person << ")\n";
                }
        }
                s << _name << "\n---wohnhaft in " << _anschrift.text() << "\n"  << freundetext.str()  ;
                return s.str();

    }
};