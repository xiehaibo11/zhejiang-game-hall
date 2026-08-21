
long _TIFFFindFieldByName(long param_1,char *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x400);
  if ((lVar3 != 0) && (iVar2 = strcmp(*(char **)(lVar3 + 0x20),param_2), iVar2 == 0)) {
    if (param_3 == 0) {
      return lVar3;
    }
    if (*(int *)(lVar3 + 8) == param_3) {
      return lVar3;
    }
  }
  plVar4 = *(long **)(param_1 + 0x3f0);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  if (0 < *(long *)(param_1 + 0x3f8) * 8) {
    plVar1 = plVar4 + *(long *)(param_1 + 0x3f8);
    if (param_3 == 0) {
      do {
        lVar3 = *plVar4;
        iVar2 = strcmp(param_2,*(char **)(lVar3 + 0x20));
        if (iVar2 == 0) goto LAB_00db68b0;
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar1);
    }
    else {
      do {
        lVar3 = *plVar4;
        iVar2 = strcmp(param_2,*(char **)(lVar3 + 0x20));
        if ((iVar2 == 0) && (*(int *)(lVar3 + 8) == param_3)) goto LAB_00db68b0;
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar1);
    }
  }
  lVar5 = 0;
LAB_00db68b8:
  *(long *)(param_1 + 0x400) = lVar5;
  return lVar5;
LAB_00db68b0:
  lVar5 = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = lVar3;
  }
  goto LAB_00db68b8;
}

