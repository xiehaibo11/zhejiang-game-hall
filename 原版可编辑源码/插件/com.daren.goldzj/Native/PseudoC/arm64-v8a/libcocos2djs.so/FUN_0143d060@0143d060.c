
void FUN_0143d060(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  uint *puVar15;
  int iVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  lVar8 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar8 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar8 = *(long *)(unaff_x26 + 0xa0);
  }
  lVar9 = *(long *)(unaff_x29 + -8);
  iVar16 = (int)unaff_x19;
  if ((((int)lVar8 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
      ((*(byte *)(unaff_x20 + unaff_x19 + 3) >> 5 & 1) == 0)) ||
     (uVar2 = unaff_x26 +
              (ulong)*(uint *)(lVar8 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 2) * 4 + 0x1f),
     (uVar2 & 1) == 0)) {
    *(int *)(unaff_x29 + -0x20) = iVar16 * 2;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2108));
  }
  lVar8 = unaff_x26 + (ulong)*(uint *)(uVar2 + 3);
  uVar3 = unaff_x26 + (ulong)*(uint *)(lVar8 + 7);
  lVar13 = unaff_x26 + (ulong)*(uint *)(lVar8 + 0xb);
  bVar6 = *(byte *)(unaff_x26 + (ulong)*(uint *)(lVar8 + -1) + 10);
  uVar10 = *(uint *)(uVar3 - 1);
  iVar7 = (int)lVar13;
  iVar4 = iVar7 >> 1;
  lVar8 = (long)iVar4;
  if (lVar8 == 0) {
    param_1 = *(ulong *)(unaff_x26 + 0x168);
    uVar11 = param_1;
  }
  else if (uVar10 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
    if (0x3fffffe < lVar8) {
      *(int *)(unaff_x29 + -0x20) = iVar16 * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar11 = lVar8 * 8 + 8;
    if (0x3fffffff < uVar11) {
      *(int *)(unaff_x29 + -0x20) = iVar16 * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
    }
    puVar14 = *(ulong **)(unaff_x26 + 0x1428);
    puVar15 = (uint *)*puVar14;
    if (0x20000 < uVar11) {
      *(int *)(unaff_x29 + -0x20) = iVar16 * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    if ((uint *)puVar14[1] <= puVar15 + lVar8 * 2 + 2) {
      *(int *)(unaff_x29 + -0x20) = iVar16 * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    uVar11 = (long)puVar15 + 1;
    *puVar14 = (ulong)(puVar15 + lVar8 * 2 + 2);
    *puVar15 = uVar10;
    uVar12 = uVar2;
    if ((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar10 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)
       ) {
      FUN_0133eb00(uVar11,puVar15,2,2);
    }
    puVar15[1] = iVar4 * 2;
    *(undefined8 *)(unaff_x26 + 0x40) = 0x143d310;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    param_1 = (**(code **)(unaff_x26 + 0x11d0))
                        (puVar15 + 2,uVar3 + 7,lVar8 * 8,uVar11,lVar13,uVar12);
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
  }
  else {
    uVar11 = uVar3;
    if (uVar10 != (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
      if (0x7fffffd < lVar8) {
        *(int *)(unaff_x29 + -0x20) = iVar16 * 2;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      lVar13 = **(long **)(unaff_x26 + 0x1428);
      uVar11 = lVar8 * 4 + 8;
      uVar12 = lVar13 + uVar11;
      if ((uVar12 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar11 < 0x20000)) {
        **(ulong **)(unaff_x26 + 0x1428) = uVar12;
        uVar11 = lVar13 + 1;
      }
      else {
        param_1 = FUN_01348500();
        uVar11 = param_1;
      }
      *(uint *)(uVar11 - 1) = uVar10;
      *(int *)(uVar11 + 3) = iVar4 * 2;
      if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x143d1ec;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar11 + 7,uVar3 + 7);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
      }
      else {
        lVar8 = lVar8 * 4 + 7;
        if (lVar8 != 7) {
          lVar13 = 7;
          do {
            lVar1 = lVar13 + 4;
            *(undefined4 *)(uVar11 + lVar13) = *(undefined4 *)(uVar3 + lVar13);
            lVar13 = lVar1;
          } while (lVar1 != lVar8);
        }
      }
    }
  }
  uVar10 = (uint)(bVar6 >> 3);
  if (5 < uVar10) {
    uVar10 = 2;
  }
  uVar12 = **(ulong **)(unaff_x26 + 0x1428);
  uVar3 = uVar12 + 0x18;
  uVar5 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar9 + -1) + 0x13) +
           ((long)(int)uVar10 + 0x56) * 4 + 7);
  if (uVar3 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar8 = uVar12 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar3;
  }
  else {
    lVar8 = FUN_01348560(param_1,0x18);
  }
  *(undefined4 *)(lVar8 + -1) = uVar5;
  *(int *)(lVar8 + 0xb) = iVar7;
  *(int *)(lVar8 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(lVar8 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xcd8);
  *(int *)(lVar8 + 0x13) = (int)uVar2;
  *(int *)(uVar2 + 0x13) = *(int *)(uVar2 + 0x13) + 1;
  *(int *)(lVar8 + 7) = (int)uVar11;
                    /* WARNING: Could not recover jumptable at 0x0143d420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 4) * 8))
            (lVar8);
  return;
}

