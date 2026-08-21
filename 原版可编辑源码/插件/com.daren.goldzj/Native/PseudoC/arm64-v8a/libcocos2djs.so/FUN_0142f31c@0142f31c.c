
void FUN_0142f31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  
  *(int *)(param_5 + -0x20) = (int)unaff_x19 * 2;
  uVar2 = FUN_0137d5e0(param_1,param_8,param_3,param_6);
  lVar3 = *(long *)(param_5 + -0x18);
  bVar1 = *(byte *)(lVar3 + unaff_x19 + 4);
  if (bVar1 == 0x26) {
    *(undefined8 *)(param_5 + (long)*(char *)(lVar3 + unaff_x19 + 5) * 8) = uVar2;
    bVar1 = *(byte *)(lVar3 + unaff_x19 + 6);
  }
                    /* WARNING: Could not recover jumptable at 0x0142f2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)bVar1 * 8))(uVar2);
  return;
}

