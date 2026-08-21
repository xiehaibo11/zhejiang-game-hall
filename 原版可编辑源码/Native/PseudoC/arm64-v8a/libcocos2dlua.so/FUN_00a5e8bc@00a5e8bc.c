
bool FUN_00a5e8bc(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  SSL *pSVar3;
  
                    /* try { // try from 00a5e8d4 to 00b5e8d7 has its CatchHandler @ 00a5e910 */
                    /* try { // try from 00a5e8d8 to 00b5e923 has its CatchHandler @ 00a5e888 */
  pSVar3 = *(SSL **)(param_1 + (long)param_2 * 0x28 + 0x2b0);
  bVar1 = false;
  if (pSVar3 != (SSL *)0x0) {
    iVar2 = SSL_pending(pSVar3);
    if (iVar2 == 0) {
      pSVar3 = *(SSL **)(param_1 + (long)param_2 * 0x28 + 0x300);
      bVar1 = false;
      if (pSVar3 != (SSL *)0x0) {
        iVar2 = SSL_pending(pSVar3);
        bVar1 = iVar2 != 0;
      }
    }
    else {
      bVar1 = true;
    }
  }
                    /* catch() { ... } // from try @ 00a5e8d4 with catch @ 00a5e910 */
  return bVar1;
}

