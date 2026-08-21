
char * FUN_00b9ae7c(undefined8 param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  long lVar4;
  int iVar5;
  
  if (param_2 == (char *)0x0 && param_3 == (char *)0x0) {
    ERR_put_error(0x25,0x82,0x43,"crypto/dso/dso_dlfcn.c",0xbf);
    return (char *)0x0;
  }
  if (param_3 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      pcVar1 = CRYPTO_strdup(param_3,"crypto/dso/dso_dlfcn.c",0xd1);
      if (pcVar1 != (char *)0x0) {
        return pcVar1;
      }
      ERR_put_error(0x25,0x82,0x41,"crypto/dso/dso_dlfcn.c",0xd3);
      return (char *)0x0;
    }
    if (*param_2 != '/') {
      sVar2 = strlen(param_3);
      iVar5 = (int)sVar2;
      sVar3 = strlen(param_2);
      lVar4 = sVar3 + (sVar2 & 0xffffffff);
      if ((iVar5 != 0) && (param_3[(long)((sVar2 << 0x20) + -0x100000000) >> 0x20] == '/')) {
        iVar5 = iVar5 + -1;
        lVar4 = lVar4 + -1;
      }
      pcVar1 = CRYPTO_malloc((int)((ulong)((lVar4 << 0x20) + 0x200000000) >> 0x20),
                             "crypto/dso/dso_dlfcn.c",0xe7);
      if (pcVar1 != (char *)0x0) {
        strcpy(pcVar1,param_3);
        pcVar1[iVar5] = '/';
        strcpy(pcVar1 + iVar5 + 1,param_2);
        return pcVar1;
      }
      ERR_put_error(0x25,0x82,0x41,"crypto/dso/dso_dlfcn.c",0xe9);
      return (char *)0x0;
    }
  }
  pcVar1 = CRYPTO_strdup(param_2,"crypto/dso/dso_dlfcn.c",199);
  if (pcVar1 == (char *)0x0) {
    ERR_put_error(0x25,0x82,0x41,"crypto/dso/dso_dlfcn.c",0xc9);
  }
  return pcVar1;
}

