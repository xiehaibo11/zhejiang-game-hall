
void FUN_0143d680(void)

{
  long unaff_x19;
  long unaff_x21;
  long unaff_x29;
  
  *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
  FUN_0138bf20();
                    /* WARNING: Could not recover jumptable at 0x0143d6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 1) * 8))();
  return;
}

