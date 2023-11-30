void Ic_temp_final_final()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun May  3 18:52:11 2020) by ROOT version 6.20/00
   TCanvas *c1 = new TCanvas("c1", "c1",31,192,700,527);
   c1->Range(0.6011553,0.4016886,0.9734965,1.450123);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogx();
   c1->SetLogy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Josephson Current Dependence on Temperature");
   
   Double_t Graph_fx1001[22] = {
   4.354,
   4.37,
   4.4,
   4.416,
   4.447,
   4.478,
   4.557,
   4.622,
   4.655,
   4.72,
   4.804,
   4.889,
   4.923,
   5.171,
   5.489,
   5.765,
   6.013,
   6.338,
   6.634,
   7.141,
   7.767,
   8.63};
   Double_t Graph_fy1001[22] = {
   12.7796,
   12.42812,
   12.42161,
   12.17842,
   11.8694,
   12.08353,
   12.335,
   11.9236,
   12.05864,
   12.1316,
   11.37835,
   12.06255,
   11.2334,
   11.25515,
   10.2323,
   10.3061,
   9.5291,
   8.45198,
   7.80598,
   6.1064,
   5.04825,
   4.9833};
   Double_t Graph_fex1001[22] = {
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005,
   0.005};
   Double_t Graph_fey1001[22] = {
   0.3063,
   0.315,
   0.249,
   0.1603,
   0.399,
   0.4102,
   0.5044,
   0.2474,
   0.3031,
   0.6722,
   0.3483,
   1.0455,
   1.0485,
   0.5458,
   0.6177,
   0.5387,
   0.4113,
   0.3971,
   0.25,
   0.2268,
   0.4208,
   0.3766};
   TGraphErrors *gre = new TGraphErrors(22,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc6633");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,3.9204,9.0636);
   Graph_Graph1001->SetMinimum(3.756565);
   Graph_Graph1001->SetMaximum(13.95819);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *landau1002 = new TF1("landau","landau",3.9204,9.0636, TF1::EAddToList::kNo);
   landau1002->SetFillColor(19);
   landau1002->SetFillStyle(0);

   ci = TColor::GetColor("#0099ff");
   landau1002->SetLineColor(ci);
   landau1002->SetLineWidth(2);
   landau1002->SetChisquare(18.79555);
   landau1002->SetNDF(19);
   landau1002->GetXaxis()->SetLabelFont(42);
   landau1002->GetXaxis()->SetTitleOffset(1);
   landau1002->GetXaxis()->SetTitleFont(42);
   landau1002->GetYaxis()->SetLabelFont(42);
   landau1002->GetYaxis()->SetTitleFont(42);
   landau1002->SetParameter(0,68.50413);
   landau1002->SetParError(0,1.231741);
   landau1002->SetParLimits(0,0,0);
   landau1002->SetParameter(1,4.449616);
   landau1002->SetParError(1,0.2003037);
   landau1002->SetParLimits(1,0,0);
   landau1002->SetParameter(2,1.192727);
   landau1002->SetParError(2,0.07915429);
   landau1002->SetParLimits(2,0,9.687137);
   landau1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(landau1002);
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1003[22] = {
   4.354,
   4.37,
   4.4,
   4.416,
   4.447,
   4.478,
   4.557,
   4.622,
   4.655,
   4.72,
   4.804,
   4.889,
   4.923,
   5.171,
   5.489,
   5.765,
   6.013,
   6.338,
   6.634,
   7.141,
   7.767,
   8.63};
   Double_t Graph_fy1003[22] = {
   22.1452,
   22.09925,
   22.01246,
   21.9659,
   21.8751,
   21.7834,
   21.5464,
   21.3475,
   21.2452,
   21.0409,
   20.7716,
   20.4927,
   20.3794,
   19.5221,
   18.3427,
   17.2473,
   16.2085,
   14.7745,
   13.4035,
   10.9359,
   7.741,
   3.2225};
   Double_t Graph_fex1003[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1003[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(22,Graph_fx1003,Graph_fy1003,Graph_fex1003,Graph_fey1003);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(28);
   gre->SetMarkerStyle(33);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,3.9264,9.0576);
   Graph_Graph1003->SetMinimum(1.33023);
   Graph_Graph1003->SetMaximum(24.03747);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1004[22] = {
   4.354,
   4.37,
   4.4,
   4.416,
   4.447,
   4.478,
   4.557,
   4.622,
   4.655,
   4.72,
   4.804,
   4.889,
   4.923,
   5.171,
   5.489,
   5.765,
   6.013,
   6.338,
   6.634,
   7.141,
   7.767,
   8.63};
   Double_t Graph_fy1004[22] = {
   16.3704,
   16.3497,
   16.3104,
   16.2892,
   16.2475,
   16.2052,
   16.0943,
   15.9996,
   15.9504,
   15.8511,
   15.7182,
   15.5783,
   15.5208,
   15.0749,
   14.4322,
   13.8073,
   13.1905,
   12.3002,
   11.4054,
   9.6804,
   7.2086,
   3.2102};
   Double_t Graph_fex1004[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1004[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(22,Graph_fx1004,Graph_fy1004,Graph_fex1004,Graph_fey1004);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc6600");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(12);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,3.9264,9.0576);
   Graph_Graph1004->SetMinimum(1.89418);
   Graph_Graph1004->SetMaximum(17.68642);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetLimits(4.349, 8.635);
   multigraph->GetXaxis()->SetTitle("T [K]");
   multigraph->GetXaxis()->SetMoreLogLabels();
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("I_{c} [#mu A]");
   multigraph->GetYaxis()->SetMoreLogLabels();
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.1790831,0.1868365,0.465616,0.3800425,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04246284);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Experiment","lpfe");

   ci = TColor::GetColor("#cc6633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0099ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);

   ci = TColor::GetColor("#cc6633");
   entry->SetTextColor(ci);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Weak Coupling","p");

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(28);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(2);
   entry->SetTextColor(28);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Strong Coupling","p");

   ci = TColor::GetColor("#cc6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(12);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextColor(12);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.9338535,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->Draw();
   TLatex *   tex = new TLatex(7.08389,16.37456,"#chi^{2}_{red}=0.9895");
   tex->SetTextColor(15);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
