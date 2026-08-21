
void FUN_01459808(void)

{
  long in_x4;
  long unaff_x19;
  long unaff_x21;
  
  *(int *)(in_x4 + -0x20) = ((int)unaff_x19 + -1) * 2;
  FUN_0134f820(0xc);
                    /* WARNING: Could not recover jumptable at 0x0145986c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x4 + -0x18) + unaff_x19 + 9) * 8))();
  return;
}

