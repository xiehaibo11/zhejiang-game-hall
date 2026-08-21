
int DSO_pathbyaddr(void *addr,char *path,int sz)

{
  int iVar1;
  DSO_METHOD *pDVar2;
  _func_3880 *UNRECOVERED_JUMPTABLE;
  
  if (DAT_01d390f0 == 0) {
    pDVar2 = DSO_METHOD_openssl();
    UNRECOVERED_JUMPTABLE = pDVar2->finish;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(_func_3880 **)(DAT_01d390f0 + 0x48);
  }
  if (UNRECOVERED_JUMPTABLE != (_func_3880 *)0x0) {
                    /* try { // try from 00b09630 to 00c09653 has its CatchHandler @ 00b09b14 */
                    /* WARNING: Could not recover jumptable at 0x00b09638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(addr);
    return iVar1;
  }
                    /* try { // try from 00b09658 to 00c09667 has its CatchHandler @ 00b09b10 */
  ERR_put_error(0x25,0x69,0x6c,"crypto/dso/dso_lib.c",0x13b);
  return -1;
}

