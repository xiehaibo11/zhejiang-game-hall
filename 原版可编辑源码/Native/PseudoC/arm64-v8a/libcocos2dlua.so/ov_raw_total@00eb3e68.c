
long ov_raw_total(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if (((*(int *)(param_1 + 0xb0) < 2) || (*(int *)(param_1 + 8) == 0)) ||
     (iVar2 = *(int *)(param_1 + 0x28), iVar2 <= param_2)) {
    lVar4 = -0x83;
  }
  else if (param_2 < 0) {
    if (iVar2 < 1) {
      lVar4 = 0;
    }
    else {
      iVar5 = 0;
      lVar4 = 0;
      do {
        lVar3 = ov_raw_total(param_1,iVar5);
        iVar5 = iVar5 + 1;
        lVar4 = lVar3 + lVar4;
      } while (iVar2 != iVar5);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + (long)param_2 * 8);
    lVar4 = plVar1[1] - *plVar1;
  }
  return lVar4;
}

