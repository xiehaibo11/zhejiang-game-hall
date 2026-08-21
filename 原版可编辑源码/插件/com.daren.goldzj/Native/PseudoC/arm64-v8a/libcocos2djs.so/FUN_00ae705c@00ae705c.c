
bool FUN_00ae705c(long param_1,char *param_2)

{
  int iVar1;
  X509_STORE *ctx;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return true;
    }
    plVar2 = (long *)(*(long *)(param_1 + 0x20) + 0x148);
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x120);
  }
                    /* try { // try from 00ae7088 to 00be7097 has its CatchHandler @ 00ae71f4 */
  lVar3 = *plVar2;
  ctx = *(X509_STORE **)(lVar3 + 0x188);
  if (ctx == (X509_STORE *)0x0) {
    ctx = X509_STORE_new();
    *(X509_STORE **)(lVar3 + 0x188) = ctx;
    if (ctx == (X509_STORE *)0x0) {
      return false;
    }
  }
  iVar1 = X509_STORE_load_locations(ctx,param_2,(char *)0x0);
                    /* try { // try from 00ae70b0 to 00be70c3 has its CatchHandler @ 00ae71f0 */
  return 0 < iVar1;
}

