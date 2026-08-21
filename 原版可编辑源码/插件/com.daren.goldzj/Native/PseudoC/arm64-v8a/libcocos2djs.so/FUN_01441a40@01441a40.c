
void FUN_01441a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x29;
  
  bVar1 = *(byte *)(unaff_x20 + unaff_x19 + 1);
  *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
  FUN_013f3f60(*(undefined8 *)(unaff_x29 + -0x10),(uint)bVar1 * 2,param_3,unaff_x29,param_1,
               *(undefined8 *)(unaff_x29 + -0x10),*(undefined8 *)(unaff_x29 + -8));
                    /* WARNING: Could not recover jumptable at 0x01441ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 2) * 8))
            (param_1);
  return;
}

