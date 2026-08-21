
undefined8 FUN_01143a00(int *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)(param_1 + 0x26);
  if ((lVar8 != 0) && (iVar9 = param_1[4], 0 < iVar9)) {
    lVar10 = *param_2;
    lVar4 = param_2[4];
    iVar7 = 0;
    lVar6 = *(long *)(lVar10 + 0x10);
    iVar2 = *(int *)(lVar10 + 0x30);
    lVar11 = *(long *)(lVar10 + 0x28);
    iVar3 = *(int *)(lVar10 + 0x3c);
    iVar1 = *param_1;
    do {
      iVar5 = FUN_011402a4(param_2 + 0x2d,iVar9,lVar8,iVar1);
      iVar9 = iVar9 - iVar5;
      lVar8 = lVar8 + iVar5 * iVar1;
      iVar5 = FUN_011403a0(param_2 + 0x2d);
      iVar7 = iVar5 + iVar7;
    } while (0 < iVar9);
    if (0 < iVar7) {
      FUN_01148b1c(lVar6 + (long)iVar2 * (long)(int)lVar4,*(undefined4 *)(lVar10 + 0x30),
                   lVar11 + (long)iVar3 * (long)(int)lVar4,*(undefined4 *)(lVar10 + 0x3c),
                   *(undefined4 *)((long)param_2 + 0x19c),iVar7,1);
    }
  }
  return 0;
}

