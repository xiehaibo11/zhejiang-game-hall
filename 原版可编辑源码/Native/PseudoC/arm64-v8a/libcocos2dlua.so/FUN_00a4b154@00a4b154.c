
void FUN_00a4b154(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 != (long *)0x0) && (iVar2 = (int)param_1[4], 0 < iVar2)) {
    lVar4 = 0;
    do {
      plVar3 = *(long **)(*param_1 + lVar4 * 8);
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        do {
          lVar5 = *(long *)(lVar1 + 0x10);
          FUN_00a4aa5c(plVar3,lVar1,param_1);
          param_1[5] = param_1[5] + -1;
          lVar1 = lVar5;
        } while (lVar5 != 0);
        iVar2 = (int)param_1[4];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}

