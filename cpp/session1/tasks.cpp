#include <cctype>
#include <cfloat>
#include <cmath>
#include <string>
#include <bitset>
#include <iostream>
#include <iomanip>
#include <algorithm>
// Task1 
/* int main(){
    std::cout << "The table of ASCII" << std::endl;

    std::cout <<"+---------+----------+" << std::endl;

    std::cout << std::setw(5) <<"Char"<< std::setw(7) << "|"
    << std::setw(6)<<"ASCII" << std::endl;
    std::cout <<"+---------+----------+" << std::endl;

    for(int i = 0 ; i < 255; i++){
        std::cout << char(i) << std::dec << std::setw(7) <<i << std::endl;
    }
} */

// Task2 
/* int main(){
    int x , y , z;
    std::cout << "Enter The 3 numbers" << std::endl;
    std::cin >> x >> y >> z;
    int max_number = std::max(std::max(x,y),z);

    std::cout << "The maximum number between three values is " << max_number << std::endl;
} */

/* // Task3 
int main(){
    int a , b;
    std::cout << "Give the 2 numbers of the veritacle and horizental of triangle ";
    std::cin >> a >> b;
    a = std::pow(a , 2);
    b = std::pow(b , 2);
    int c = std::sqrt(a + b);

    std::cout << "The answer is " << c << std::endl;
} */
/* // Task4 
int main(){
    char ch;
    std::cout << "Enter the charachter : ";
    std::cin >> ch;
    ch = std::tolower(ch);

    bool chick = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    if(chick){
        std::cout << "YES\n";
    }
    else{
        std::cout << "NO\n";
    }
} */

// Task5

/* int sum(std::string str){
    int res = 0;
    for(char s : str){
        res += s - '0';
    }
    return res;
}

