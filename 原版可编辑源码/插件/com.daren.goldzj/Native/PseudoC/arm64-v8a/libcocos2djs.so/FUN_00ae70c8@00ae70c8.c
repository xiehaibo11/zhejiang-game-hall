
bool FUN_00ae70c8(long param_1,char *param_2)

{
  int iVar1;
  X509_STORE *ctx;
  long *plVar2;
  long lVar3;
  
                    /* try { // try from 00ae70c8 to 00be70db has its CatchHandler @ 00ae7238 */
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return true;
    }
    plVar2 = (long *)(*(long *)(param_1 + 0x20) + 0x148);
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x120);
  }
  lVar3 = *plVar2;
                    /* try { // try from 00ae70f8 to 00be710b has its CatchHandler @ 00ae7210 */
  ctx = *(X509_STORE **)(lVar3 + 400);
  if (ctx == (X509_STORE *)0x0) {
    ctx = X509_STORE_new();
    *(X509_STORE **)(lVar3 + 400) = ctx;
    if (ctx == (X509_STORE *)0x0) {
      return false;
    }
  }
                    /* try { // try from 00ae7110 to 00be7127 has its CatchHandler @ 00ae7244 */
  iVar1 = X509_STORE_load_locations(ctx,(char *)0x0,param_2);
  return 0 < iVar1;
}

