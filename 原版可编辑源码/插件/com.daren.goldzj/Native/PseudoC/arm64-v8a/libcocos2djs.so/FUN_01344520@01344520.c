
void FUN_01344520(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  long lVar5;
  long unaff_x26;
  
  *(int *)(param_2 + 0x17) = (int)param_1;
  if ((((param_1 & 1) != 0) &&
      (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) &&
     (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)) {
    FUN_0133eb00(param_2,param_2 + 0x17,0,0);
  }
  lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
  if (**(char **)(unaff_x26 + 0x14a0) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1d78),param_3,param_4);
  }
  if (**(ulong **)(unaff_x26 + 0x14b8) == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1d88),param_3,param_4);
  }
  if (*(undefined1 **)(unaff_x26 + 0x50) <= &stack0x00000000) {
    uVar4 = (ulong)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar1 + 0xb) + 0x15);
    lVar2 = (uVar4 + 2 & 0xfffffffffffffffe) * -8;
    *(ulong *)(&stack0x00000000 + uVar4 * 8 + lVar2) = unaff_x26 + (ulong)*(uint *)(param_2 + 0x13);
    uVar3 = *(uint *)(param_2 + 0x23);
    if (uVar4 != 0) {
      lVar5 = 0;
      do {
        uVar4 = uVar4 - 1;
        *(ulong *)(&stack0x00000000 + uVar4 * 8 + lVar2) =
             unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)uVar3 + lVar5 * 4 + 7);
        lVar5 = lVar5 + 1;
      } while (uVar4 != 0);
    }
    lVar2 = unaff_x26 + (ulong)*(uint *)(lVar1 + 0x17);
    if (((long)*(int *)(lVar2 + 0x17) & 0x80000000U) == 0) {
      UNRECOVERED_JUMPTABLE = (code *)(lVar2 + 0x3f);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(lVar2 + 0x27) * 8 + unaff_x26 + 0x2c78);
    }
                    /* WARNING: Could not recover jumptable at 0x01344644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined2 *)(unaff_x26 + (ulong)*(uint *)(lVar1 + 0xb) + 0x15),lVar1,
               UNRECOVERED_JUMPTABLE,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8),param_3,param_4);
}

