
void FUN_0146adc0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  uint *puVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  
  lVar9 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar9 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar9 = *(long *)(unaff_x26 + 0xa0);
  }
  lVar10 = *(long *)(unaff_x29 + -8);
  iVar7 = (int)unaff_x19;
  if ((((int)lVar9 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
      ((*(byte *)(unaff_x20 + unaff_x19 + 9) >> 5 & 1) == 0)) ||
     (uVar2 = unaff_x26 +
              (ulong)*(uint *)(lVar9 + (ulong)*(uint *)(unaff_x20 + unaff_x19 + 5) * 4 + 0x1f),
     (uVar2 & 1) == 0)) {
    *(int *)(unaff_x29 + -0x20) = (iVar7 + -1) * 2;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2108));
  }
  lVar9 = unaff_x26 + (ulong)*(uint *)(uVar2 + 3);
  uVar3 = unaff_x26 + (ulong)*(uint *)(lVar9 + 7);
  lVar14 = unaff_x26 + (ulong)*(uint *)(lVar9 + 0xb);
  bVar6 = *(byte *)(unaff_x26 + (ulong)*(uint *)(lVar9 + -1) + 10);
  uVar11 = *(uint *)(uVar3 - 1);
  iVar8 = (int)lVar14;
  iVar4 = iVar8 >> 1;
  lVar9 = (long)iVar4;
  if (lVar9 == 0) {
    param_1 = *(ulong *)(unaff_x26 + 0x168);
    uVar12 = param_1;
  }
  else if (uVar11 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
    if (0x3fffffe < lVar9) {
      *(int *)(unaff_x29 + -0x20) = (iVar7 + -1) * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar12 = lVar9 * 8 + 8;
    if (0x3fffffff < uVar12) {
      *(int *)(unaff_x29 + -0x20) = (iVar7 + -1) * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
    }
    puVar15 = *(ulong **)(unaff_x26 + 0x1428);
    puVar16 = (uint *)*puVar15;
    if (0x20000 < uVar12) {
      *(int *)(unaff_x29 + -0x20) = (iVar7 + -1) * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    if ((uint *)puVar15[1] <= puVar16 + lVar9 * 2 + 2) {
      *(int *)(unaff_x29 + -0x20) = (iVar7 + -1) * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
    }
    uVar12 = (long)puVar16 + 1;
    *puVar15 = (ulong)(puVar16 + lVar9 * 2 + 2);
    *puVar16 = uVar11;
    uVar13 = uVar2;
    if ((((uint)*(undefined8 *)((uVar12 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar11 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)
       ) {
      FUN_0133eb00(uVar12,puVar16,2,2);
    }
    puVar16[1] = iVar4 * 2;
    *(undefined8 *)(unaff_x26 + 0x40) = 0x146b074;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    param_1 = (**(code **)(unaff_x26 + 0x11d0))
                        (puVar16 + 2,uVar3 + 7,lVar9 * 8,uVar12,lVar14,uVar13);
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
  }
  else {
    uVar12 = uVar3;
    if (uVar11 != (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
      if (0x7fffffd < lVar9) {
        *(int *)(unaff_x29 + -0x20) = (iVar7 + -1) * 2;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      lVar14 = **(long **)(unaff_x26 + 0x1428);
      uVar12 = lVar9 * 4 + 8;
      uVar13 = lVar14 + uVar12;
      if ((uVar13 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar12 < 0x20000)) {
        **(ulong **)(unaff_x26 + 0x1428) = uVar13;
        uVar12 = lVar14 + 1;
      }
      else {
        param_1 = FUN_01348500();
        uVar12 = param_1;
      }
      *(uint *)(uVar12 - 1) = uVar11;
      *(int *)(uVar12 + 3) = iVar4 * 2;
      if (((uint)*(undefined8 *)((uVar12 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x146af4c;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar12 + 7,uVar3 + 7);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
      }
      else {
        lVar9 = lVar9 * 4 + 7;
        if (lVar9 != 7) {
          lVar14 = 7;
          do {
            lVar1 = lVar14 + 4;
            *(undefined4 *)(uVar12 + lVar14) = *(undefined4 *)(uVar3 + lVar14);
            lVar14 = lVar1;
          } while (lVar1 != lVar9);
        }
      }
    }
  }
  uVar11 = (uint)(bVar6 >> 3);
  if (5 < uVar11) {
    uVar11 = 2;
  }
  uVar13 = **(ulong **)(unaff_x26 + 0x1428);
  uVar3 = uVar13 + 0x18;
  uVar5 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar10 + -1) + 0x13) +
           ((long)(int)uVar11 + 0x56) * 4 + 7);
  if (uVar3 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar9 = uVar13 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar3;
  }
  else {
    lVar9 = FUN_01348560(param_1,0x18);
  }
  *(undefined4 *)(lVar9 + -1) = uVar5;
  *(int *)(lVar9 + 0xb) = iVar8;
  *(int *)(lVar9 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(lVar9 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xcd8);
  *(int *)(lVar9 + 0x13) = (int)uVar2;
  *(int *)(uVar2 + 0x13) = *(int *)(uVar2 + 0x13) + 1;
  *(int *)(lVar9 + 7) = (int)uVar12;
                    /* WARNING: Could not recover jumptable at 0x0146b184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 10) * 8))
            (lVar9);
  return;
}

