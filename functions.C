void functions(){
TTMParticleSet point("./particles/PartList_PPB2014_CBHN.txt");
	point.InputDecays("./particles/",true);
	
	Double_t T      = 0.16; 
    Double_t muB = 0.2, muS = 0.0 ; 
    Double_t gammas = 0.8;
    Double_t radius = 6;
    Double_t radius_c = 6; 
    Double_t gammac = 1.0; 
    Double_t muC = 0.0, muQ = -0.01 ;


	TTMParameterSetBQ par(T,muB,muQ,gammas,radius_c,radius); 
	par.FitT(T); 
    par.FitMuB(muB); 
    par.FitGammas(gammas);
    par.FixRadius(radius);
    TTMThermalFitBQ fit(&point,&par,"exp.txt");
	fit.SetWidth(kFALSE);
	fit.FitData(0);
	fit.GenerateYields();
	fit.ListYields();
	par.List();}
