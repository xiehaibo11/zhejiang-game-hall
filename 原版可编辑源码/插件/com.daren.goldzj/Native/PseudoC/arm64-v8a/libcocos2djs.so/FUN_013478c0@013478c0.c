
void FUN_013478c0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar4;
  int iVar5;
  long unaff_x26;
  
  uVar4 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 3);
  if ((uVar4 & 1) == 0) {
    if ((int)uVar4 == 0x84) goto LAB_01347c84;
    uVar4 = *(ulong *)(unaff_x26 + 0x5a58 + ((long)(uVar4 << 0x20) >> 0x21) * 8);
  }
  else {
    uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar4 - 1) + 7);
    if (uVar3 < 0x75) {
LAB_01347954:
      if (uVar3 < 0x70) {
LAB_0134796c:
        if (uVar3 == 0x4e) {
          uVar4 = *(ulong *)(unaff_x26 + 0x5cb8);
        }
        else if (uVar3 == 0x57) {
          uVar4 = *(ulong *)(unaff_x26 + 0x5c78);
        }
        else {
          uVar4 = unaff_x26 + (ulong)*(uint *)(uVar4 + 7);
        }
      }
      else if (uVar3 == 0x70) {
        uVar4 = unaff_x26 + (ulong)*(uint *)(uVar4 + 0xf);
      }
      else {
        if (uVar3 != 0x73) goto LAB_0134796c;
        uVar4 = unaff_x26 + (ulong)*(uint *)(uVar4 + 3);
      }
    }
    else {
      if ((0x94 < uVar3) && ((uVar3 == 0x95 || (uVar3 == 0x96)))) goto LAB_01347c84;
      if (uVar3 == 0x75) {
        uVar4 = unaff_x26 + (ulong)*(uint *)(uVar4 + 7);
      }
      else {
        if (uVar3 != 0x86) goto LAB_01347954;
        uVar4 = *(ulong *)(unaff_x26 + 0x5c18);
      }
    }
  }
  lVar1 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0x13) + 3);
  if ((int)lVar1 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(lVar1 + -1) + 7) != 0x81) {
      uVar2 = unaff_x26 + (ulong)*(uint *)(lVar1 + 7);
      iVar5 = (int)uVar2;
      if ((uVar2 & 1) == 0) {
        if (iVar5 != 2) {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1d08));
          }
          if (iVar5 == 4) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1cf8));
          }
          if (iVar5 == 6) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1cf0));
          }
        }
      }
      else if (iVar5 != 3) {
        uVar4 = uVar2 & 0xfffffffffffffffd;
        if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar4 + 0xf) + 7) & 1) == 0) {
          *(int *)(param_2 + 0x17) = (int)uVar4;
          if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar2 & 1) != 0)) &&
             (uVar4 = unaff_x26 + (uVar2 & 0xfffffffd),
             ((uint)*(undefined8 *)((uVar4 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(param_2,param_2 + 0x17,0,2);
          }
          if (((long)*(int *)(uVar4 + 0x17) & 0x80000000U) == 0) {
            UNRECOVERED_JUMPTABLE_00 = (code *)(uVar4 + 0x3f);
          }
          else {
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)((long)*(int *)(uVar4 + 0x27) * 8 + unaff_x26 + 0x2c78);
          }
                    /* WARNING: Could not recover jumptable at 0x01347a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,UNRECOVERED_JUMPTABLE_00,param_4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1d00));
      }
    }
    *(int *)(param_2 + 0x17) = (int)uVar4;
    if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar4 & 1) != 0)) &&
       (uVar4 = unaff_x26 + (uVar4 & 0xffffffff),
       ((uint)*(undefined8 *)((uVar4 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(param_2,param_2 + 0x17,0,2);
    }
    if (((long)*(int *)(uVar4 + 0x17) & 0x80000000U) == 0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)(uVar4 + 0x3f);
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = *(code **)((long)*(int *)(uVar4 + 0x27) * 8 + unaff_x26 + 0x2c78);
    }
                    /* WARNING: Could not recover jumptable at 0x01347c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,UNRECOVERED_JUMPTABLE_00,param_4);
    return;
  }
LAB_01347c84:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1ce8));
}

