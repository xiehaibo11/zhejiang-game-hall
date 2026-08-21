
long searchSymbol(undefined8 param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)getElfInfoWithSymbolTable(param_1,1);
  if (((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) &&
     (lVar1 = plVar3[1], 0 < (int)lVar1)) {
    lVar4 = *plVar3;
    lVar5 = 0;
    do {
      iVar2 = strcmp(*(char **)(lVar4 + 0x10),param_2);
      if (iVar2 == 0) {
        return lVar4;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 < (int)lVar1);
  }
  return 0;
}

