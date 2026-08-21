
void FUN_013424a0(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x26;
  long lVar6;
  undefined8 in_stack_00000000;
  long alStack_60 [6];
  undefined8 local_30;
  long local_28;
  
  if ((long)&stack0x00000000 - *(long *)(unaff_x26 + 0x50) <= (long)(param_1 * 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
  }
  local_30 = 0;
  local_28 = param_1 << 1;
  uVar1 = param_1 + 2 & 0xfffffffffffffffe;
  alStack_60[(param_1 + 6) - uVar1] = *(long *)(unaff_x26 + 0xa8);
  if ((param_1 + 2 & 1) == 0) {
    (alStack_60 + ((param_1 + 6) - uVar1))[1] = 0;
  }
  uVar2 = param_1;
  plVar4 = alStack_60 + (6 - uVar1);
  plVar5 = (long *)register0x00000008;
  if ((param_1 & 1) != 0) {
    uVar2 = param_1 - 1;
    alStack_60[6 - uVar1] = in_stack_00000000;
    plVar4 = alStack_60 + (7 - uVar1);
    plVar5 = (long *)&stack0x00000008;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 2) {
    lVar6 = plVar5[1];
    *plVar4 = *plVar5;
    plVar4[1] = lVar6;
    plVar4 = plVar4 + 2;
    plVar5 = plVar5 + 2;
  }
  uVar2 = (ulong)*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x15);
  if (**(char **)(unaff_x26 + 0x14a0) == '\0') {
    if (uVar2 == param_1) {
      lVar6 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x17);
      if (((long)*(int *)(lVar6 + 0x17) & 0x80000000U) == 0) {
        pcVar3 = (code *)(lVar6 + 0x3f);
      }
      else {
        pcVar3 = *(code **)((long)*(int *)(lVar6 + 0x27) * 8 + unaff_x26 + 0x2c78);
      }
      (*pcVar3)();
    }
    else {
      FUN_0133f320();
    }
    return;
  }
  lVar6 = alStack_60[(param_1 + 6) - uVar1];
  alStack_60[2 - uVar1] = param_2;
  alStack_60[3 - uVar1] = param_4;
  alStack_60[4 - uVar1] = param_1 << 1;
  alStack_60[5 - uVar1] = uVar2 << 1;
  alStack_60[-uVar1] = lVar6;
  alStack_60[1 - uVar1] = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1d78));
}

