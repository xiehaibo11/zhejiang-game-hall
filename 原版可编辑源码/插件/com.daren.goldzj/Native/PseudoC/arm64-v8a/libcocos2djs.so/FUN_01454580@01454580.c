
void FUN_01454580(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x21;
  long unaff_x29;
  
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  uVar1 = FUN_013492a0();
  lVar2 = *(long *)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + (long)*(short *)(lVar2 + unaff_x19 + 1) * 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x01454600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(lVar2 + unaff_x19 + 3) * 8))(param_1);
  return;
}

