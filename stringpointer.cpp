 #include <cstring>
 #include <iostream>
 using namespace std;
 #define SIZE 5
 int main()
 {
 // declaring and initializing array of pointers
 char* names[SIZE]
 = { "Rahul", "Aman", "Abdul", "Ram", "Pradeep" };
 for (int i = 0; i < SIZE; i++) {
 int currentStrLen = strlen(names[i]);
 // accessing character
 char lastChar = names[i][currentStrLen - 1];
 cout << lastChar << " ";
 }
 cout << endl;
 // printing whole strings
 for (int i = 0; i < SIZE; i++) {
 cout << names[i] << " ";
 }
 cout << endl;
 // updating element
 names[2] = "Fashil";
 // printing whole strings
 for (int i = 0; i < SIZE; i++) {
 cout << names[i] << " ";
 }
 return 0;
}