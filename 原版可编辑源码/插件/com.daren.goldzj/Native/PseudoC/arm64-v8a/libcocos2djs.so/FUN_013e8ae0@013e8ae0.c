
ulong FUN_013e8ae0(ulong param_1)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long unaff_x26;
  double dVar9;
  
  for (; iVar6 = (int)*(undefined8 *)(unaff_x26 + 0x140), (param_1 & 1) != 0;
      param_1 = FUN_013499c0(param_1)) {
    lVar5 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    iVar8 = (int)lVar5;
    if (iVar8 == iVar6) {
      bVar4 = false;
      goto LAB_013e8bdc;
    }
    uVar2 = *(ushort *)(lVar5 + 7);
    if (uVar2 < 0x40) {
      return param_1;
    }
    if (uVar2 == 0x43) {
      return unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    }
    if (uVar2 < 0xa9) {
      if (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xf8)) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2368));
    }
  }
  bVar4 = true;
LAB_013e8bdc:
  lVar5 = *(long *)(unaff_x26 + 0xf38);
  uVar3 = ((uint)(*(int *)(lVar5 + 3) >> 1) >> 1) - 1;
  if (!bVar4) {
    dVar9 = *(double *)(param_1 + 3);
    iVar8 = (int)dVar9;
    if ((dVar9 != (double)iVar8) || (((iVar8 == 0 && ((long)dVar9 < 0)) || (SCARRY4(iVar8,iVar8)))))
    {
      lVar7 = (ulong)(((*(uint *)(param_1 + 3) ^ *(uint *)(param_1 + 7)) & uVar3) * 2) * 4;
      uVar1 = unaff_x26 + (ulong)*(uint *)(lVar5 + lVar7 + 7);
      if (((((uVar1 & 1) != 0) && (*(int *)(uVar1 - 1) == iVar6)) &&
          (*(uint *)(param_1 + 3) == *(uint *)(uVar1 + 3))) &&
         (*(uint *)(param_1 + 7) == *(uint *)(uVar1 + 7))) {
        return unaff_x26 + (ulong)*(uint *)(lVar5 + lVar7 + 0xb);
      }
      goto LAB_013e8cb4;
    }
    param_1 = (ulong)(iVar8 * 2);
  }
  lVar7 = (ulong)((uVar3 & (int)param_1 >> 1) * 2) * 4;
  if (*(int *)(lVar5 + lVar7 + 7) == (int)param_1) {
    return unaff_x26 + (ulong)*(uint *)(lVar5 + lVar7 + 0xb);
  }
LAB_013e8cb4:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2178));
}

