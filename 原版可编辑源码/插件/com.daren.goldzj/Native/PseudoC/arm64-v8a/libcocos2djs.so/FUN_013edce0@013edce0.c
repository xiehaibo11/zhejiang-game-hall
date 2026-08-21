
void FUN_013edce0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long unaff_x26;
  double dVar10;
  
  if (((param_2 & 1) != 0) && (0xa8 < *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7))) {
    param_2 = FUN_01349780(param_2);
  }
  for (; iVar6 = (int)*(undefined8 *)(unaff_x26 + 0x140), (param_2 & 1) != 0;
      param_2 = FUN_013499c0(param_2)) {
    lVar9 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    iVar8 = (int)lVar9;
    if (iVar8 == iVar6) {
      bVar4 = false;
      goto LAB_013ede1c;
    }
    uVar2 = *(ushort *)(lVar9 + 7);
    if (uVar2 < 0x40) goto LAB_013ede90;
    if (uVar2 == 0x43) {
      param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
      goto LAB_013ede90;
    }
    if (uVar2 < 0xa9) {
      if (iVar8 != (int)*(undefined8 *)(unaff_x26 + 0xf8)) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2368));
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
  }
  bVar4 = true;
LAB_013ede1c:
  lVar9 = *(long *)(unaff_x26 + 0xf38);
  uVar3 = ((uint)(*(int *)(lVar9 + 3) >> 1) >> 1) - 1;
  if (bVar4) {
    iVar8 = (int)param_2;
  }
  else {
    dVar10 = *(double *)(param_2 + 3);
    iVar5 = (int)dVar10;
    if ((dVar10 != (double)iVar5) ||
       (((iVar5 == 0 && ((long)dVar10 < 0)) || (iVar8 = iVar5 * 2, SCARRY4(iVar5,iVar5))))) {
      lVar7 = (ulong)(((*(uint *)(param_2 + 3) ^ *(uint *)(param_2 + 7)) & uVar3) * 2) * 4;
      uVar1 = unaff_x26 + (ulong)*(uint *)(lVar9 + lVar7 + 7);
      if (((((uVar1 & 1) == 0) || (*(int *)(uVar1 - 1) != iVar6)) ||
          (*(uint *)(param_2 + 3) != *(uint *)(uVar1 + 3))) ||
         (*(uint *)(param_2 + 7) != *(uint *)(uVar1 + 7))) goto LAB_013edf04;
      param_2 = unaff_x26 + (ulong)*(uint *)(lVar9 + lVar7 + 0xb);
      goto LAB_013ede90;
    }
  }
  lVar7 = (ulong)((uVar3 & iVar8 >> 1) * 2) * 4;
  if (*(int *)(lVar9 + lVar7 + 7) != iVar8) {
LAB_013edf04:
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2178));
  }
  param_2 = unaff_x26 + (ulong)*(uint *)(lVar9 + lVar7 + 0xb);
LAB_013ede90:
  FUN_013bf600(param_1,param_2);
  return;
}

