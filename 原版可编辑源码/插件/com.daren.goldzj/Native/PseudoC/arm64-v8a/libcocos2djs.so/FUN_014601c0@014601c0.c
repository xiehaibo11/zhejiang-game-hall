
void FUN_014601c0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  double dVar12;
  double dVar13;
  
  uVar9 = *(uint *)(unaff_x20 + unaff_x19 + 5);
  uVar6 = *(ulong *)(unaff_x29 + (long)*(int *)(unaff_x20 + unaff_x19 + 1) * 8);
  lVar7 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar7 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar7 = *(long *)(unaff_x26 + 0xa0);
  }
  uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
  iVar3 = (int)param_1 >> 1;
  if ((uVar6 & 1) == 0) {
    iVar11 = (int)uVar6 >> 1;
    if ((param_1 & 1) == 0) {
      if (iVar3 == 0) {
        uVar6 = *(ulong *)(unaff_x26 + 0x430);
      }
      else if (iVar11 < 0) {
        iVar5 = 0;
        if (iVar3 != 0) {
          iVar5 = iVar11 / iVar3;
        }
        iVar11 = iVar11 - iVar5 * iVar3;
        if (iVar11 == 0) {
          uVar6 = *(ulong *)(unaff_x26 + 0x448);
        }
        else if (SCARRY4(iVar11,iVar11)) {
          uVar6 = **(ulong **)(unaff_x26 + 0x1428);
          uVar1 = uVar6 + 0xc;
          if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar6 = uVar6 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar1;
          }
          else {
            uVar6 = FUN_01348560(param_1,0xc);
          }
          *(int *)(uVar6 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(double *)(uVar6 + 3) = (double)iVar11;
        }
        else {
          uVar6 = (ulong)(iVar11 * 2);
        }
      }
      else {
        iVar5 = 0;
        if (iVar3 != 0) {
          iVar5 = iVar11 / iVar3;
        }
        uVar6 = (ulong)(uint)((iVar11 - iVar5 * iVar3) * 2);
      }
      if ((uVar6 & 1) == 0) {
        uVar8 = 2;
      }
      else {
        uVar8 = 0xe;
      }
      goto LAB_0146033c;
    }
    if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
LAB_014604d4:
      if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) != 0x43) goto LAB_014604e8;
      uVar8 = 0x1e;
      goto LAB_014604f4;
    }
    dVar12 = *(double *)(param_1 + 3);
    dVar13 = (double)iVar11;
  }
  else {
    lVar2 = unaff_x26 + (ulong)*(uint *)(uVar6 - 1);
    iVar11 = (int)*(undefined8 *)(unaff_x26 + 0x140);
    if ((int)lVar2 != iVar11) {
      sVar4 = *(short *)(lVar2 + 7);
      if (sVar4 == 0x41) {
        if (((param_1 & 1) != 0) &&
           (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41)) {
          *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(uVar10,3,*(undefined8 *)(unaff_x26 + 0x1bf0));
        }
      }
      else if (sVar4 == 0x43) {
        if ((param_1 & 1) == 0) {
          uVar8 = 0x1e;
        }
        else {
          if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_014604d4;
          uVar8 = 0x1e;
        }
        goto LAB_014604f4;
      }
LAB_014604e8:
      uVar8 = 0xfe;
LAB_014604f4:
      *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
      uVar6 = FUN_01392780(param_1,uVar6);
      goto LAB_0146033c;
    }
    if ((param_1 & 1) == 0) {
      dVar13 = *(double *)(uVar6 + 3);
      dVar12 = (double)iVar3;
    }
    else {
      if (*(int *)(param_1 - 1) != iVar11) goto LAB_014604d4;
      dVar13 = *(double *)(uVar6 + 3);
      dVar12 = *(double *)(param_1 + 3);
    }
  }
  uVar6 = **(ulong **)(unaff_x26 + 0x1428);
  uVar1 = uVar6 + 0xc;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    uVar6 = uVar6 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    uVar6 = FUN_01348560(param_1,0xc);
  }
  *(undefined8 *)(unaff_x26 + 0x40) = 0x14602fc;
  *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
  uVar10 = (**(code **)(unaff_x26 + 0x11e8))(dVar13,dVar12);
  *(undefined8 *)(unaff_x26 + 0x38) = 0;
  *(int *)(uVar6 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(undefined8 *)(uVar6 + 3) = uVar10;
  uVar8 = 0xe;
LAB_0146033c:
  if ((int)lVar7 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar2 = (ulong)uVar9 * 4 + 0x1f;
    uVar9 = (int)unaff_x26 + *(int *)(lVar7 + lVar2);
    uVar8 = uVar9 | uVar8;
    if (uVar9 != uVar8) {
      *(uint *)(lVar7 + lVar2) = uVar8;
      *(undefined4 *)(lVar7 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x014603a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 9) * 8))
            (uVar6);
  return;
}

