void temp()
{
//=========Macro generated from canvas: c1/Temperature Vs <N_part>
//=========  (Sun Aug  8 14:59:33 2021) by ROOT version 6.22/08
   TCanvas *c1 = new TCanvas("c1", "Temperature Vs <N_part>",129,170,1000,500);
   c1->Range(-48.625,-0.03125,437.625,0.28125);
   c1->SetFillColor(10);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameFillColor(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[5] = {
   21,
   62,
   141,
   235,
   352};
   Double_t Graph0_fy1001[5] = {
   0.165287,
   0.164372,
   0.165239,
   0.165131,
   0.164495};
   Double_t Graph0_fex1001[5] = {
   6,
   9,
   8,
   9,
   3};
   Double_t Graph0_fey1001[5] = {
   0.00427652,
   0.00401756,
   0.00341181,
   0.00412302,
   0.00421775};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Temperature Vs Centrality  ");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.6);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Temperature Vs Centrality  ",100,0,389);
   Graph_Graph01001->SetMinimum(0);
   Graph_Graph01001->SetMaximum(0.25);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);
   Graph_Graph01001->SetMarkerSize(1.6);
   Graph_Graph01001->GetXaxis()->SetTitle(" <N_{part}> ");
   Graph_Graph01001->GetXaxis()->CenterTitle();
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelOffset(0);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle(" T_{ch}(GeV)");
   Graph_Graph01001->GetYaxis()->CenterTitle();
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelOffset(0.01);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.04);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.2855711,0.9222689,0.6643287,0.9957983,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   TText *pt_LaTex = pt->AddText("Temperature Vs Centrality  ");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
