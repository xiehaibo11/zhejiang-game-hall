
void FUN_01164688(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 local_80 [4];
  long alStack_70 [2];
  
  lVar4 = tpidr_el0;
  alStack_70[1] = *(long *)(lVar4 + 0x28);
  uVar14 = param_6[0xd];
  lVar15 = param_5[2];
  uVar23 = *(undefined4 *)((long)param_6 + 0x2c);
  uVar21 = *(undefined4 *)(param_6 + 6);
  uVar24 = *(undefined4 *)((long)param_6 + 0x34);
  uVar22 = *(undefined4 *)(param_6 + 7);
  uVar16 = (*(code *)param_6[8])(param_5,uVar14);
  iVar2 = *(int *)*param_5;
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      local_80[0] = uVar16;
      local_80[1] = param_2;
      local_80[2] = param_3;
      local_80[3] = param_4;
      (*(code *)param_6[2])
                (*(undefined4 *)(param_5 + 0x14),*(undefined4 *)((long)param_5 + 0xa4),
                 *(undefined4 *)(param_5 + 0x15),*(undefined4 *)((long)param_5 + 0xac),
                 *(undefined4 *)(param_5 + 0x17),uVar14);
    }
    else if (iVar2 == 0) {
      local_80[0] = uVar16;
      local_80[1] = param_2;
      local_80[2] = param_3;
      local_80[3] = param_4;
      (*(code *)*param_6)(*(undefined4 *)(param_5 + 0x12),*(undefined4 *)((long)param_5 + 0x94),
                          *(undefined4 *)(lVar15 + 0x40),*(undefined4 *)(param_5 + 0x13),uVar23,
                          uVar21,uVar24,uVar22,uVar14);
    }
    goto LAB_0116483c;
  }
  uVar3 = *(uint *)((long)param_5 + 0x8c);
  uVar6 = (ulong)uVar3;
  lVar15 = -((long)(int)uVar3 * 8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = (long)alStack_70 + lVar15;
  if (0 < (int)uVar3) {
    uVar8 = param_5[0x12];
    if (uVar3 < 4) {
LAB_011647a4:
      lVar11 = 0;
    }
    else {
      uVar1 = 4;
      if ((uVar3 & 3) != 0) {
        uVar1 = (ulong)(uVar3 & 3);
      }
      lVar11 = uVar6 - uVar1;
      if (lVar11 != 0) {
        if ((uVar7 < (uVar8 + uVar6 * 0x10) - 8) && (uVar8 < uVar7 + uVar6 * 8)) goto LAB_011647a4;
        puVar9 = (undefined8 *)(uVar8 + 0x20);
        puVar13 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar15);
        lVar12 = lVar11;
        do {
          uVar18 = *puVar9;
          uVar19 = puVar9[2];
          uVar20 = puVar9[-4];
          puVar5 = puVar9 + -2;
          puVar9 = puVar9 + 8;
          lVar12 = lVar12 + -4;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar20;
          puVar13[1] = uVar19;
          *puVar13 = uVar18;
          puVar13 = puVar13 + 4;
        } while (lVar12 != 0);
        if (uVar1 == 0) goto LAB_011647c4;
      }
    }
    lVar12 = uVar6 - lVar11;
    puVar9 = (undefined8 *)(uVar8 + lVar11 * 0x10);
    puVar13 = (undefined8 *)(uVar7 + lVar11 * 8);
    do {
      lVar12 = lVar12 + -1;
      *puVar13 = *puVar9;
      puVar9 = puVar9 + 2;
      puVar13 = puVar13 + 1;
    } while (lVar12 != 0);
  }
LAB_011647c4:
  pcVar10 = (code *)param_6[3];
  uVar17 = *(undefined4 *)(param_5 + 0x11);
  *(undefined4 *)((long)local_80 + lVar15 + 8) = param_3;
  *(undefined4 *)((long)alStack_70 + lVar15 + -4) = param_4;
  *(undefined4 *)((long)local_80 + lVar15) = uVar16;
  *(undefined4 *)((long)local_80 + lVar15 + 4) = param_2;
  (*pcVar10)(uVar17,uVar23,uVar21,uVar24,uVar22,uVar6,uVar7,uVar14);
LAB_0116483c:
  if (*(long *)(lVar4 + 0x28) != alStack_70[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

