
void FUN_0142c578(void)

{
  long in_x4;
  long unaff_x19;
  long unaff_x21;
  
  *(int *)(in_x4 + -0x20) = (int)unaff_x19 * 2;
  FUN_0134f820(0xe);
                    /* WARNING: Could not recover jumptable at 0x0142c5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(in_x4 + -0x18) + unaff_x19 + 3) * 8))();
  return;
}

