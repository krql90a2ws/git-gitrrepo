void test_weight_hist(){

  TH1D *hist = new TH1D("hist","hist",10,0,10);

  Double_t x;
   
  for(int i =0;i<10;i++){
    x = gRandom->Uniform(0,10);
    hist->Fill(x,1);
    cout<<hist->GetBinContent(i+1)<<endl;
     
  }
  
    hist->Draw("e");
    cout<<hist->Integral()<<endl;
    cout<<" i have made an update on october 8, 2021 "<<endl;    
  
  //this line is edited online and commit it to see on your local system

}
