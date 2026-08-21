
int FUN_0125c71c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar1 = *param_2;
  lVar7 = *param_5;
  uVar2 = *param_1;
  uVar6 = (ulong)uVar2;
  uVar3 = *param_3;
  uVar5 = *(ulong *)(lVar7 + (ulong)uVar1 * 8);
  uVar8 = *(ulong *)(lVar7 + (ulong)uVar3 * 8);
  if (uVar5 < *(ulong *)(lVar7 + uVar6 * 8)) {
    if (uVar8 < uVar5) {
      *param_1 = uVar3;
      *param_3 = uVar2;
      iVar4 = 1;
      goto LAB_0125c7e8;
    }
    *param_1 = uVar1;
    *param_2 = uVar2;
    uVar1 = *param_3;
    if (*(ulong *)(*param_5 + uVar6 * 8) <= *(ulong *)(*param_5 + (ulong)uVar1 * 8)) {
      iVar4 = 1;
      uVar6 = (ulong)uVar1;
      goto LAB_0125c7e8;
    }
    *param_2 = uVar1;
    *param_3 = uVar2;
  }
  else {
    if (uVar5 <= uVar8) {
      iVar4 = 0;
      uVar6 = (ulong)uVar3;
      goto LAB_0125c7e8;
    }
    *param_2 = uVar3;
    *param_3 = uVar1;
    uVar2 = *param_1;
    if (*(ulong *)(*param_5 + (ulong)uVar2 * 8) <= *(ulong *)(*param_5 + (ulong)*param_2 * 8)) {
      iVar4 = 1;
      uVar6 = (ulong)uVar1;
      goto LAB_0125c7e8;
    }
    *param_1 = *param_2;
    *param_2 = uVar2;
    uVar6 = (ulong)*param_3;
  }
  iVar4 = 2;
LAB_0125c7e8:
  if (*(ulong *)(*param_5 + (ulong)*param_4 * 8) < *(ulong *)(*param_5 + uVar6 * 8)) {
    *param_3 = *param_4;
    *param_4 = (uint)uVar6;
    uVar1 = *param_2;
    if (*(ulong *)(*param_5 + (ulong)uVar1 * 8) <= *(ulong *)(*param_5 + (ulong)*param_3 * 8)) {
      return iVar4 + 1;
    }
    *param_2 = *param_3;
    *param_3 = uVar1;
    uVar1 = *param_1;
    if (*(ulong *)(*param_5 + (ulong)uVar1 * 8) <= *(ulong *)(*param_5 + (ulong)*param_2 * 8)) {
      return iVar4 + 2;
    }
    iVar4 = iVar4 + 3;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  return iVar4;
}

