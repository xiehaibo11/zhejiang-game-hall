
int FUN_01143730(undefined8 *param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  
  piVar8 = (int *)*param_1;
  iVar2 = *piVar8;
  if (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34)) {
    uVar3 = *(undefined4 *)((long)param_1 + 0x19c);
    lVar6 = 0;
    if (iVar2 != 4 && iVar2 != 9) {
      lVar6 = 3;
    }
    lVar1 = *(long *)(piVar8 + 4) + (long)(piVar8[6] * param_2);
    uVar7 = 0;
    iVar5 = 0;
    lVar6 = lVar1 + lVar6;
    do {
      if ((param_3 <= iVar5) || (0 < *(int *)(param_1 + 0x30))) break;
      FUN_01150bfc(param_1 + 0x2d);
      uVar4 = (*DAT_01795f90)(param_1[0x36],0,uVar3,1,lVar6,0);
      uVar7 = uVar4 | uVar7;
      lVar6 = lVar6 + piVar8[6];
      iVar5 = iVar5 + 1;
    } while (*(int *)(param_1 + 0x35) < *(int *)(param_1 + 0x34));
    if ((iVar2 - 7U < 4) && (uVar7 != 0)) {
      (*DAT_01795fa0)(lVar1,iVar2 == 4 || iVar2 == 9,uVar3,iVar5);
    }
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}

