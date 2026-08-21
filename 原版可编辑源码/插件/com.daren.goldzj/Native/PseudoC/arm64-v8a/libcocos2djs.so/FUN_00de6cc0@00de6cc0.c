
undefined8 FUN_00de6cc0(int *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  lVar7 = *(long *)(param_1 + 0x26);
  if (lVar7 != 0) {
    piVar10 = (int *)*param_2;
    iVar3 = param_1[2];
    iVar4 = param_1[3];
    iVar6 = param_1[4];
    iVar5 = *piVar10;
    iVar9 = iVar6;
    iVar8 = iVar3;
    if (param_1[0x16] != 0) {
      if (iVar3 == 0) {
        iVar8 = 0;
        iVar9 = iVar6 + -1;
      }
      else {
        iVar8 = iVar3 + -1;
        lVar7 = lVar7 - *param_1;
      }
      iVar6 = iVar3 + param_1[0x20] + iVar6;
      if (iVar6 == param_1[0x21]) {
        iVar9 = iVar6 - (param_1[0x20] + iVar8);
      }
    }
    lVar1 = *(long *)(piVar10 + 4) + (long)(piVar10[6] * iVar8);
    lVar2 = 0;
    if (iVar5 != 4 && iVar5 != 9) {
      lVar2 = 3;
    }
    iVar6 = (*DAT_01d544b8)(lVar7,*param_1,iVar4,iVar9,lVar1 + lVar2);
    if ((iVar5 - 7U < 4) && (iVar6 != 0)) {
      (*DAT_01d544c8)(lVar1,iVar5 == 4 || iVar5 == 9,iVar4,iVar9,piVar10[6]);
    }
  }
  return 0;
}

