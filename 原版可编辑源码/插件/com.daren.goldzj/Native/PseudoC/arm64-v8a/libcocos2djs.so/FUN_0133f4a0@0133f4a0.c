
void FUN_0133f4a0(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x26;
  
  lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
  uVar3 = *(uint *)(lVar1 + 0x1b);
  if ((uVar3 >> 10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1c78));
  }
  lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xf);
  if ((uVar3 & 0x60) == 0) {
    if ((int)unaff_x26 +
        *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar2 + -1) + 0x13) +
                0x3d3) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2020));
    }
    *(ulong *)(&stack0x00000000 + param_1 * 8) =
         unaff_x26 +
         (ulong)*(uint *)(unaff_x26 +
                          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar2 + -1) + 0x13) + 0x13);
  }
  if (**(char **)(unaff_x26 + 0x14a0) == '\0') {
    if (*(ushort *)(lVar1 + 0x15) != param_1) {
      FUN_0133f320();
      return;
    }
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x17);
    if (((long)*(int *)(lVar1 + 0x17) & 0x80000000U) == 0) {
      UNRECOVERED_JUMPTABLE = (code *)(lVar1 + 0x3f);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(lVar1 + 0x27) * 8 + unaff_x26 + 0x2c78);
    }
                    /* WARNING: Could not recover jumptable at 0x0133f54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1d78));
}

