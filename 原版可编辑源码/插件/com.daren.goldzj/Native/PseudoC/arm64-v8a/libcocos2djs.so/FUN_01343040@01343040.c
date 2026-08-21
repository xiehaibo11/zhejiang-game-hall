
long FUN_01343040(ulong param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  uint *puVar13;
  long unaff_x26;
  long unaff_x27;
  
  uVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + (long)(param_2 >> 1) * 4 + 0x1f);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2108));
  }
  lVar9 = unaff_x26 + (ulong)*(uint *)(uVar2 + 3);
  uVar2 = unaff_x26 + (ulong)*(uint *)(lVar9 + 7);
  iVar6 = (int)unaff_x26 + *(int *)(lVar9 + 0xb);
  bVar5 = *(byte *)(unaff_x26 + (ulong)*(uint *)(lVar9 + -1) + 10);
  uVar7 = *(uint *)(uVar2 - 1);
  iVar3 = iVar6 >> 1;
  lVar9 = (long)iVar3;
  if (lVar9 == 0) {
    param_1 = *(ulong *)(unaff_x26 + 0x168);
    uVar8 = param_1;
  }
  else if (uVar7 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
    if (0x3fffffe < lVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar8 = lVar9 * 8 + 8;
    if (0x3fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
    }
    puVar12 = *(ulong **)(unaff_x26 + 0x1428);
    puVar13 = (uint *)*puVar12;
    if (0x20000 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    if ((uint *)puVar12[1] <= puVar13 + lVar9 * 2 + 2) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    uVar8 = (long)puVar13 + 1;
    *puVar12 = (ulong)(puVar13 + lVar9 * 2 + 2);
    *puVar13 = uVar7;
    uVar10 = uVar2;
    if ((((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
    {
      FUN_0133eb00(uVar8,puVar13,2,2);
    }
    puVar13[1] = iVar3 * 2;
    *(undefined8 *)(unaff_x26 + 0x40) = 0x1343284;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    param_1 = (**(code **)(unaff_x26 + 0x11d0))(puVar13 + 2,uVar2 + 7,lVar9 * 8,uVar8,bVar5,uVar10);
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
  }
  else {
    uVar8 = uVar2;
    if (uVar7 != (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
      if (0x7fffffd < lVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      lVar11 = **(long **)(unaff_x26 + 0x1428);
      uVar8 = lVar9 * 4 + 8;
      uVar10 = lVar11 + uVar8;
      if ((uVar10 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar8 < 0x20000)) {
        **(ulong **)(unaff_x26 + 0x1428) = uVar10;
        uVar8 = lVar11 + 1;
      }
      else {
        param_1 = FUN_01348500();
        uVar8 = param_1;
      }
      *(uint *)(uVar8 - 1) = uVar7;
      *(int *)(uVar8 + 3) = iVar3 * 2;
      if (((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x1343174;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar8 + 7,uVar2 + 7);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
      }
      else {
        lVar9 = lVar9 * 4 + 7;
        if (lVar9 != 7) {
          lVar11 = 7;
          do {
            lVar1 = lVar11 + 4;
            *(undefined4 *)(uVar8 + lVar11) = *(undefined4 *)(uVar2 + lVar11);
            lVar11 = lVar1;
          } while (lVar1 != lVar9);
        }
      }
    }
  }
  uVar7 = (uint)(bVar5 >> 3);
  if (5 < uVar7) {
    uVar7 = 2;
  }
  uVar10 = **(ulong **)(unaff_x26 + 0x1428);
  uVar2 = uVar10 + 0x10;
  uVar4 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
           ((long)(int)uVar7 + 0x56) * 4 + 7);
  if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar9 = uVar10 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar2;
  }
  else {
    lVar9 = FUN_01348560(param_1,0x10);
  }
  *(undefined4 *)(lVar9 + -1) = uVar4;
  *(int *)(lVar9 + 0xb) = iVar6;
  *(int *)(lVar9 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(lVar9 + 7) = (int)uVar8;
  return lVar9;
}

