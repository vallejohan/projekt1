#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

  string word,shortest,longest;
   int counter = 0;
   int totalword = 0;
  cout << "Mata in texten: ";
  shortest=longest=word;


//////////////////////////////////
//                              //
//        Ta in texten          //
//                              //
//////////////////////////////////

  while (cin >> word)
  {
    if (word.size() > longest.size())
      longest = word;
    else if (word.size() < shortest.size() || shortest == "")
      shortest = word;
    counter++;
      totalword+=word.size();
  }

  totalword = totalword/counter;

//////////////////////////////////
//                              //
//     Skriv ut information     //
//                              //
//////////////////////////////////

  cout << endl;
  cout << "Texten innehöll " << counter << " ord." << endl;
  cout << "Det kortase ordet var \"" << shortest << "\" med " << shortest.size() << " bokstäver." << endl; 
  cout << "Det längsta ordet var \"" << longest << "\" med " << longest.size() << " bokstäver." << endl;
  cout << "Medelordlängden var " << totalword << " bokstäver." << endl;

    cout << "hejsan" << endl;






  return 0;
}
