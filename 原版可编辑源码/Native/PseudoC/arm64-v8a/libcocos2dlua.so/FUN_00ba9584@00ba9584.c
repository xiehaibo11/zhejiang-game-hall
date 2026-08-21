
char * FUN_00ba9584(DSO *param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  int iVar4;
  
                    /* catch() { ... } // from try @ 00ba931c with catch @ 00ba9584
                       catch() { ... } // from try @ 00ba9350 with catch @ 00ba9584
                       catch() { ... } // from try @ 00ba93dc with catch @ 00ba9584 */
  sVar2 = strlen(param_2);
  pcVar3 = strchr(param_2,0x2f);
  if (pcVar3 == (char *)0x0) {
    uVar1 = DSO_flags(param_1);
    iVar4 = 7;
    if ((uVar1 & 2) != 0) {
      iVar4 = 4;
    }
    iVar4 = iVar4 + (int)sVar2;
  }
  else {
    iVar4 = (int)sVar2 + 1;
  }
  __s = CRYPTO_malloc(iVar4,"crypto/dso/dso_dlfcn.c",0x101);
  if (__s == (char *)0x0) {
    ERR_put_error(0x25,0x7b,0x6d,"crypto/dso/dso_dlfcn.c",0x103);
  }
  else if (pcVar3 == (char *)0x0) {
    uVar1 = DSO_flags(param_1);
    if ((uVar1 >> 1 & 1) == 0) {
      pcVar3 = "lib%s.so";
    }
    else {
      pcVar3 = "%s.so";
    }
    sprintf(__s,pcVar3,param_2);
  }
  else {
    sVar2 = strlen(param_2);
    memcpy(__s,param_2,sVar2 + 1);
  }
  return __s;
}

