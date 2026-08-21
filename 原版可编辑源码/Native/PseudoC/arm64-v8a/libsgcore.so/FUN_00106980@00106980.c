
void FUN_00106980(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined4 auStack_78 [14];
  undefined8 uStack_40;
  long lStack_38;
  
  lVar7 = tpidr_el0;
  lStack_38 = *(long *)(lVar7 + 0x28);
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_00106a84;
  while( true ) {
    uStack_40 = *param_1;
    iVar10 = 0x38;
    uVar6 = (uint)uStack_40 >> 3 & 0x3f;
    if (0x37 < uVar6) {
      iVar10 = 0x78;
    }
    FUN_00106608(param_1,&DAT_00113008,iVar10 - uVar6);
    uVar6 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar6)) break;
LAB_00106a84:
    uStack_40 = *param_1;
    iVar10 = 0x38;
    uVar6 = (uint)uStack_40 >> 3 & 0x3f;
    if (0x37 < uVar6) {
      iVar10 = 0x78;
    }
    FUN_00106608(param_1,&DAT_00113008,iVar10 - uVar6);
  }
  uVar8 = 0;
  lVar9 = (long)param_1 + 0x1b;
  do {
    if (9 < DAT_00113190 && (uVar6 & 1) != 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar1 = (undefined4 *)(lVar9 + -3);
    lVar9 = lVar9 + 4;
    auStack_78[uVar8] = *puVar1;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0xe);
  while ((FUN_00106c48(param_1 + 1,auStack_78), 9 < DAT_00113190 &&
         (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0))) {
    FUN_00106c48(param_1 + 1,auStack_78);
  }
  lVar9 = 0;
  uVar8 = 0;
  while( true ) {
    do {
    } while (-1 < DAT_00113190 && (DAT_00113194 + -1) * DAT_00113194 < 0);
    if (lVar9 == 4) break;
    puVar1 = (undefined4 *)((long)param_1 + lVar9 * 4 + 8);
    puVar2 = (undefined1 *)((long)param_1 + uVar8 + 0x58);
    puVar3 = (undefined1 *)((long)param_1 + (uVar8 | 1) + 0x58);
    puVar4 = (undefined1 *)((long)param_1 + (uVar8 | 2) + 0x58);
    puVar5 = (undefined1 *)((long)param_1 + (uVar8 | 3) + 0x58);
    while( true ) {
      *puVar2 = (char)*puVar1;
      *puVar3 = (char)((uint)*puVar1 >> 8);
      *puVar4 = (char)*(undefined2 *)((long)param_1 + lVar9 * 4 + 10);
      *puVar5 = *(undefined1 *)((long)param_1 + lVar9 * 4 + 0xb);
      if ((DAT_00113190 < 10) || (((DAT_00113194 + -1) * DAT_00113194 & 1U) == 0)) break;
      *puVar2 = (char)*puVar1;
      *puVar3 = (char)((uint)*puVar1 >> 8);
      *puVar4 = (char)*(undefined2 *)((long)param_1 + lVar9 * 4 + 10);
      *puVar5 = *(undefined1 *)((long)param_1 + lVar9 * 4 + 0xb);
    }
    uVar8 = uVar8 + 4;
    lVar9 = lVar9 + 1;
  }
  if (*(long *)(lVar7 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

