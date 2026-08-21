
void * DSO_global_lookup(char *name)

{
  uint uVar1;
  DSO_METHOD *pDVar2;
  _func_3881 *UNRECOVERED_JUMPTABLE;
  int in_w2;
  
                    /* try { // try from 00b097b4 to 00c097d7 has its CatchHandler @ 00b09b18 */
  if (DAT_01d390f0 == 0) {
    pDVar2 = DSO_METHOD_openssl();
    UNRECOVERED_JUMPTABLE = pDVar2->pathbyaddr;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(_func_3881 **)(DAT_01d390f0 + 0x50);
  }
  if (UNRECOVERED_JUMPTABLE != (_func_3881 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b097e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(name,(char *)UNRECOVERED_JUMPTABLE,in_w2);
    return (void *)(ulong)uVar1;
  }
  ERR_put_error(0x25,0x8b,0x6c,"crypto/dso/dso_lib.c",0x156);
  return (void *)0x0;
}

