
void FUN_0142ecf8(void)

{
  long in_x4;
  undefined4 in_w8;
  long in_x9;
  long unaff_x21;
  
  *(undefined4 *)(in_x4 + -0x20) = in_w8;
  FUN_0134f820(0xe);
                    /* WARNING: Could not recover jumptable at 0x0142ed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x4 + -0x18) + in_x9) * 8))();
  return;
}

