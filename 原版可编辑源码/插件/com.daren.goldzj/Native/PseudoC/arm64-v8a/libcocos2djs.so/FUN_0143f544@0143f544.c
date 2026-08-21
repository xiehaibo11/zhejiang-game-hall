
void FUN_0143f544(void)

{
  long in_x3;
  undefined4 in_w4;
  undefined4 uVar1;
  long in_x6;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  *(undefined4 *)(in_x6 + -1) = in_w4;
  uVar1 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(in_x6 + 3) = uVar1;
  *(undefined4 *)(in_x6 + 0xb) = 0;
  *(undefined4 *)(in_x6 + 7) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0143f57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x3 + -0x18) + unaff_x19 + 1) * 8))(in_x6);
  return;
}

