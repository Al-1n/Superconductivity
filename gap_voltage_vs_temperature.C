void gap_voltage_fitted()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Apr 28 06:08:49 2020) by ROOT version 6.20/00
   TCanvas *c1 = new TCanvas("c1", "c1",312,93,700,500);
   c1->Range(0.6011553,-0.1563615,0.9734965,0.6300957);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogx();
   c1->SetLogy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("Gap Voltage Dependence on Temperature");
   
   Double_t Graph_fx1005[22] = {
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
   Double_t Graph_fy1005[22] = {
   2.773,
   2.7824,
   2.7911,
   2.7354,
   2.8083,
   2.794,
   2.765,
   2.785,
   2.7596,
   2.761,
   2.7505,
   2.7435,
   2.736,
   2.708,
   2.6585,
   2.5915,
   2.5317,
   2.4325,
   2.3192,
   2.1284,
   1.6983,
   0.8474};
   Double_t Graph_fex1005[22] = {
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
   Double_t Graph_fey1005[22] = {
   0.04305,
   0.03028,
   0.01999,
   0.05417,
   0.04027,
   0.04399,
   0.03726,
   0.03085,
   0.02373,
   0.03761,
   0.06395,
   0.06995,
   0.06945,
   0.05545,
   0.08395,
   0.03765,
   0.02773,
   0.04176,
   0.02345,
   0.03137,
   0.07637,
   0.01125};
   TGraphErrors *gre = new TGraphErrors(22,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc6633");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#cc6633");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(0.8);
   
   TH1F *Graph_Graph_Graph10011005 = new TH1F("Graph_Graph_Graph10011005","Graph",100,3.9204,9.0636);
   Graph_Graph_Graph10011005->SetMinimum(0.634908);
   Graph_Graph_Graph10011005->SetMaximum(3.049812);
   Graph_Graph_Graph10011005->SetDirectory(0);
   Graph_Graph_Graph10011005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011005->SetLineColor(ci);
   Graph_Graph_Graph10011005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011005);
   
   
   TF1 *pol21006 = new TF1("pol2","pol2",4.354,8.63, TF1::EAddToList::kNo);
   pol21006->SetFillColor(19);
   pol21006->SetFillStyle(0);

   ci = TColor::GetColor("#cc6633");
   pol21006->SetLineColor(ci);
   pol21006->SetLineWidth(3);
   pol21006->SetChisquare(18.99134);
   pol21006->SetNDF(19);
   pol21006->GetXaxis()->SetLabelFont(42);
   pol21006->GetXaxis()->SetTitleOffset(1);
   pol21006->GetXaxis()->SetTitleFont(42);
   pol21006->GetYaxis()->SetLabelFont(42);
   pol21006->GetYaxis()->SetTitleFont(42);
   pol21006->SetParameter(0,0.03748563);
   pol21006->SetParError(0,0.1511274);
   pol21006->SetParLimits(0,0,0);
   pol21006->SetParameter(1,1.168375);
   pol21006->SetParError(1,0.04950171);
   pol21006->SetParLimits(1,0,0);
   pol21006->SetParameter(2,-0.1244291);
   pol21006->SetParError(2,0.003777359);
   pol21006->SetParLimits(2,0,0);
   pol21006->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol21006);
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1007[22] = {
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
   Double_t Graph_fy1007[22] = {
   3.56,
   3.5542,
   3.5433,
   3.5374,
   3.526,
   3.5146,
   3.4854,
   3.4612,
   3.4488,
   3.4244,
   3.3925,
   3.3599,
   3.3468,
   3.2494,
   3.1202,
   3.0035,
   2.8947,
   2.7455,
   2.6022,
   2.3365,
   1.9593,
   1.2668};
   Double_t Graph_fex1007[22] = {
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
   Double_t Graph_fey1007[22] = {
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
   gre = new TGraphErrors(22,Graph_fx1007,Graph_fy1007,Graph_fex1007,Graph_fey1007);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0099ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(28);
   gre->SetMarkerStyle(33);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_Graph10031007 = new TH1F("Graph_Graph_Graph10031007","Graph",100,3.9264,9.0576);
   Graph_Graph_Graph10031007->SetMinimum(1.03748);
   Graph_Graph_Graph10031007->SetMaximum(3.78932);
   Graph_Graph_Graph10031007->SetDirectory(0);
   Graph_Graph_Graph10031007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10031007->SetLineColor(ci);
   Graph_Graph_Graph10031007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10031007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10031007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10031007);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1008[22] = {
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
   Double_t Graph_fy1008[22] = {
   2.7266,
   2.7254,
   2.7229,
   2.7216,
   2.719,
   2.7164,
   2.7094,
   2.7034,
   2.7002,
   2.694,
   2.685,
   2.6757,
   2.6718,
   2.641,
   2.5941,
   2.5459,
   2.4959,
   2.4195,
   2.3377,
   2.1654,
   1.88,
   1.2643};
   Double_t Graph_fex1008[22] = {
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
   Double_t Graph_fey1008[22] = {
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
   gre = new TGraphErrors(22,Graph_fx1008,Graph_fy1008,Graph_fex1008,Graph_fey1008);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#cc6600");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(12);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10041008 = new TH1F("Graph_Graph_Graph10041008","Graph",100,3.9264,9.0576);
   Graph_Graph_Graph10041008->SetMinimum(1.11807);
   Graph_Graph_Graph10041008->SetMaximum(2.87283);
   Graph_Graph_Graph10041008->SetDirectory(0);
   Graph_Graph_Graph10041008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10041008->SetLineColor(ci);
   Graph_Graph_Graph10041008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10041008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10041008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10041008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10041008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10041008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10041008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10041008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10041008);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetLimits(4.349, 8.635);
   multigraph->GetXaxis()->SetTitle("T [K]");
   multigraph->GetXaxis()->SetMoreLogLabels();
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("#Delta(T) / e [mV]");
   multigraph->GetYaxis()->SetMoreLogLabels();
   multigraph->GetYaxis()->SetNoExponent();
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.1876791,0.2274775,0.4713467,0.4279279,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04360465);

   ci = TColor::GetColor("#993300");
   leg->SetLineColor(ci);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Experiment","lpfe");

   ci = TColor::GetColor("#cc6633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#cc6633");
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
   TLatex *   tex = new TLatex(7.477272,3.066341,"#chi^{2}= 0.9995");
   tex->SetTextColor(15);

   ci = TColor::GetColor("#333333");
   tex->SetLineColor(ci);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.2184814,0.9189189,0.7815186,0.981982,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.06306306);
   TText *pt_LaTex = pt->AddText("Gap Voltage Dependence on Temperature");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
