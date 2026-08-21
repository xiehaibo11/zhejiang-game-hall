
int DSO_pathbyaddr(void *addr,char *path,int sz)

{
  int iVar1;
  DSO_METHOD *pDVar2;
  _func_3880 *UNRECOVERED_JUMPTABLE;
  
  if (DAT_01782e70 == 0) {
    pDVar2 = DSO_METHOD_openssl();
    UNRECOVERED_JUMPTABLE = pDVar2->finish;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(_func_3880 **)(DAT_01782e70 + 0x48);
  }
  if (UNRECOVERED_JUMPTABLE != (_func_3880 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b18ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(addr);
    return iVar1;
  }
  ERR_put_error(0x25,0x69,0x6c,"crypto/dso/dso_lib.c",0x13b);
  return -1;
}

