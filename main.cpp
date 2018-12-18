#include "Anschrift.h"
#include "Person.h"
#include <iostream>
using namespace std;

void log(const Person& person){
    cout << "[" << &person << "] " << person.text(person) ;
 }
 int main() {
 const string seperator = "---\n";

 Person daniel("Daniel Düsentrieb");
 daniel.setzeAnschrift(Anschrift("Raketenweg", "12", 90560, "Entenhausen"));
 log(daniel);

 Person donald("Donald Duck");
 donald.setzeAnschrift("Entengasse", "3a", 90560, "Entenhausen");


 cout << "\nDaniel und Donald werden Freunde:\n";
 daniel.befreunden(donald);
    log(daniel);
    log(donald);

 Person person;
 cout << "\nEine geheimnisvolle Person befreundet sich mit allenanderen:\n";
 person.befreunden(daniel);
 person.befreunden(donald);
 log(person);

 Anschrift anschrift("Erpelhofer Str.", "12", 90560, "Entenhausen");
 cout << "\nDonald zieht um nach " << anschrift.text() << endl;
 donald.setzeAnschrift(anschrift);
 log(donald);
 }