#ifndef YUNTSE_CXX
#define YUNTSE_CXX

#include "yuntse.h"
#include "TH1F.h"

bool yuntse::func() {

   TH1F *h = new TH1F("h", "h", 10, 0., 10.);

   float ih = 0.1;
   for ( int i = 1; i < 11; i++ ) {
      h->SetBinContent( i, ih );
      ih += 1.;
   }

   return true;
}
#endif
