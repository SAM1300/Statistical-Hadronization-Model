void comparison_plot(){
const char *particles[10] = {"#pi^{-}/#pi^{+}", "K^{-}/K^{+}","#bar{p}/p", "#bar{#Lambda}/#Lambda", "#Xi^{+}/#Xi^{-}","K^{-}/#pi^{-}", "#bar{p}/#pi^{-}", "#Lambda/#pi^{+}", "#Xi^{+}/#pi^{-} "};
  ifstream input;
    input.open("Alice/0-5mod.txt");

  Double_t modelData[9],expData[9],expError[9],stdDev[9];

    TH1D *hist_exp = new TH1D("Yield Plot","Yield Plot 60-80%",9,0,9);
    TH1D *hist_data = new TH1D("","",9,0,9);
    TH1D *hist_stddev = new TH1D("", "", 9,0,9);
    TCanvas *c = new TCanvas("c", "canvas", 1000, 1000);

   TPad *pad1 = new TPad("pad1", "pad1", 0, 0.3, 1, 1.0);
   pad1->SetBottomMargin(0); // Upper and lower plot are joined
   pad1->Draw();
   pad1->cd();
   pad1->SetTickx(0);


   gStyle->SetErrorX(0);


   for (int i=0;i<9;i++){


    input>>expData[i]>>expError[i]>>modelData[i]>>stdDev[i];

    cout<<expData[i]<<"\t"<<expError[i]<<"\t"<<modelData[i]<<"\t"<<stdDev[i]<<endl;
    hist_exp->SetBinContent(i+1,expData[i]);
    hist_exp->SetBinError(i+1,expError[i]);
    hist_data->SetBinContent(i+1,modelData[i]);
    hist_stddev->SetBinContent(i+1,stdDev[i]);
    hist_stddev->GetXaxis()->SetBinLabel(i+1,particles[i]);
    hist_stddev->GetXaxis()->SetLabelSize(0.18);
    hist_stddev->GetYaxis()->SetLabelSize(0.10);
    hist_stddev->GetYaxis()->SetRangeUser(-4,4);
    hist_exp->GetYaxis()->SetTitle("Ratios");
    hist_exp->GetYaxis()->SetLabelSize(0.04);
    hist_exp->GetYaxis()->CenterTitle(kTRUE);
                                  hist_exp->GetYaxis()->SetTitleSize(0.05);
                                  hist_exp->GetYaxis()->SetTitleOffset(0.9);
    hist_stddev->GetXaxis()->SetLabelOffset(0.015);
    hist_stddev->GetXaxis()->SetLabelFont(42);
    hist_stddev->GetYaxis()->SetTitle("Std. Dev.");
                                  hist_stddev->GetYaxis()->SetTitleSize(0.16);
                                  hist_stddev->GetYaxis()->SetTitleOffset(0.25);
    hist_stddev->GetYaxis()->CenterTitle(kTRUE);
    
    hist_exp->SetMarkerColor(1);
    hist_data->SetMarkerColor(2);
     hist_exp->SetMarkerStyle(25);
    hist_data->SetMarkerStyle(34);
     hist_exp->SetMarkerSize(2.2);
    hist_data->SetMarkerSize(2.2);


    hist_data->SetStats(0);
    hist_exp->SetStats(0);
    hist_stddev->SetStats(0);
    
  }

  gPad->SetLogy();
  hist_exp->Draw("P");
  hist_data->Draw("same P");
  auto legend = new TLegend(0.1,0.7,0.48,0.9);
   legend->AddEntry(hist_data,"THERMUS GCE Model","p");    //For GCE
   //legend->AddEntry(hist_data,"THERMUS SCE Model","p");        //For SCE
   legend->AddEntry(hist_exp,"Experimental Data","p");
   legend->Draw();

   c->cd();          // Go back to the main canvas before defining pad2
   TPad *pad2 = new TPad("pad2", "pad2", 0, 0.07, 1, 0.3);
   pad2->SetTopMargin(0);
   pad2->SetBottomMargin(0.2);
   pad2->SetGridy();
   pad2->Draw();
   pad2->cd();
   hist_stddev->Draw("P");
   hist_stddev->SetMarkerStyle(20);
   hist_stddev->SetMarkerColor(2);
}

