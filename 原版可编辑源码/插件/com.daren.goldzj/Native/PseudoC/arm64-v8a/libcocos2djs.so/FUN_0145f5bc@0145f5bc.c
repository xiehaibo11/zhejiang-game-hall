
void FUN_0145f5bc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int in_w8;
  long in_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  iVar2 = ((int)unaff_x19 + -1) * 2;
  if (*(short *)(in_x9 + 7) == 0x41) {
    if (((param_1 & 1) != 0) && (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41))
    {
      *(int *)(param_4 + -0x20) = iVar2;
      uVar3 = FUN_013ea5e0(param_5,param_1);
      if ((uVar3 & 1) == 0) {
        if (in_w8 == 0) {
          lVar1 = param_8 * 4 + 0x1f;
          uVar5 = (int)unaff_x26 + *(int *)(param_6 + lVar1);
          uVar4 = uVar5 | 0xfe;
          if (uVar5 != uVar4) {
            *(uint *)(param_6 + lVar1) = uVar4;
            *(undefined4 *)(param_6 + 0x17) = 0;
          }
        }
        *(int *)(param_4 + -0x20) = iVar2;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b0));
      }
      uVar4 = 0x40;
      goto LAB_0145f4d4;
    }
LAB_0145f738:
    uVar4 = 0xfe;
  }
  else {
    if (*(short *)(in_x9 + 7) != 0x43) goto LAB_0145f738;
    if ((param_1 & 1) == 0) {
      uVar4 = 0x1e;
    }
    else if (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      uVar4 = 0x1e;
    }
    else {
      if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) != 0x43) goto LAB_0145f738;
      uVar4 = 0x1e;
    }
  }
  *(int *)(param_4 + -0x20) = ((int)unaff_x19 + -1) * 2;
  uVar3 = FUN_01392040(param_1,param_5);
LAB_0145f4d4:
  if (in_w8 == 0) {
    lVar1 = param_8 * 4 + 0x1f;
    uVar5 = (int)unaff_x26 + *(int *)(param_6 + lVar1);
    uVar4 = uVar5 | uVar4;
    if (uVar5 != uVar4) {
      *(uint *)(param_6 + lVar1) = uVar4;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0145f51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_4 + -0x18) + unaff_x19 + 9) * 8))(uVar3)
  ;
  return;
}

