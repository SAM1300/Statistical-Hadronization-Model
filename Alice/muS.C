void muS()
{
//=========Macro generated from canvas: c3/MuS vs <N_part>
//=========  (Sun Aug  8 15:18:50 2021) by ROOT version 6.22/08
   TCanvas *c3 = new TCanvas("c3", "MuS vs <N_part>",234,167,1000,502);
   c3->Range(-50,-4.375,450,-0.625);
   c3->SetFillColor(10);
   c3->SetBorderMode(0);
   c3->SetBorderSize(2);
   c3->SetLogy();
   c3->SetFrameFillColor(0);
   c3->SetFrameBorderMode(0);
   c3->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[5] = {
   21,
   62,
   141,
   235.0701,
   352.3046};
   Double_t Graph0_fy1001[5] = {
   0.00527493,
   0.00539339,
   0.00493437,
   0.005119299,
   0.004590311};
   Double_t Graph0_fex1001[5] = {
   6,
   9,
   8,
   9,
   3};
   Double_t Graph0_fey1001[5] = {
   0.00223959,
   0.0021036,
   0.00210347,
   0.00251964,
   0.0024939};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("MuS Vs Centrality ");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.6);
   
   TH1F *Graph_Graph_Graph010021001 = new TH1F("Graph_Graph_Graph010021001","MuS Vs Centrality ",100,0,400);
   Graph_Graph_Graph010021001->SetMinimum(0.0001);
   Graph_Graph_Graph010021001->SetMaximum(0.1);
   Graph_Graph_Graph010021001->SetDirectory(0);
   Graph_Graph_Graph010021001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010021001->SetLineColor(ci);
   Graph_Graph_Graph010021001->SetMarkerSize(1.6);
   Graph_Graph_Graph010021001->GetXaxis()->SetTitle("<N_{part}> ");
   Graph_Graph_Graph010021001->GetXaxis()->CenterTitle();
   Graph_Graph_Graph010021001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010021001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph010021001->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph_Graph010021001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010021001->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010021001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010021001->GetYaxis()->SetTitle(" #mu_{S} (GeV)");
   Graph_Graph_Graph010021001->GetYaxis()->CenterTitle();
   Graph_Graph_Graph010021001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010021001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph010021001->GetYaxis()->SetLabelSize(0.04);
   Graph_Graph_Graph010021001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010021001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010021001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010021001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010021001->GetZaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph010021001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph010021001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph010021001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010021001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010021001);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3396794,0.9201681,0.6022044,0.9936975,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   TText *pt_LaTex = pt->AddText("MuS Vs Centrality ");
   pt->Draw();
   c3->Modified();
   c3->cd();
   c3->SetSelected(c3);
}
