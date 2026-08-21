
bool FUN_00a47ed4(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  SSL *pSVar3;
  
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
  return bVar1;
}

