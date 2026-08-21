
void FUN_0144942c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7) == 0x43) {
    uVar4 = 0x1e;
  }
  else {
    uVar4 = 0xfe;
  }
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
                    /* WARNING: Could not recover jumptable at 0x01449428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_4 + -0x18) + unaff_x19 + 5) * 8))(uVar2)
  ;
  return;
}

