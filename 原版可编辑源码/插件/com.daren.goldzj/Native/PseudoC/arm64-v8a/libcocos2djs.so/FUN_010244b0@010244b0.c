
int FUN_010244b0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_2;
  lVar4 = *param_1;
  lVar3 = *param_3;
  lVar2 = *(long *)(lVar5 + 0x68);
  if (*(long *)(lVar4 + 0x68) < lVar2) {
    if (lVar2 < *(long *)(lVar3 + 0x68)) {
      *param_1 = lVar3;
      *param_3 = lVar4;
      iVar1 = 1;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar4;
      lVar2 = *param_3;
      if (*(long *)(lVar4 + 0x68) < *(long *)(lVar2 + 0x68)) {
        iVar1 = 2;
        *param_2 = lVar2;
        *param_3 = lVar4;
      }
      else {
        iVar1 = 1;
        lVar4 = lVar2;
      }
    }
  }
  else if (lVar2 < *(long *)(lVar3 + 0x68)) {
    *param_2 = lVar3;
    *param_3 = lVar5;
    lVar4 = *param_1;
    if (*(long *)(lVar4 + 0x68) < *(long *)(*param_2 + 0x68)) {
      *param_1 = *param_2;
      *param_2 = lVar4;
      iVar1 = 2;
      lVar4 = *param_3;
    }
    else {
      iVar1 = 1;
      lVar4 = lVar5;
    }
  }
  else {
    iVar1 = 0;
    lVar4 = lVar3;
  }
  if (*(long *)(lVar4 + 0x68) < *(long *)(*param_4 + 0x68)) {
    *param_3 = *param_4;
    *param_4 = lVar4;
    lVar4 = *param_2;
    if (*(long *)(*param_3 + 0x68) <= *(long *)(lVar4 + 0x68)) {
      return iVar1 + 1;
    }
    *param_2 = *param_3;
    *param_3 = lVar4;
    lVar4 = *param_1;
    if (*(long *)(*param_2 + 0x68) <= *(long *)(lVar4 + 0x68)) {
      return iVar1 + 2;
    }
    iVar1 = iVar1 + 3;
    *param_1 = *param_2;
    *param_2 = lVar4;
  }
  return iVar1;
}

