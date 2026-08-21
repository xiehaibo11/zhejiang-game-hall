
void FUN_013400e0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x26;
  undefined8 uStack_8;
  
  if ((long)&stack0x00000000 - *(long *)(unaff_x26 + 0x50) <= (long)(param_5 * 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
  }
  if (param_5 != 0) {
    uVar4 = param_1 + 1;
    uVar1 = param_1 + param_5;
    if ((param_5 & 1) == 0) {
      puVar3 = &stack0x00000000 + param_5 * -8;
    }
    else {
      lVar11 = (param_5 + 1 + (uVar1 & 1) * -2) * -8;
      puVar3 = &stack0x00000000 + lVar11;
      if ((uVar4 & 1) == 0) {
        puVar7 = (undefined8 *)(&stack0x00000000 + param_5 * 8 + lVar11);
        puVar8 = (undefined8 *)(&stack0x00000000 + (param_5 + 1) * 8 + lVar11);
        if ((uVar4 & 1) != 0) {
          *puVar7 = *puVar8;
          uVar4 = param_1;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 2) {
          uVar9 = puVar8[1];
          *puVar7 = *puVar8;
          puVar7[1] = uVar9;
          puVar8 = puVar8 + 2;
          puVar7 = puVar7 + 2;
        }
        *(undefined8 *)(&stack0x00000000 + (uVar1 + 1) * 8 + lVar11) = 0;
        puVar3 = &stack0x00000000 + lVar11;
      }
      else {
        puVar7 = (undefined8 *)(&stack0x00000000 + (uVar1 - 1) * 8 + lVar11);
        puVar8 = (undefined8 *)(&stack0x00000000 + uVar1 * 8 + lVar11);
        puVar6 = puVar7;
        puVar10 = puVar8;
        if ((uVar4 & 1) != 0) {
          puVar6 = puVar7 + -1;
          puVar10 = puVar8 + -1;
          *puVar8 = *puVar7;
          uVar4 = param_1;
        }
        puVar7 = puVar6 + -1;
        puVar8 = puVar10 + -1;
        for (; uVar4 != 0; uVar4 = uVar4 - 2) {
          uVar9 = puVar7[1];
          *puVar8 = *puVar7;
          puVar8[1] = uVar9;
          puVar7 = puVar7 + -2;
          puVar8 = puVar8 + -2;
        }
      }
    }
    uVar9 = *(undefined8 *)(unaff_x26 + 0xa8);
    lVar11 = *(long *)(unaff_x26 + 0xa0);
    puVar5 = (uint *)(param_3 + 7);
    do {
      param_5 = param_5 - 1;
      lVar2 = unaff_x26 + (ulong)*puVar5;
      if ((int)(unaff_x26 + (ulong)*puVar5) == (int)uVar9) {
        lVar2 = lVar11;
      }
      *(long *)(puVar3 + param_5 * 8) = lVar2;
      puVar5 = puVar5 + 1;
    } while (param_5 != 0);
  }
  FUN_0133fcc0();
  return;
}

