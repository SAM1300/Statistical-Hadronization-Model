void muB()
{
//=========Macro generated from canvas: c2/MuB vs <N_part>
//=========  (Sun Aug  8 15:04:31 2021) by ROOT version 6.22/08
   TCanvas *c2 = new TCanvas("c2", "MuB vs <N_part>",230,182,1000,500);
   c2->Range(-50,-0.0125,450,0.1125);
   c2->SetFillColor(10);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameFillColor(0);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[5] = {
   21,
   62,
   141,
   235,
   352};
   Double_t Graph0_fy1001[5] = {
   0.0236596,
   0.0213658,
   0.0216643,
   0.0249086,
   0.0257326};
   Double_t Graph0_fex1001[5] = {
   6,
   9,
   8,
   9,
   3};
   Double_t Graph0_fey1001[5] = {
   0.00672859,
   0.00677648,
   0.00656209,
   0.00899562,
   0.0102239};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("MuB Vs Centrality ");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.6);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","MuB Vs Centrality ",100,0,400);
   Graph_Graph01001->SetMinimum(0);
   Graph_Graph01001->SetMaximum(0.1);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);
   Graph_Graph01001->SetMarkerSize(1.6);
   Graph_Graph01001->GetXaxis()->SetTitle(" <N_{part}> ");
   Graph_Graph01001->GetXaxis()->CenterTitle();
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle(" #mu_{B}(GeV)");
   Graph_Graph01001->GetYaxis()->CenterTitle();
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelOffset(0.01);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3617234,0.9180672,0.6242485,0.9915966,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   TText *pt_LaTex = pt->AddText("MuB Vs Centrality ");
   pt->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
