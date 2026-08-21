
bool FUN_00af761c(long param_1,char *param_2)

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
  lVar3 = *plVar2;
  ctx = *(X509_STORE **)(lVar3 + 400);
  if (ctx == (X509_STORE *)0x0) {
    ctx = X509_STORE_new();
    *(X509_STORE **)(lVar3 + 400) = ctx;
    if (ctx == (X509_STORE *)0x0) {
      return false;
    }
  }
  iVar1 = X509_STORE_load_locations(ctx,(char *)0x0,param_2);
  return 0 < iVar1;
}

