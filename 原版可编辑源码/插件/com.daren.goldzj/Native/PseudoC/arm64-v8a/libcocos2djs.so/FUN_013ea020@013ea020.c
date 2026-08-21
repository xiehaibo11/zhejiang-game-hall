
ulong FUN_013ea020(ulong param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x26;
  
  if (((((param_1 & 1) != 0) && (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41))
      && ((param_2 & 1) != 0)) &&
     (*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) == 0x41)) {
    uVar3 = *(uint *)(param_1 + 3);
    uVar1 = uVar3 & 1;
    uVar6 = param_2;
    if (uVar1 == (*(uint *)(param_2 + 3) & 1)) {
      uVar8 = (ulong)(int)(*(uint *)(param_2 + 3) >> 1 & 0x3fffffff);
      uVar9 = (ulong)(int)(uVar3 >> 1 & 0x3fffffff);
      uVar6 = param_1;
      uVar7 = uVar8;
      if (uVar9 < uVar8) {
        uVar6 = param_2;
        param_2 = param_1;
        uVar7 = uVar9;
        uVar9 = uVar8;
      }
      if (uVar9 != 0) {
        if (uVar7 == 0) {
          if (uVar1 != (*(uint *)(uVar6 + 3) & 1)) {
            uVar6 = FUN_013eb0e0();
          }
        }
        else {
          uVar9 = uVar9 + 1;
          if (0x1000000 < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
          }
          uVar7 = uVar9 * 8 + 8;
          uVar8 = **(long **)(unaff_x26 + 0x1428) + uVar7;
          if ((uVar8 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar7 < 0x20000)) {
            uVar7 = **(long **)(unaff_x26 + 0x1428) + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar8;
          }
          else {
            uVar7 = FUN_01348500(uVar6,uVar7);
          }
          *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
          uVar1 = (int)uVar9 << 1;
          *(uint *)(uVar7 + 3) = uVar1;
          uVar3 = uVar1 | uVar3 & 1;
          *(uint *)(uVar7 + 3) = uVar3;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x13ea3ec;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          (**(code **)(unaff_x26 + 0x11f0))(uVar7,uVar6,param_2,uVar3,uVar1,uVar7);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          uVar6 = uVar7;
        }
      }
    }
    else {
      *(undefined8 *)(unaff_x26 + 0x40) = 0x13ea0a0;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      iVar5 = (**(code **)(unaff_x26 + 0x11f8))(param_1,param_2,param_1,uVar3,param_2,uVar1);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      if (iVar5 < 0) {
        bVar2 = (uVar3 & 1) == 0;
        uVar1 = *(uint *)(param_2 + 3);
        uVar9 = (ulong)(int)(uVar1 >> 1 & 0x3fffffff);
        if (uVar9 != 0) {
          if ((*(uint *)(param_1 + 3) >> 1 & 0x3fffffff) == 0) {
            if ((uint)bVar2 != (uVar1 & 1)) {
              uVar6 = FUN_013eb0e0(param_2);
            }
          }
          else {
            if (0x1000000 < uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
            }
            uVar6 = uVar9 * 8 + 8;
            uVar9 = **(long **)(unaff_x26 + 0x1428) + uVar6;
            if ((uVar9 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar6 < 0x20000)) {
              uVar6 = **(long **)(unaff_x26 + 0x1428) + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar9;
            }
            else {
              uVar6 = FUN_01348500(1,uVar6);
            }
            uVar1 = uVar1 & 0x7ffffffe;
            *(int *)(uVar6 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
            *(uint *)(uVar6 + 3) = uVar1;
            uVar3 = uVar1 | bVar2;
            *(uint *)(uVar6 + 3) = uVar3;
            *(undefined8 *)(unaff_x26 + 0x40) = 0x13ea180;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            (**(code **)(unaff_x26 + 0x1200))(uVar6,param_2,param_1,uVar3,uVar1,uVar6);
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
          }
        }
      }
      else {
        uVar4 = *(uint *)(param_1 + 3);
        uVar9 = (ulong)(int)(uVar4 >> 1 & 0x3fffffff);
        uVar6 = param_1;
        if (uVar9 != 0) {
          if ((*(uint *)(param_2 + 3) >> 1 & 0x3fffffff) == 0) {
            if (uVar1 != (uVar4 & 1)) {
              uVar6 = FUN_013eb0e0(param_1);
            }
          }
          else {
            if (0x1000000 < uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
            }
            uVar6 = uVar9 * 8 + 8;
            uVar9 = **(long **)(unaff_x26 + 0x1428) + uVar6;
            if ((uVar9 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar6 < 0x20000)) {
              uVar6 = **(long **)(unaff_x26 + 0x1428) + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar9;
            }
            else {
              uVar6 = FUN_01348500(param_1);
            }
            *(int *)(uVar6 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
            *(uint *)(uVar6 + 3) = uVar4 & 0x7ffffffe;
            uVar1 = uVar4 & 0x7ffffffe | uVar3 & 1;
            *(uint *)(uVar6 + 3) = uVar1;
            *(undefined8 *)(unaff_x26 + 0x40) = 0x13ea2b0;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            (**(code **)(unaff_x26 + 0x1200))(uVar6,param_1,param_2,uVar1,uVar6,param_2);
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
          }
        }
      }
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
}

