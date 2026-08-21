
bool FUN_00a2b08c(void)

{
  int iVar1;
  
                    /* try { // try from 00a2b08c to 00b2b0df has its CatchHandler @ 00a2b08c
                       catch() { ... } // from try @ 00a2b08c with catch @ 00a2b08c
                       catch() { ... } // from try @ 00a2b180 with catch @ 00a2b08c
                       catch() { ... } // from try @ 00a2b214 with catch @ 00a2b08c */
  if (DAT_01769a20 == -1) {
    iVar1 = socket(10,2,0);
    if (iVar1 == -1) {
                    /* try { // try from 00a2b0e0 to 00b2b0fb has its CatchHandler @ 00a2b22c */
      DAT_01769a20 = 0;
    }
    else {
      DAT_01769a20 = 1;
      FUN_00a25eac(0,iVar1);
    }
  }
  return 0 < DAT_01769a20;
}

