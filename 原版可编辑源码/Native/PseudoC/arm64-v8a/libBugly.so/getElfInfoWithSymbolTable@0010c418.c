
long getElfInfoWithSymbolTable(char *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  size_t __n;
  long lVar3;
  long *plVar4;
  char *__s;
  
  puVar1 = DAT_0013edc0;
  if (param_1 != (char *)0x0) {
    for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)puVar1[2]) {
      __s = (char *)*puVar1;
      __n = strlen(__s);
      iVar2 = strncmp(__s,param_1,__n);
      if (iVar2 == 0) {
        if (puVar1[1] != 0) {
          return puVar1[1];
        }
        break;
      }
    }
    lVar3 = parseElf(param_1,param_2);
    if (lVar3 != 0) {
      plVar4 = malloc(0x18);
      puVar1 = DAT_0013edc0;
      plVar4[1] = lVar3;
      *plVar4 = lVar3 + 8;
      if (puVar1 != (undefined8 *)0x0) {
        plVar4[2] = puVar1[2];
        puVar1[2] = plVar4;
        return lVar3;
      }
      plVar4[2] = 0;
      DAT_0013edc0 = plVar4;
      return lVar3;
    }
  }
  return 0;
}

