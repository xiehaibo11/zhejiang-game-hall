
void X509_CRL_set_default_method(undefined *param_1)

{
  PTR_DAT_01d20bd0 = &DAT_01d20bd8;
                    /* try { // try from 00b650b4 to 00c651e3 has its CatchHandler @ 00b650b4
                       catch() { ... } // from try @ 00b650b4 with catch @ 00b650b4
                       catch() { ... } // from try @ 00b654d0 with catch @ 00b650b4 */
  if (param_1 != (undefined *)0x0) {
    PTR_DAT_01d20bd0 = param_1;
  }
  return;
}

