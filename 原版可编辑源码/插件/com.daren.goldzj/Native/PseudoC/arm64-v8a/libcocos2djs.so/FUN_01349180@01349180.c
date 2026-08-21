
void FUN_01349180(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long unaff_x26;
  
  lVar2 = param_2[-2];
  uVar1 = (ulong)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb) + 0x15);
  uVar3 = (ulong)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar2 + 0xb) + 0x15);
  if (**(char **)(unaff_x26 + 0x14a0) != '\0') {
    uVar4 = param_2[uVar1 + 2];
    param_2[-2] = 0x22;
    param_2[-1] = 0x22;
    *param_2 = *param_2;
    param_2[1] = param_2[1];
    param_2[-6] = lVar2;
    param_2[-5] = uVar1;
    param_2[-4] = uVar1 << 1;
    param_2[-3] = uVar3 << 1;
    param_2[-8] = uVar4;
    param_2[-7] = lVar2;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1d78));
  }
  if (uVar3 != uVar1) {
    FUN_0133f320();
    return;
  }
  lVar2 = unaff_x26 + (ulong)*(uint *)(lVar2 + 0x17);
  if (((long)*(int *)(lVar2 + 0x17) & 0x80000000U) == 0) {
    UNRECOVERED_JUMPTABLE = (code *)(lVar2 + 0x3f);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(lVar2 + 0x27) * 8 + unaff_x26 + 0x2c78);
  }
                    /* WARNING: Could not recover jumptable at 0x013491f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

