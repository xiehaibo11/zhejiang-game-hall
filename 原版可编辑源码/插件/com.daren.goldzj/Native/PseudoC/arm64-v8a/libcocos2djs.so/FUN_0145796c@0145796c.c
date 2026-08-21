
void FUN_0145796c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int unaff_w19;
  long unaff_x21;
  long unaff_x26;
  
  if ((int)param_7 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar1 = param_1 * 4 + 0x1f;
    uVar3 = (int)unaff_x26 + *(int *)(param_7 + lVar1);
    uVar2 = uVar3 | 0xe;
    if (uVar3 != uVar2) {
      *(uint *)(param_7 + lVar1) = uVar2;
      *(undefined4 *)(param_7 + 0x17) = 0;
    }
  }
  *(int *)(param_5 + -0x20) = (unaff_w19 + -1) * 2;
  FUN_0139a8e0(param_2,param_8,param_4,param_5,*(undefined8 *)(param_5 + -8));
                    /* WARNING: Could not recover jumptable at 0x01457a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_5 + -0x18) + param_9) * 8))();
  return;
}

