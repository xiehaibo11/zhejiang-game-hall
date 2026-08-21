
void FUN_0143f138(void)

{
  long in_x3;
  undefined4 in_w4;
  undefined4 in_w5;
  undefined4 uVar1;
  long in_x7;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  *(undefined4 *)(in_x7 + -1) = in_w5;
  uVar1 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(in_x7 + 3) = uVar1;
  *(undefined4 *)(in_x7 + 0xb) = 0;
  *(undefined4 *)(in_x7 + 7) = uVar1;
  *(undefined4 *)(in_x7 + 0xf) = in_w4;
                    /* WARNING: Could not recover jumptable at 0x0143f174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x3 + -0x18) + unaff_x19 + 1) * 8))(in_x7);
  return;
}

