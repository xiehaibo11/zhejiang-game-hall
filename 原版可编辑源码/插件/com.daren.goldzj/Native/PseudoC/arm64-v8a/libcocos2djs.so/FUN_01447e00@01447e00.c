
void FUN_01447e00(void)

{
  undefined8 uVar1;
  long in_x4;
  undefined8 in_x7;
  long unaff_x19;
  long unaff_x21;
  
  *(int *)(in_x4 + -0x20) = ((int)unaff_x19 + -1) * 2;
  uVar1 = FUN_0134faa0(10,in_x7);
                    /* WARNING: Could not recover jumptable at 0x01446ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x4 + -0x18) + unaff_x19 + 7) * 8))(uVar1);
  return;
}

