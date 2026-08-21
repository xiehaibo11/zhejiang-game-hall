
void FUN_01387920(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar5;
  uint uVar6;
  long unaff_x26;
  
  if ((param_2 & 1) == 0) {
    lVar3 = *(long *)(unaff_x26 + 0x140);
  }
  else {
    lVar3 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  }
  if ((*(uint *)(lVar3 + 0xb) >> 0x18 & 1) == 0) {
    if ((int)param_4 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
      FUN_013c6000(param_2,param_3,param_1);
      return;
    }
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_4 + (long)param_5 * 2 + 0x1f);
    uVar6 = (uint)lVar1;
    if (uVar6 == ((uint)lVar3 | 2)) {
      uVar6 = *(uint *)(param_4 + (long)param_5 * 2 + 0x23);
LAB_01387974:
      uVar4 = unaff_x26 + (ulong)uVar6;
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f50));
      }
      if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar4 - 1) + 7) == 0x9a) {
        if (((long)*(int *)(uVar4 + 0x17) & 0x80000000U) == 0) {
          UNRECOVERED_JUMPTABLE_00 = (code *)(uVar4 + 0x3f);
        }
        else {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)((long)*(int *)(uVar4 + 0x27) * 8 + unaff_x26 + 0x2c78);
        }
                    /* WARNING: Could not recover jumptable at 0x01387a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      uVar2 = unaff_x26 + (ulong)*(uint *)(uVar4 + 0xb);
      if (((int)uVar2 != 3) && ((*(uint *)((uVar2 & 0xfffffffffffffffd) + 0xb) >> 0x18 & 1) == 0)) {
        lVar3 = unaff_x26 + (ulong)*(uint *)(uVar4 + 3);
        if (((long)*(int *)(lVar3 + 0x17) & 0x80000000U) == 0) {
          UNRECOVERED_JUMPTABLE_00 = (code *)(lVar3 + 0x3f);
        }
        else {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)((long)*(int *)(lVar3 + 0x27) * 8 + unaff_x26 + 0x2c78);
        }
                    /* WARNING: Could not recover jumptable at 0x013879d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else if ((uVar6 & 3) == 1) {
      if (*(int *)(lVar1 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x2b8)) {
        lVar5 = ((long)((ulong)*(uint *)(lVar1 + 3) << 0x20) >> 0x21) + -2;
        do {
          if ((int)unaff_x26 + *(int *)(lVar1 + lVar5 * 4 + 7) == ((uint)lVar3 | 2)) {
            uVar6 = *(uint *)(lVar1 + lVar5 * 4 + 0xb);
            goto LAB_01387974;
          }
          lVar5 = lVar5 + -2;
        } while (-1 < lVar5);
      }
      else if (uVar6 == (uint)*(undefined8 *)(unaff_x26 + 0xb88)) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f50));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1ee8));
}

