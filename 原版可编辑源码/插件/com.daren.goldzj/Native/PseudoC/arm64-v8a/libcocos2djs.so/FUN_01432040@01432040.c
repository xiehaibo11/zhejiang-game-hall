
void FUN_01432040(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  double dVar13;
  double dVar14;
  
  bVar4 = *(byte *)(unaff_x20 + unaff_x19 + 2);
  uVar7 = *(ulong *)(unaff_x29 + (long)*(char *)(unaff_x20 + unaff_x19 + 1) * 8);
  lVar8 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar8 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar8 = *(long *)(unaff_x26 + 0xa0);
  }
  uVar11 = *(undefined8 *)(unaff_x26 + 0xa0);
  iVar3 = (int)param_1 >> 1;
  if ((uVar7 & 1) == 0) {
    iVar12 = (int)uVar7 >> 1;
    if ((param_1 & 1) == 0) {
      if (iVar3 == 0) {
        uVar7 = *(ulong *)(unaff_x26 + 0x430);
      }
      else if (iVar12 < 0) {
        iVar6 = 0;
        if (iVar3 != 0) {
          iVar6 = iVar12 / iVar3;
        }
        iVar12 = iVar12 - iVar6 * iVar3;
        if (iVar12 == 0) {
          uVar7 = *(ulong *)(unaff_x26 + 0x448);
        }
        else if (SCARRY4(iVar12,iVar12)) {
          uVar7 = **(ulong **)(unaff_x26 + 0x1428);
          uVar1 = uVar7 + 0xc;
          if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar7 = uVar7 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar1;
          }
          else {
            uVar7 = FUN_01348560(param_1,0xc);
          }
          *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(double *)(uVar7 + 3) = (double)iVar12;
        }
        else {
          uVar7 = (ulong)(iVar12 * 2);
        }
      }
      else {
        iVar6 = 0;
        if (iVar3 != 0) {
          iVar6 = iVar12 / iVar3;
        }
        uVar7 = (ulong)(uint)((iVar12 - iVar6 * iVar3) * 2);
      }
      if ((uVar7 & 1) == 0) {
        uVar9 = 2;
      }
      else {
        uVar9 = 0xe;
      }
      goto LAB_014321bc;
    }
    if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
LAB_01432350:
      if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) != 0x43) goto LAB_01432364;
      uVar9 = 0x1e;
      goto LAB_01432370;
    }
    dVar13 = *(double *)(param_1 + 3);
    dVar14 = (double)iVar12;
  }
  else {
    lVar2 = unaff_x26 + (ulong)*(uint *)(uVar7 - 1);
    iVar12 = (int)*(undefined8 *)(unaff_x26 + 0x140);
    if ((int)lVar2 != iVar12) {
      sVar5 = *(short *)(lVar2 + 7);
      if (sVar5 == 0x41) {
        if (((param_1 & 1) != 0) &&
           (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41)) {
          *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(uVar11,3,*(undefined8 *)(unaff_x26 + 0x1bf0));
        }
      }
      else if (sVar5 == 0x43) {
        if ((param_1 & 1) == 0) {
          uVar9 = 0x1e;
        }
        else {
          if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_01432350;
          uVar9 = 0x1e;
        }
        goto LAB_01432370;
      }
LAB_01432364:
      uVar9 = 0xfe;
LAB_01432370:
      *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
      uVar7 = FUN_01392780(param_1,uVar7);
      goto LAB_014321bc;
    }
    if ((param_1 & 1) == 0) {
      dVar14 = *(double *)(uVar7 + 3);
      dVar13 = (double)iVar3;
    }
    else {
      if (*(int *)(param_1 - 1) != iVar12) goto LAB_01432350;
      dVar14 = *(double *)(uVar7 + 3);
      dVar13 = *(double *)(param_1 + 3);
    }
  }
  uVar7 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar7 + 0xc;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    uVar7 = uVar7 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    uVar7 = FUN_01348560(param_1,0xc);
  }
  *(undefined8 *)(unaff_x26 + 0x40) = 0x143217c;
  *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
  uVar11 = (**(code **)(unaff_x26 + 0x11e8))(dVar14,dVar13);
  *(undefined8 *)(unaff_x26 + 0x38) = 0;
  *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(undefined8 *)(uVar7 + 3) = uVar11;
  uVar9 = 0xe;
LAB_014321bc:
  if ((int)lVar8 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar2 = (ulong)bVar4 * 4 + 0x1f;
    uVar10 = (int)unaff_x26 + *(int *)(lVar8 + lVar2);
    uVar9 = uVar10 | uVar9;
    if (uVar10 != uVar9) {
      *(uint *)(lVar8 + lVar2) = uVar9;
      *(undefined4 *)(lVar8 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01432228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 3) * 8))
            (uVar7);
  return;
}

