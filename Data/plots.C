# include <vector>
void plots(){
//Temperature
TCanvas* c1 = new TCanvas("c1","Temperature Vs <N_part>",1000,500);
c1 -> cd();
 Double_t  t[5] = {0.146481, 0.160178, 0.165239, 0.165131,0.164495};
Double_t c[5] = {21,62,141,235,352};
Double_t ex[5]= {6,9,8,9,3};
Double_t  ey[5] = {0.00220591, 0.00352758, 0.00341181, 0.00412302,0.00421775};
TGraphErrors* p = new TGraphErrors(5,c,t,ex,ey);
TAxis* axis = p -> GetYaxis();
axis -> SetRangeUser(0,0.250);
p -> SetTitle("Temperature Vs Centrality  ; <N_{part}> ; Temperature(GeV)");
p -> GetXaxis() -> SetTitleSize(0.04);
p -> GetXaxis() -> SetLabelOffset(0);
p -> SetMarkerColor(2);
p -> SetMarkerStyle(21);
p -> Draw("AP");


// for MuB
TCanvas* c2 = new TCanvas("c2","MuB vs <N_part>", 1000,500);
c2 -> cd();
Double_t m[5] = {0.0155704, 0.0195231, 0.0216643, 0.0249086, 0.0257326};
Double_t mc[5] = {21,62,141,235,352};
Double_t mex[5]= {6,9,8,9,3};
Double_t mey[5] = {0.00665054, 0.00678928, 0.00656209, 0.00899562, 0.0102239};
TGraphErrors* mp = new TGraphErrors(5,mc,m,mex,mey);
TAxis* maxis = mp -> GetYaxis();
maxis -> SetRangeUser(0,0.1);
mp -> SetTitle("MuB Vs Centrality ; <N_{part}> ; MuB(GeV)");
mp -> GetXaxis() -> SetTitleSize(0.04);
mp -> GetYaxis() -> SetTitleSize(0.04);
mp -> GetXaxis() -> SetLimits(0,400);
mp -> SetMarkerColor(2);
mp -> SetMarkerStyle(21);
mp -> Draw("AP");

// for MuS
TCanvas* c3 = new TCanvas("c3","MuS vs <N_part>", 1000,500);
c3 -> cd();
Double_t s[5] = {0.00569699, 0.00593353,  0.00492687, 0.00357248, 0.00376594};
Double_t sc[5] = {21,62,141,235,352};
Double_t sx[5]= {6,9,8,9,3};
Double_t sy[5] = {0.00473984, 0.00502299, 0.00418857, 0.00597642, 0.00749591};
TGraphErrors* sp = new TGraphErrors(5,sc,s,sx,sy);
TAxis* saxis = sp -> GetYaxis();
saxis -> SetRangeUser(-0.1,0.1);
sp -> SetTitle("MuS Vs Centrality ;<N_{part}> ; MuS(GeV)");
sp -> GetXaxis() -> SetTitleSize(0.04);
sp -> GetYaxis() -> SetTitleSize(0.04);
sp -> GetXaxis() -> SetLimits(0,400);
sp -> SetMarkerColor(2);
sp -> SetMarkerStyle(21);
sp -> Draw("AP");

}
