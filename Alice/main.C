# include <fstream>
# include <cmath>
int main(){
Double_t part, part_id[3];
Double_t anti_part, anti_part_id[3];
Double_t r, dr;
Double_t d_part;
Double_t d_apart;
Double_t arr1[7];
Double_t arr2[7];
//std::string filename;
//std::cout << "Filename:";
//std::cin >> filename;
//const char* c = filename.c_str();
for (int i = 0 ; i<7; i++){
std::cout << "particlenumber:";
std::cin >> part;
std::cout << "antiparticle number";
std::cin >> anti_part;
std::cout  << "error part";
std::cin >> d_part;
std::cout << "error antiparticle";
std::cin >> d_apart;
r = anti_part/part;
dr = sqrt(((d_apart*d_apart)*(part*part))+((d_part*d_part)*(anti_part*anti_part)))/(part*part);
//std::cout << r <<"\n";
//std::cout << dr << "\n";
arr1[i] = r;
arr2 [i] = dr;
//std::cout << arr1[i];
}
std::cout << arr1 <<"\n";
std::cout << arr2 <<"\n";
//part_id = {211, 321, 2212};
//anti_part_id = {-211 ,-321, -2212};
ofstream f;
f.open(c);
for (int i =0 ; i<7; i++){
f << "-211" << "\t" << "211" << "\t" << arr1[i] << "\t" << arr2[i];
f << "

}

