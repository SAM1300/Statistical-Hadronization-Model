# include <string>
# include <fstream>
void TF(){
std::string file ;
std::cout << "Enter Filename:" << "\n";
std::cin >> file;
gSystem -> Load("/home/sanket/Products/root/lib/libMinuit.so");
TTMParticleSet* f = new TTMParticleSet("particles/PartList_PPB2014_CBHN.txt");
f -> InputDecays("particles");
TTMParameterSetBSQ* p = new TTMParameterSetBSQ(0.16,0.05,0.0,0.0,1.0);
p -> FitT(0.16, 0.15 ,0.17);
p -> FitMuB(0.0);
p -> FitMuS(0.0);
const char* c = file.c_str();
TTMThermalFitBSQ* fit = new TTMThermalFitBSQ(f,p,c);
fit -> SetQStats(kFALSE);
fit -> SetWidth(kFALSE);
fit -> GenerateYields();
fit -> ListYields();
fit -> FitData(0);
p -> List();
fit -> GenerateYields();
fit -> ListYields();
std::string cent;
std::cout << " type cent. : ";
std::cin >> cent;
Double_t r = p -> GetTPar() -> GetValue();
Double_t r_er = p -> GetTPar() -> GetError();
Double_t b = p -> GetMuBPar() -> GetValue();
Double_t b_er = p -> GetMuBPar() -> GetError();
Double_t s = p -> GetMuSPar() -> GetValue();
Double_t s_er = p-> GetMuSPar() -> GetError();

Double_t anpi_pi_model = fit -> GetYield(-211,211,cent) -> GetModelValue();
Double_t anpi_pi_exp = fit -> GetYield(-211,211,cent) -> GetExpValue();
Double_t anpi_pi_er = fit -> GetYield(-211,211,cent) -> GetExpError();
Double_t anpi_pi_std = fit -> GetYield(-211,211,cent) -> GetStdDev();

Double_t ank_k_model = fit -> GetYield(-321,321,cent) -> GetModelValue();
Double_t ank_k_exp = fit -> GetYield(-321,321,cent) -> GetExpValue();
Double_t ank_k_er = fit -> GetYield(-321,321,cent) -> GetExpError();
Double_t ank_k_std = fit -> GetYield(-321,321,cent) -> GetStdDev();

Double_t anp_p_model = fit -> GetYield(-2212,2212,cent) -> GetModelValue();
Double_t anp_p_exp = fit -> GetYield(-2212,2212,cent) -> GetExpValue();
Double_t anp_p_er = fit -> GetYield(-2212,2212,cent) -> GetExpError();
Double_t anp_p_std = fit -> GetYield(-2212,2212,cent) -> GetStdDev();

Double_t anl_l_model = fit -> GetYield(-3122,3122,cent) -> GetModelValue();
Double_t anl_l_exp = fit -> GetYield(-3122,3122,cent) -> GetExpValue();
Double_t anl_l_er = fit -> GetYield(-3122,3122,cent) -> GetExpError();
Double_t anl_l_std = fit -> GetYield(-3122,3122,cent) -> GetStdDev();

Double_t anxi_xi_model = fit -> GetYield(-3312,3312,cent) -> GetModelValue();
Double_t anxi_xi_exp = fit -> GetYield(-3312,3312,cent) -> GetExpValue();
Double_t anxi_xi_er = fit -> GetYield(-3312,3312,cent) -> GetExpError();
Double_t anxi_xi_std = fit -> GetYield(-3312,3312,cent) -> GetStdDev();

Double_t ank_anpi_model = fit -> GetYield(-321,-211,cent) -> GetModelValue();
Double_t ank_anpi_exp = fit -> GetYield(-321,-211,cent) -> GetExpValue();
Double_t ank_anpi_er = fit -> GetYield(-321,-211,cent) -> GetExpError();
Double_t ank_anpi_std = fit -> GetYield(-321,-211,cent) -> GetStdDev();

Double_t anp_anpi_model = fit -> GetYield(-2212,-211,cent) -> GetModelValue();
Double_t anp_anpi_exp = fit -> GetYield(-2212,-211,cent) -> GetExpValue();
Double_t anp_anpi_er = fit -> GetYield(-2212,-211,cent) -> GetExpError();
Double_t anp_anpi_std = fit -> GetYield(-2212,-211,cent) -> GetStdDev();

Double_t l_pi_model = fit -> GetYield(3122,211,cent) -> GetModelValue();
Double_t l_pi_exp = fit -> GetYield(3122,211,cent) -> GetExpValue();
Double_t l_pi_er = fit -> GetYield(3122,211,cent) -> GetExpError();
Double_t l_pi_std = fit -> GetYield(3122,211,cent) -> GetStdDev();

Double_t anxi_anpi_model = fit -> GetYield(-3312,-211,cent) -> GetModelValue();
Double_t anxi_anpi_exp = fit -> GetYield(-3312,-211,cent) -> GetExpValue();
Double_t anxi_anpi_er = fit -> GetYield(-3312,-211,cent) -> GetExpError();
Double_t anxi_anpi_std = fit -> GetYield(-3312,-211,cent) -> GetStdDev();

std::ofstream data;
//std::string cent;
//std::cin >> cent;
data.open("Alice/par.txt" , std::ios_base::app);
data << "                       " << cent << "\n";
//data << "         " << "antipi/pi" << "\t   " << "antikaon/kaon" << "\t   " << "anti-p/p" << "\t   " << "anti-lam/lam" << "\t   " << "anti-xi/xi" << "\t   " << "anti-kaon/anti-pi" << "\t   " << "anti-p/antipi" << "\t   " << "lamb/pi" << "\t   " << "anti-xi/antipi" << "\n";
//data << " Exp value: " << "\t   " << anpi_pi_exp << "\t   " << ank_k_exp << "\t   " << anp_p_exp << "\t   " << anl_l_exp << "\t   " << anxi_xi_exp << "\t   " << ank_anpi_exp << "\t   " << anp_anpi_exp << "\t   " << l_pi_exp << "\t   " << anxi_anpi_exp << "\n";
//data << " Model Value: " <<  "\t   " << anpi_pi_model << "\t   " << ank_k_model << "\t   " << anp_p_model << "\t   " << anl_l_model << "\t   " << anxi_xi_model << "\t   " << ank_anpi_model << "\t   " << anp_anpi_model << "\t   " << l_pi_model << "\t   " << anxi_anpi_model << "\n";
//data << "Exp Error: "  << "\t   " << anpi_pi_er << "\t   " << ank_k_er << "\t   " << anp_p_er << "\t   " << anl_l_er << "\t   " << anxi_xi_er << "\t   " << ank_anpi_er << "\t   " << anp_anpi_er << "\t   " << l_pi_er << "\t   " << anxi_anpi_er << "\n";
 //data << "Std. Dev: "<< "\t   " << anpi_pi_std << "\t   " << ank_k_std << "\t   " << anp_p_std << "\t   " << anl_l_std << "\t   " << anxi_xi_std << "\t   " << ank_anpi_std << "\t   " << anp_anpi_std << "\t   " << l_pi_std << "\t   " << anxi_anpi_std << "\n";

data << "T = " << r << "+-" << r_er << "\t   " << "MuB =" << b << "+-" << b_er << "\t    " <<"MuS = " << s << "+-" << s_er << "\n";
data << "\n";
data << "\n";
data.close(); 

std::string mod;
std::cout << " Enter model value filename: ";
std::cin >> mod;
std::ofstream g;
g.open(mod);
g  << anpi_pi_exp << "\t" << anpi_pi_er << "\t" << anpi_pi_model << "\t" << anpi_pi_std << "\n";
g  << ank_k_exp << "\t" << ank_k_er << "\t" << ank_k_model << "\t" << ank_k_std << "\n";
g  << anp_p_exp << "\t" << anp_p_er << "\t" << anp_p_model << "\t" << anp_p_std << "\n";
g  << anl_l_exp << "\t" << anl_l_er << "\t" << anl_l_model << "\t" << anl_l_std << "\n";
g  << anxi_xi_exp << "\t" << anxi_xi_er << "\t" << anxi_xi_model << "\t" << anxi_xi_std << "\n";
g  << ank_anpi_exp << "\t" << ank_anpi_er << "\t" << ank_anpi_model << "\t" << ank_anpi_std << "\n";
g  << anp_anpi_exp << "\t" << anp_anpi_er << "\t" << anp_anpi_model << "\t" << anp_anpi_std << "\n";
g  << l_pi_exp << "\t" << l_pi_er << "\t" << l_pi_model << "\t" << l_pi_std << "\n";
g  << anxi_anpi_exp << "\t" << anxi_anpi_er << "\t" << anxi_anpi_model << "\t" << anxi_anpi_std << "\n";
g.close();

}

