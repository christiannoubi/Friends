#pragma once;
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Anschrift {

private:
        string _strasse;
        string _hausnummer;
        int _postleitzahl;
        string _stadt;
public:

    Anschrift () {
        _strasse = "Unbekannte strasse,";
        _hausnummer = "Unbekannte hausnummer";
        _postleitzahl = 0;
        _stadt = "Unbekannte stadt";

    }

    Anschrift (const string& strasse , string const& hausnummer, int postleitzahl, string const&stadt) {
        this->_strasse = strasse;
        this->_hausnummer = hausnummer;
        this->_postleitzahl = postleitzahl;
        this->_stadt = stadt;
    }
    ~Anschrift () {}

    string text () const{
        stringstream s;
        s << _postleitzahl  <<" "<< _stadt <<", "<< _strasse <<" "<< _hausnummer ;
        return s.str();
    }

};