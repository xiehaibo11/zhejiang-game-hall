
void FUN_014419a0(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x21;
  long unaff_x29;
  
  *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
  FUN_01349260();
                    /* WARNING: Could not recover jumptable at 0x01441a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 1) * 8))
            (param_1);
  return;
}

