
/* WARNING: Removing unreachable block (ram,0x00c17438) */

undefined8 FUN_00c17504(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  lVar9 = *(long *)(param_1 + 0x10);
  puVar3 = &stack0xffffffffffffff31;
  *(undefined1 **)(param_1 + 0x50) = puVar3;
  if (*(char *)(param_1 + 0xb) == '\0') {
    *(long *)(lVar9 + 0x158) = param_1;
    lVar5 = *(long *)(param_1 + 0x20);
    uVar8 = (long)param_2 + (5 - lVar5);
    lVar11 = *(long *)(param_1 + 0x28) - (long)param_2;
    *(undefined4 *)(lVar9 + 0x80) = 0xffffffff;
  }
  else {
    *(long *)(lVar9 + 0x158) = param_1;
    puVar6 = *(undefined8 **)(param_1 + 0x20);
    puVar7 = (undefined4 *)puVar6[-1];
    *(undefined1 *)(param_1 + 0xb) = 0;
    uVar4 = (*(long *)(param_1 + 0x28) - (long)puVar6) + 8;
    *(undefined4 *)(lVar9 + 0x80) = 0xffffffff;
    puVar10 = param_2;
    while( true ) {
      if (((ulong)puVar7 & 3) == 0) {
        uVar1 = puVar7[-1];
        uVar8 = uVar4;
        while (uVar8 = uVar8 - 8, uVar8 != 0) {
          puVar6[-2] = *puVar10;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        for (; uVar4 < (ulong)(uVar1 >> 0x18) << 3; uVar4 = uVar4 + 8) {
          puVar6[-2] = 0xffffffffffffffff;
          puVar6 = puVar6 + 1;
        }
                    /* WARNING: Could not recover jumptable at 0x00c16f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar9 + (ulong)(byte)*puVar7 * 8 + 0x2a0))();
        return uVar2;
      }
      param_2 = (undefined8 *)((long)puVar6 - ((ulong)puVar7 & 0xfffffffffffffff8));
      if (((ulong)puVar7 & 3) == 1) {
        *(undefined8 **)(param_1 + 0x20) = param_2;
        *(undefined4 *)(lVar9 + 0x80) = 0xfffffffe;
        puVar6 = puVar6 + -2;
        uVar8 = uVar4;
        while (uVar8 = uVar8 - 8, uVar8 != 0) {
          *puVar6 = *puVar10;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        while ((uVar4 != 0 && ((long)uVar4 < 1))) {
          if (puVar6 < *(undefined8 **)(param_1 + 0x30)) {
            *puVar6 = 0xffffffffffffffff;
            uVar4 = uVar4 + 8;
            puVar6 = puVar6 + 1;
          }
          else {
            *(undefined8 **)(param_1 + 0x28) = puVar6;
            FUN_00bfe0e0(param_1);
            puVar6 = *(undefined8 **)(param_1 + 0x28);
          }
        }
        *(undefined8 **)(param_1 + 0x28) = puVar6;
        *(undefined8 *)(param_1 + 0x50) = 0;
        return 0;
      }
      if (((uint)puVar7 >> 2 & 1) == 0) break;
      puVar7 = (undefined4 *)param_2[-1];
      puVar10 = puVar10 + -1;
      *puVar10 = 0xfffeffffffffffff;
      uVar4 = uVar4 + 8;
      puVar6 = param_2;
      if (uVar4 == 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x80) = 0xfffffffe;
        return 1;
      }
    }
    UNRECOVERED_JUMPTABLE = (code *)puVar6[-4];
    uVar8 = puVar6[-3];
    *(undefined8 *)((long)puVar10 + (uVar4 - 8)) = 0xffffffffffffffff;
    if ((code *)0x1 < UNRECOVERED_JUMPTABLE) {
                    /* WARNING: Could not recover jumptable at 0x00c17728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    if (UNRECOVERED_JUMPTABLE == (code *)0x1) {
      lVar9 = *(long *)(lVar9 + 0x168);
      *(undefined8 **)(param_1 + 0x20) = param_2;
      *(undefined8 **)(param_1 + 0x28) = puVar6;
      *(long *)(lVar9 + 0x10) = param_1;
      FUN_00c102ec(lVar9,puVar10);
      return *(undefined8 *)(lVar9 + 0x70);
    }
    lVar11 = (long)puVar6 + (-0x20 - (long)param_2);
    puVar3 = (undefined1 *)(uVar8 & 3);
    uVar4 = uVar8 & 0xfffffffffffffff8;
    if (puVar3 == (undefined1 *)0x0) {
      uVar4 = (ulong)*(byte *)(uVar8 - 3) * 8 + 0x10;
    }
    lVar5 = (long)param_2 - uVar4;
  }
  if ((long)param_2[-2] >> 0x2f != -9) {
    *(long *)(param_1 + 0x20) = lVar5;
    FUN_00c1dec8(puVar3,param_1,param_2 + -2,(long)param_2 + lVar11);
    param_2[-1] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00c17a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar9 + (ulong)(byte)**(undefined4 **)
                                                ((param_2[-2] & 0x7fffffffffff) + 0x20) * 8 + 0x2a0)
            )();
    return uVar2;
  }
  param_2[-1] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00c17680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(lVar9 + (ulong)(byte)**(undefined4 **)((param_2[-2] & 0x7fffffffffff) + 0x20)
                               * 8 + 0x2a0))();
  return uVar2;
}

