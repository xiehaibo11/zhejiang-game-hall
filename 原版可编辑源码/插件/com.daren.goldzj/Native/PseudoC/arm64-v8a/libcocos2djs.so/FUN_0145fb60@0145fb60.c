
void FUN_0145fb60(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long in_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  if (*(short *)(in_x9 + 7) == 0x41) {
    if (((param_1 & 1) != 0) && (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41))
    {
      *(int *)(param_4 + -0x20) = ((int)unaff_x19 + -1) * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf0));
    }
  }
  else if (*(short *)(in_x9 + 7) == 0x43) {
    if ((param_1 & 1) == 0) {
      uVar4 = 0x1e;
      goto LAB_0145fc7c;
    }
    if (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      uVar4 = 0x1e;
      goto LAB_0145fc7c;
    }
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x43) {
      uVar4 = 0x1e;
      goto LAB_0145fc7c;
    }
  }
  uVar4 = 0xfe;
LAB_0145fc7c:
  *(int *)(param_4 + -0x20) = ((int)unaff_x19 + -1) * 2;
  uVar2 = FUN_01392240(param_1,param_5);
  if ((int)param_6 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar1 = param_8 * 4 + 0x1f;
    uVar3 = (int)unaff_x26 + *(int *)(param_6 + lVar1);
    uVar4 = uVar3 | uVar4;
    if (uVar3 != uVar4) {
      *(uint *)(param_6 + lVar1) = uVar4;
      *(undefined4 *)(param_6 + 0x17) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0145f9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_4 + -0x18) + unaff_x19 + 9) * 8))(uVar2)
  ;
  return;
}

