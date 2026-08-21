
long FUN_01372440(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  uint *puVar13;
  long unaff_x26;
  long unaff_x27;
  
  uVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  lVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  bVar5 = *(byte *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 10);
  uVar6 = *(uint *)(uVar2 - 1);
  iVar8 = (int)lVar11;
  iVar3 = iVar8 >> 1;
  lVar9 = (long)iVar3;
  if (lVar9 == 0) {
    param_1 = *(ulong *)(unaff_x26 + 0x168);
    uVar7 = param_1;
  }
  else if (uVar6 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
    if (0x3fffffe < lVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar7 = lVar9 * 8 + 8;
    if (0x3fffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
    }
    puVar12 = *(ulong **)(unaff_x26 + 0x1428);
    puVar13 = (uint *)*puVar12;
    if (0x20000 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    if ((uint *)puVar12[1] <= puVar13 + lVar9 * 2 + 2) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    uVar7 = (long)puVar13 + 1;
    *puVar12 = (ulong)(puVar13 + lVar9 * 2 + 2);
    *puVar13 = uVar6;
    if ((((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar6 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
    {
      FUN_0133eb00(uVar7,puVar13,2,2);
    }
    puVar13[1] = iVar3 * 2;
    *(undefined8 *)(unaff_x26 + 0x40) = 0x1372660;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    param_1 = (**(code **)(unaff_x26 + 0x11d0))(puVar13 + 2,uVar2 + 7,lVar9 * 8,uVar7,uVar2,lVar11);
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
  }
  else {
    uVar7 = uVar2;
    if (uVar6 != (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
      if (0x7fffffd < lVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      lVar11 = **(long **)(unaff_x26 + 0x1428);
      uVar7 = lVar9 * 4 + 8;
      uVar10 = lVar11 + uVar7;
      if ((uVar10 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar7 < 0x20000)) {
        **(ulong **)(unaff_x26 + 0x1428) = uVar10;
        uVar7 = lVar11 + 1;
      }
      else {
        param_1 = FUN_01348500();
        uVar7 = param_1;
      }
      *(uint *)(uVar7 - 1) = uVar6;
      *(int *)(uVar7 + 3) = iVar3 * 2;
      if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x1372550;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar7 + 7,uVar2 + 7);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
      }
      else {
        lVar11 = lVar9 * 4 + 7;
        if (lVar11 != 7) {
          lVar9 = 7;
          do {
            lVar1 = lVar9 + 4;
            *(undefined4 *)(uVar7 + lVar9) = *(undefined4 *)(uVar2 + lVar9);
            lVar9 = lVar1;
          } while (lVar1 != lVar11);
        }
      }
    }
  }
  uVar6 = (uint)(bVar5 >> 3);
  if (5 < uVar6) {
    uVar6 = 2;
  }
  uVar10 = **(ulong **)(unaff_x26 + 0x1428);
  uVar2 = uVar10 + 0x10;
  uVar4 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
           ((long)(int)uVar6 + 0x56) * 4 + 7);
  if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar11 = uVar10 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar2;
  }
  else {
    lVar11 = FUN_01348560(param_1,0x10);
  }
  *(undefined4 *)(lVar11 + -1) = uVar4;
  *(int *)(lVar11 + 0xb) = iVar8;
  *(int *)(lVar11 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(lVar11 + 7) = (int)uVar7;
  return lVar11;
}

