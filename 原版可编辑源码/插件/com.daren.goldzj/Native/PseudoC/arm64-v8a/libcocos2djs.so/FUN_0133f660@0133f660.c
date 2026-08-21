
void FUN_0133f660(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  long unaff_x26;
  
  lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
  if ((*(uint *)(lVar2 + 0x1b) >> 10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1c78));
  }
  if ((*(uint *)(lVar2 + 0x1b) & 0x60) == 0) {
    if ((int)unaff_x26 +
        *(int *)(unaff_x26 +
                 (ulong)*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xf) + -1)
                                 + 0x13) + 0x3d3) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2020));
    }
    uVar3 = *(ulong *)(&stack0x00000000 + param_1 * 8);
    if (((uVar3 & 1) == 0) || (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar3 - 1) + 7) < 0xa9)) {
      uVar1 = FUN_013492a0(uVar3);
      param_1 = (ulong)((int)(param_1 << 1) >> 1);
      lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
      *(undefined8 *)(&stack0x00000000 + param_1 * 8) = uVar1;
    }
  }
  if (**(char **)(unaff_x26 + 0x14a0) == '\0') {
    if (*(ushort *)(lVar2 + 0x15) != param_1) {
      FUN_0133f320();
      return;
    }
    lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x17);
    if (((long)*(int *)(lVar2 + 0x17) & 0x80000000U) == 0) {
      UNRECOVERED_JUMPTABLE = (code *)(lVar2 + 0x3f);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(lVar2 + 0x27) * 8 + unaff_x26 + 0x2c78);
    }
                    /* WARNING: Could not recover jumptable at 0x0133f758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1d78));
}

