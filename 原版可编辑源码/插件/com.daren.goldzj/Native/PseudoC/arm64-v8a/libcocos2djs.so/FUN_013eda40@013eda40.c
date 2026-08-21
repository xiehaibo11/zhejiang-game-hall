
void FUN_013eda40(ulong param_1)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long unaff_x26;
  double dVar9;
  
  if (((param_1 & 1) != 0) && (0xa8 < *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7))) {
    param_1 = FUN_01349780();
  }
  for (; iVar5 = (int)*(undefined8 *)(unaff_x26 + 0x140), (param_1 & 1) != 0;
      param_1 = FUN_013499c0(param_1)) {
    lVar6 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    iVar8 = (int)lVar6;
    if (iVar8 == iVar5) {
      bVar4 = false;
      goto LAB_013edb68;
    }
    uVar2 = *(ushort *)(lVar6 + 7);
    if (uVar2 < 0x40) goto LAB_013edbdc;
    if (uVar2 == 0x43) {
      param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
      goto LAB_013edbdc;
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
LAB_013edb68:
  lVar6 = *(long *)(unaff_x26 + 0xf38);
  uVar3 = ((uint)(*(int *)(lVar6 + 3) >> 1) >> 1) - 1;
  if (!bVar4) {
    dVar9 = *(double *)(param_1 + 3);
    iVar8 = (int)dVar9;
    if ((dVar9 != (double)iVar8) || (((iVar8 == 0 && ((long)dVar9 < 0)) || (SCARRY4(iVar8,iVar8)))))
    {
      lVar7 = (ulong)(((*(uint *)(param_1 + 3) ^ *(uint *)(param_1 + 7)) & uVar3) * 2) * 4;
      uVar1 = unaff_x26 + (ulong)*(uint *)(lVar6 + lVar7 + 7);
      if (((((uVar1 & 1) == 0) || (*(int *)(uVar1 - 1) != iVar5)) ||
          (*(uint *)(param_1 + 3) != *(uint *)(uVar1 + 3))) ||
         (*(uint *)(param_1 + 7) != *(uint *)(uVar1 + 7))) goto LAB_013edc50;
      param_1 = unaff_x26 + (ulong)*(uint *)(lVar6 + lVar7 + 0xb);
      goto LAB_013edbdc;
    }
    param_1 = (ulong)(iVar8 * 2);
  }
  lVar7 = (ulong)((uVar3 & (int)param_1 >> 1) * 2) * 4;
  if (*(int *)(lVar6 + lVar7 + 7) != (int)param_1) {
LAB_013edc50:
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2178));
  }
  param_1 = unaff_x26 + (ulong)*(uint *)(lVar6 + lVar7 + 0xb);
LAB_013edbdc:
  FUN_013bf600(param_1);
  return;
}

