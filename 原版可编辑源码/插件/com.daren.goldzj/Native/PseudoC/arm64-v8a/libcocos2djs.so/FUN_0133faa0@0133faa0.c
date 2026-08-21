
void FUN_0133faa0(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 in_x14;
  undefined8 *puVar12;
  long unaff_x26;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  
  (&stack0x00000000)[param_1] = unaff_x26 + (ulong)*(uint *)(param_2 + 0xf);
  lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x13);
  uVar4 = *(int *)(lVar2 + 3) >> 1;
  uVar6 = (ulong)(int)uVar4;
  if (uVar6 != 0) {
    if ((long)&stack0x00000000 - *(long *)(unaff_x26 + 0x50) <= (long)(uVar6 * 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
    }
    uVar3 = param_1 + uVar6;
    uVar9 = uVar6;
    if ((uVar6 & 1) != 0) {
      in_x14 = (&stack0x00000000)[param_1];
      uVar9 = uVar6 + 1 + (uVar3 & 1) * -2;
    }
    puVar5 = (undefined8 *)register0x00000008;
    if (uVar9 != 0) {
      puVar5 = &stack0x00000000 + -uVar9;
      uVar7 = param_1;
      puVar10 = (undefined8 *)register0x00000008;
      puVar12 = &stack0x00000000 + -uVar9;
      if ((param_1 & 1) != 0) {
        uVar7 = param_1 - 1;
        (&stack0x00000000)[-uVar9] = in_stack_00000000;
        puVar10 = (undefined8 *)&stack0x00000008;
        puVar12 = (undefined8 *)(&stack0x00000008 + uVar9 * -8);
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 2) {
        uVar13 = puVar10[1];
        *puVar12 = *puVar10;
        puVar12[1] = uVar13;
        puVar10 = puVar10 + 2;
        puVar12 = puVar12 + 2;
      }
    }
    lVar1 = param_1 * 8;
    param_1 = param_1 + uVar6;
    lVar8 = uVar6 << 2;
    plVar11 = (long *)((long)puVar5 + lVar1);
    do {
      lVar8 = lVar8 + -4;
      *plVar11 = unaff_x26 + (ulong)*(uint *)(lVar2 + 7 + lVar8);
      plVar11 = plVar11 + 1;
    } while (lVar8 != 0);
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)((long)puVar5 + uVar3 * 8) = in_x14;
      if ((uVar3 & 1) == 0) {
        ((undefined8 *)((long)puVar5 + uVar3 * 8))[1] = 0;
      }
    }
  }
  FUN_0133fcc0(param_1,unaff_x26 + (ulong)*(uint *)(param_2 + 0xb));
  return;
}

