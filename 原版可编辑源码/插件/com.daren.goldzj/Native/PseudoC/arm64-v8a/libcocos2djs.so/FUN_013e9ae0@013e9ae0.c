
long FUN_013e9ae0(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x26;
  
  uVar3 = *(uint *)(param_1 + 3);
  uVar1 = uVar3 & 1;
  lVar6 = param_1;
  if (uVar1 == (*(uint *)(param_2 + 3) & 1)) {
    uVar8 = (ulong)(int)(*(uint *)(param_2 + 3) >> 1 & 0x3fffffff);
    uVar10 = (ulong)(int)(uVar3 >> 1 & 0x3fffffff);
    uVar9 = uVar8;
    if (uVar10 < uVar8) {
      lVar6 = param_2;
      param_2 = param_1;
      uVar9 = uVar10;
      uVar10 = uVar8;
    }
    if (uVar10 != 0) {
      if (uVar9 == 0) {
        if (uVar1 != (*(uint *)(lVar6 + 3) & 1)) {
          lVar6 = FUN_013eb0e0();
        }
      }
      else {
        uVar10 = uVar10 + 1;
        if (uVar10 < 0x1000001) {
          uVar9 = uVar10 * 8 + 8;
          uVar8 = **(long **)(unaff_x26 + 0x1428) + uVar9;
          if ((uVar8 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar9 < 0x20000)) {
            lVar7 = **(long **)(unaff_x26 + 0x1428) + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar8;
          }
          else {
            lVar7 = FUN_01348500(lVar6,uVar9);
          }
          *(int *)(lVar7 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
          uVar1 = (int)uVar10 << 1;
          *(uint *)(lVar7 + 3) = uVar1;
          uVar3 = uVar1 | uVar3 & 1;
          *(uint *)(lVar7 + 3) = uVar3;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x13e9e7c;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          (**(code **)(unaff_x26 + 0x11f0))(lVar7,lVar6,param_2,uVar3,uVar1,lVar7);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          lVar6 = lVar7;
        }
        else {
          lVar6 = 0;
        }
      }
    }
  }
  else {
    *(undefined8 *)(unaff_x26 + 0x40) = 0x13e9b30;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    iVar5 = (**(code **)(unaff_x26 + 0x11f8))(param_1,param_2,param_1,uVar3,param_2,uVar1);
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
    if (iVar5 < 0) {
      bVar2 = (uVar3 & 1) == 0;
      uVar1 = *(uint *)(param_2 + 3);
      uVar10 = (ulong)(int)(uVar1 >> 1 & 0x3fffffff);
      lVar6 = param_2;
      if (uVar10 != 0) {
        if ((*(uint *)(param_1 + 3) >> 1 & 0x3fffffff) == 0) {
          if ((uint)bVar2 != (uVar1 & 1)) {
            lVar6 = FUN_013eb0e0(param_2);
          }
        }
        else {
          if (0x1000000 < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
          }
          uVar10 = uVar10 * 8 + 8;
          uVar9 = **(long **)(unaff_x26 + 0x1428) + uVar10;
          if ((uVar9 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar10 < 0x20000)) {
            lVar6 = **(long **)(unaff_x26 + 0x1428) + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar9;
          }
          else {
            lVar6 = FUN_01348500(1,uVar10);
          }
          uVar1 = uVar1 & 0x7ffffffe;
          *(int *)(lVar6 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
          *(uint *)(lVar6 + 3) = uVar1;
          uVar3 = uVar1 | bVar2;
          *(uint *)(lVar6 + 3) = uVar3;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x13e9c10;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          (**(code **)(unaff_x26 + 0x1200))(lVar6,param_2,param_1,uVar3,uVar1,lVar6);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
        }
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 3);
      uVar10 = (ulong)(int)(uVar4 >> 1 & 0x3fffffff);
      if (uVar10 != 0) {
        if ((*(uint *)(param_2 + 3) >> 1 & 0x3fffffff) == 0) {
          if (uVar1 != (uVar4 & 1)) {
            lVar6 = FUN_013eb0e0(param_1);
          }
        }
        else {
          if (0x1000000 < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
          }
          uVar10 = uVar10 * 8 + 8;
          uVar9 = **(long **)(unaff_x26 + 0x1428) + uVar10;
          if ((uVar9 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar10 < 0x20000)) {
            lVar6 = **(long **)(unaff_x26 + 0x1428) + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar9;
          }
          else {
            lVar6 = FUN_01348500(param_1);
          }
          *(int *)(lVar6 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
          *(uint *)(lVar6 + 3) = uVar4 & 0x7ffffffe;
          uVar1 = uVar4 & 0x7ffffffe | uVar3 & 1;
          *(uint *)(lVar6 + 3) = uVar1;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x13e9d40;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          (**(code **)(unaff_x26 + 0x1200))(lVar6,param_1,param_2,uVar1,lVar6,param_2);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
        }
      }
    }
  }
  return lVar6;
}

