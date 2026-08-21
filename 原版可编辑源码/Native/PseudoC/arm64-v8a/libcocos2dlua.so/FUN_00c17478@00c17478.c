
undefined8 FUN_00c17478(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  uVar2 = param_1 & 0xfffffffffffffffc;
  lVar11 = *(long *)(uVar2 + 0xb0);
  lVar7 = *(long *)(lVar11 + 0x20);
  lVar10 = *(long *)(lVar11 + 0x10);
  puVar12 = (undefined8 *)(lVar7 + -8);
  puVar8 = *(undefined4 **)(lVar7 + -8);
  *(undefined8 *)(lVar7 + -8) = 0xffff7fffffffffff;
  *(undefined4 *)(lVar10 + 0x80) = 0xffffffff;
  uVar4 = 0x10;
  while( true ) {
    uVar9 = uVar4 + 8;
    if (uVar9 == 0) {
      *(undefined4 *)(*(long *)(*(long *)(uVar2 + 0xb0) + 0x10) + 0x80) = 0xfffffffe;
      return 1;
    }
    *(int *)(uVar2 + 0xc0) = (int)uVar9;
    if (((ulong)puVar8 & 3) == 0) {
      uVar1 = puVar8[-1];
      for (; uVar4 != 0; uVar4 = uVar4 - 8) {
        *(undefined8 *)(lVar7 + -0x10) = *puVar12;
        lVar7 = lVar7 + 8;
        puVar12 = puVar12 + 1;
      }
      for (; uVar9 < (ulong)(uVar1 >> 0x18) << 3; uVar9 = uVar9 + 8) {
        *(undefined8 *)(lVar7 + -0x10) = 0xffffffffffffffff;
        lVar7 = lVar7 + 8;
      }
                    /* WARNING: Could not recover jumptable at 0x00c16f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar10 + (ulong)(byte)*puVar8 * 8 + 0x2a0))();
      return uVar3;
    }
    lVar5 = lVar7 - ((ulong)puVar8 & 0xfffffffffffffff8);
    if (((ulong)puVar8 & 3) == 1) break;
    if (((uint)puVar8 >> 2 & 1) == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + -0x20);
      uVar9 = *(ulong *)(lVar7 + -0x18);
      *(undefined8 *)((long)puVar12 + uVar4) = 0xffffffffffffffff;
      if ((code *)0x1 < UNRECOVERED_JUMPTABLE) {
                    /* WARNING: Could not recover jumptable at 0x00c17728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)();
        return uVar3;
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x1) {
        lVar10 = *(long *)(lVar10 + 0x168);
        *(long *)(lVar11 + 0x20) = lVar5;
        *(long *)(lVar11 + 0x28) = lVar7;
        *(long *)(lVar10 + 0x10) = lVar11;
        FUN_00c102ec(lVar10,puVar12);
        return *(undefined8 *)(lVar10 + 0x70);
      }
      uVar4 = uVar9 & 0xfffffffffffffff8;
      if ((uVar9 & 3) == 0) {
        uVar4 = (ulong)*(byte *)(uVar9 - 3) * 8 + 0x10;
      }
      if ((long)*(ulong *)(lVar5 + -0x10) >> 0x2f == -9) {
        *(ulong *)(lVar5 + -8) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00c17680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar10 + (ulong)(byte)**(undefined4 **)
                                                     ((*(ulong *)(lVar5 + -0x10) & 0x7fffffffffff) +
                                                     0x20) * 8 + 0x2a0))();
        return uVar3;
      }
      *(ulong *)(lVar11 + 0x20) = lVar5 - uVar4;
      *(ulong *)(uVar2 + 0xa8) = uVar9;
      FUN_00c1dec8(uVar9 & 3,lVar11,lVar5 + -0x10,lVar7 + -0x20);
      *(ulong *)(lVar5 + -8) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00c17a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar10 + (ulong)(byte)**(undefined4 **)
                                                   ((*(ulong *)(lVar5 + -0x10) & 0x7fffffffffff) +
                                                   0x20) * 8 + 0x2a0))();
      return uVar3;
    }
    puVar8 = *(undefined4 **)(lVar5 + -8);
    puVar12 = puVar12 + -1;
    *puVar12 = 0xfffeffffffffffff;
    lVar7 = lVar5;
    uVar4 = uVar9;
  }
  *(long *)(lVar11 + 0x20) = lVar5;
  lVar5 = (long)*(int *)(uVar2 + 200);
  *(undefined4 *)(lVar10 + 0x80) = 0xfffffffe;
  puVar6 = (undefined8 *)(lVar7 + -0x10);
  for (; uVar4 != 0; uVar4 = uVar4 - 8) {
    *puVar6 = *puVar12;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  do {
    if (uVar9 == lVar5 * 8) {
LAB_00c173dc:
      *(undefined8 **)(lVar11 + 0x28) = puVar6;
      *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)(uVar2 + 0xa0);
      return 0;
    }
    if (lVar5 * 8 < (long)uVar9) {
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)((long)puVar6 - (uVar9 + lVar5 * -8));
      }
      goto LAB_00c173dc;
    }
    if (puVar6 < *(undefined8 **)(lVar11 + 0x30)) {
      *puVar6 = 0xffffffffffffffff;
      uVar9 = uVar9 + 8;
      puVar6 = puVar6 + 1;
    }
    else {
      *(undefined8 **)(lVar11 + 0x28) = puVar6;
      FUN_00bfe0e0(lVar11);
      puVar6 = *(undefined8 **)(lVar11 + 0x28);
      lVar5 = (long)*(int *)(uVar2 + 200);
    }
  } while( true );
}

