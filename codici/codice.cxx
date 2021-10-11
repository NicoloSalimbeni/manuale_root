  TCanvas* c = new TCanvas("c", "c", 1000, 450, 1300, 650);
  c->SetGrid();
  c->SetBottomMargin(0.12591304);

  TGraphErrors* TC_plot = new TGraphErrors(freq_ROOT, A_ROOT, err_freq_fake_ROOT, err_A_ROOT);
  TC_plot->SetTitle("Funzione di Trasferimento Condensatore (T_{C}); f (Hz); A=V_{out}/V_{in}");
  TC_plot->SetMarkerStyle(20);
  TC_plot->SetMarkerSize(0.5);
  TC_plot->GetXaxis()->SetLabelSize(0.047);
  TC_plot->GetYaxis()->SetLabelSize(0.047);
  TC_plot->GetXaxis()->SetTitleSize(0.052);
  TC_plot->GetYaxis()->SetTitleSize(0.052);
  TC_plot->GetYaxis()->SetTitleOffset(1);
  TC_plot->GetXaxis()->SetMaxDigits(3);
  TC_plot->Draw("AP");