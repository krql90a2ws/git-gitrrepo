void test_weight_hist(){

  // test this comment in the local repo
  TH1D *hist = new TH1D("hist","hist",10,0,10);

  Double_t x;
   
  for(int i =0;i<10;i++){
    x = gRandom->Uniform(0,10);
    hist->Fill(x,1);
    cout<<hist->GetBinContent(i+1)<<endl;
     
  }
  
    hist->Draw("e");
    cout<<hist->Integral()<<endl;
    

}
