# include <fstream>
# include <string>
# include <iostream>
int main(){
std::ofstream f;
std::string s;
f.open("exm.txt",std::ios_base::app);
std::cin >> s;

f << s;
f << "\n";
f.close();
}


