
void FUN_0145f09c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int in_w8;
  int in_w9;
  long in_x10;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  uVar2 = *(ushort *)(in_x10 + 7);
  iVar3 = ((int)unaff_x19 + -1) * 2;
  if (uVar2 == 0x43) {
    if (((in_w9 == 0) && (*(int *)(param_1 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x140))) &&
       (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7) != 0x43)) goto LAB_0145f264;
    uVar5 = 0x1e;
  }
  else {
    if (in_w9 == 0) {
      if (uVar2 < 0x40) {
        if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7) < 0x40) {
          *(int *)(param_4 + -0x20) = iVar3;
          uVar4 = FUN_013bf600(param_5,param_1);
          uVar5 = 0x20;
          goto LAB_0145f020;
        }
      }
      else if ((uVar2 == 0x41) &&
              (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7) == 0x41)) {
        *(int *)(param_4 + -0x20) = iVar3;
        uVar4 = FUN_013e9ae0(param_5,param_1);
        if ((uVar4 & 1) == 0) {
          if (in_w8 == 0) {
            lVar1 = param_8 * 4 + 0x1f;
            uVar6 = (int)unaff_x26 + *(int *)(param_6 + lVar1);
            uVar5 = uVar6 | 0xfe;
            if (uVar6 != uVar5) {
              *(uint *)(param_6 + lVar1) = uVar5;
              *(undefined4 *)(param_6 + 0x17) = 0;
            }
          }
          *(int *)(param_4 + -0x20) = iVar3;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
        }
        uVar5 = 0x40;
        goto LAB_0145f020;
      }
    }
LAB_0145f264:
    uVar5 = 0xfe;
  }
  *(int *)(param_4 + -0x20) = ((int)unaff_x19 + -1) * 2;
  uVar4 = thunk_FUN_01391c34(param_1,param_5);
LAB_0145f020:
  if (in_w8 == 0) {
    lVar1 = param_8 * 4 + 0x1f;
    uVar6 = (int)unaff_x26 + *(int *)(param_6 + lVar1);
    uVar5 = uVar6 | uVar5;
    if (uVar6 != uVar5) {
      *(uint *)(param_6 + lVar1) = uVar5;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0145f068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_4 + -0x18) + unaff_x19 + 9) * 8))(uVar4)
  ;
  return;
}

