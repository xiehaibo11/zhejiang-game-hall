
void FUN_01446efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  
  *(int *)(param_5 + -0x20) = ((int)unaff_x19 + -1) * 2;
  uVar1 = FUN_0137d5e0(param_1,param_8,param_3,param_6);
                    /* WARNING: Could not recover jumptable at 0x01446ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(param_5 + -0x18) + unaff_x19 + 7) * 8))(uVar1)
  ;
  return;
}

