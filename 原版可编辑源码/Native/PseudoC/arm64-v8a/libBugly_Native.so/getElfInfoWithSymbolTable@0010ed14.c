
long getElfInfoWithSymbolTable(char *param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  size_t __n;
  long lVar3;
  long *plVar4;
  char *__s;
  
  plVar1 = DAT_0013fe18;
  if (param_1 == (char *)0x0) {
    lVar3 = 0;
  }
  else {
    for (; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
      __s = (char *)*plVar1;
      __n = strlen(__s);
      iVar2 = strncmp(__s,param_1,__n);
      if (iVar2 == 0) {
        if (plVar1[1] != 0) {
          return plVar1[1];
        }
        break;
      }
    }
    lVar3 = parseElf(param_1,param_2 & 1);
    if (lVar3 != 0) {
      plVar4 = malloc(0x18);
      plVar1 = DAT_0013fe18;
      *plVar4 = lVar3 + 8;
      plVar4[1] = lVar3;
      if (plVar1 == (long *)0x0) {
        DAT_0013fe18 = plVar4;
        plVar4[2] = 0;
      }
      else {
        plVar4[2] = plVar1[2];
        plVar1[2] = (long)plVar4;
      }
    }
  }
  return lVar3;
}

