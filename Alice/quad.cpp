# include <cmath>
# include <iostream>
# include <fstream>
# include <string>
int main(){
double  es, esy, er, lambda[5], anti_lambda[5], lambda_er[5],anti_lambda_er[5], xi[5], anti_xi[5],xi_er[5], anti_xi_er[5], particledata; 
std::string particle;
for (int i=0 ; i<5 ; i++) {
std::cout << "for lambda ";
std::cout << "Particledata: ";
std::cin >> particledata;
std::cout << "es: ";
std::cin >> es;
std::cout << "esy: ";
std::cin >> esy ;
er = sqrt((es*es)+(esy*esy));
lambda[i] = particledata;
lambda_er[i] = er;
std::cout << lambda[i];
std::cout << lambda_er[i];
}
for (int i=0 ; i<5 ; i++){
std::cout << "for antilambda ";
std::cout << "Particledata: ";
std::cin >> particledata;
std::cout << "es: ";
std::cin >> es;
std::cout << "esy: ";
std::cin >> esy ;
er = sqrt((es*es)+(esy*esy));
anti_lambda[i] = particledata;
anti_lambda_er[i] = er;
std::cout << anti_lambda[i];
std::cout << anti_lambda_er[i];
}
for(int i =0 ; i<5 ; i++) {
std::cout << "for xi ";
std::cout << "Particledata: ";
std::cin >> particledata;
std::cout << "es: ";
std::cin >> es;
std::cout << "esy: ";
std::cin >> esy ;
er = sqrt((es*es)+(esy*esy));
xi[i] = particledata;
xi_er[i] = er;
std::cout << xi[i];
std::cout << xi_er[i];
}
for (int i=0 ; i<5 ; i++) {
std::cout << "for xi ";
std::cout << "Particledata: ";
std::cin >> particledata;
std::cout << "es: ";
std::cin >> es;
std::cout << "esy: ";
std::cin >> esy ;
er = sqrt((es*es)+(esy*esy));
anti_xi[i] = particledata;
anti_xi_er[i] = er;
std::cout << anti_xi[i];
std::cout << anti_xi_er[i];
}

//std::cout << lambda;
//std::cout << anti_lambda;
//std::cout << lambda_er;
//std::cout << anti_lambda_er;
//std::cout << xi;
//std::cout << anti_xi;
//std::cout << xi_er;
//std::cout << anti_xi_er;
// creating file
std::ofstream f;
f.open("datastrsanket.txt");
f << "Particles" << "\t" << "0-5%" << "\t" << "10-20%" << "\t" << "20-40%" << "\t" << "40-60%" << "\t" <<  "60-80%" << "\n" ;
f << "lambda" << "\t" << lambda[0] << "+-" << lambda_er[0] << "\t" << lambda[1] << "+-" << lambda_er[1] << "\t" << lambda[2] << "+-" << lambda_er[2] <<"\t" <<lambda[3] <<"+-" << lambda_er[3] << "\t"<< lambda[4] << "+-" << lambda_er[4] << "\n" ;
f << "antilambda" << "\t" << anti_lambda[0] << "+-" << anti_lambda_er[0] << "\t" << anti_lambda[1] <<"+-" << anti_lambda_er[1] << "\t" << anti_lambda[2] << "+-" << anti_lambda_er[2] << "\t" << anti_lambda[3] << "+-" << anti_lambda_er[3] << "\t" << anti_lambda[4] << "+-" << anti_lambda_er[4] << "\n";
f << "xi" << "\t" <<  xi[0] << "+-" << xi_er[0] << "\t" <<  xi[1] <<"+-" << xi_er[1] << "\t" <<  xi[2] << "+-" << xi_er[2] << "\t" <<  xi[3] << "+-" << xi_er[3] << "\t" <<  xi[4] << "+-" << xi_er[4] << "\n";
f << "antixi" << "\t" <<  anti_xi[0] << "+-" << anti_xi_er[0] << "\t" <<  anti_xi[1] <<"+-" << anti_xi_er[1] << "\t" <<  anti_xi[2] << "+-" << anti_xi_er[2] << "\t" <<  anti_xi[3] << "+-" << anti_xi_er[3] << "\t" <<  anti_xi[4] << "+-" << anti_xi_er[4] << "\n";
f.close();

}




