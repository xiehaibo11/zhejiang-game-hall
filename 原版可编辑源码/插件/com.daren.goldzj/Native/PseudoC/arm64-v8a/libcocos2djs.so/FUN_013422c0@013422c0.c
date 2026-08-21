
void FUN_013422c0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x26;
  long lVar9;
  undefined8 in_stack_00000000;
  long alStack_80 [6];
  long local_50 [5];
  long local_28;
  
  local_50[3] = 0;
  local_50[4] = param_2;
  local_28 = param_1 << 1;
  if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 5 < 2) {
    local_50[0] = *(long *)(unaff_x26 + 0xa8);
    local_50[2] = param_4;
  }
  else {
    local_50[2] = param_4;
    local_50[0] = FUN_01342620();
  }
  lVar2 = local_50[4];
  lVar1 = local_50[2];
  uVar8 = (ulong)((int)local_28 >> 1);
  local_50[2] = local_50[0];
  local_50[1] = local_50[0];
  uVar5 = uVar8 & 0xfffffffffffffffe;
  if ((long)local_50 - *(long *)(unaff_x26 + 0x50) <= (long)(uVar5 * 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
  }
  uVar3 = uVar8;
  plVar6 = local_50 + -uVar5;
  plVar7 = (long *)register0x00000008;
  if ((uVar8 & 1) != 0) {
    uVar3 = uVar8 - 1;
    local_50[-uVar5] = in_stack_00000000;
    plVar6 = local_50 + (1 - uVar5);
    plVar7 = (long *)&stack0x00000008;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 2) {
    lVar9 = plVar7[1];
    *plVar6 = *plVar7;
    plVar6[1] = lVar9;
    plVar6 = plVar6 + 2;
    plVar7 = plVar7 + 2;
  }
  uVar3 = (ulong)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb) + 0x15);
  if (**(char **)(unaff_x26 + 0x14a0) == '\0') {
    if (uVar3 == uVar8) {
      lVar1 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0x17);
      if (((long)*(int *)(lVar1 + 0x17) & 0x80000000U) == 0) {
        pcVar4 = (code *)(lVar1 + 0x3f);
      }
      else {
        pcVar4 = *(code **)((long)*(int *)(lVar1 + 0x27) * 8 + unaff_x26 + 0x2c78);
      }
      uVar8 = (*pcVar4)();
    }
    else {
      uVar8 = FUN_0133f320();
    }
    if (((((int)uVar8 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) || ((uVar8 & 1) == 0)) ||
        (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) < 0xa9)) &&
       ((int)local_50[-uVar5] == (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2078));
    }
    return;
  }
  lVar9 = local_50[uVar8 - uVar5];
  alStack_80[2 - uVar5] = lVar2;
  alStack_80[3 - uVar5] = lVar1;
  alStack_80[4 - uVar5] = uVar8 << 1;
  alStack_80[5 - uVar5] = uVar3 << 1;
  alStack_80[-uVar5] = lVar9;
  alStack_80[1 - uVar5] = lVar2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1d78));
}

