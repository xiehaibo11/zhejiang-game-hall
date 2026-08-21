
void FUN_0143f7f0(void)

{
  long in_x3;
  undefined4 uVar1;
  long in_x5;
  undefined4 in_w9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  
  *(undefined4 *)(in_x5 + -1) = in_w9;
  uVar1 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(in_x5 + 3) = uVar1;
  *(undefined4 *)(in_x5 + 0xb) = 0;
  *(undefined4 *)(in_x5 + 7) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0143f828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x3 + -0x18) + unaff_x19 + 1) * 8))(in_x5);
  return;
}

