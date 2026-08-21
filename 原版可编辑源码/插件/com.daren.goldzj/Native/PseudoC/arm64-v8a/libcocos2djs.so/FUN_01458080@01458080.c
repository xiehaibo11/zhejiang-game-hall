
void FUN_01458080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x29;
  
  uVar1 = *(ushort *)(unaff_x20 + unaff_x19 + 1);
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  FUN_013f3f60(*(undefined8 *)(unaff_x29 + -0x10),(uint)uVar1 * 2,param_3,unaff_x29,param_1,
               *(undefined8 *)(unaff_x29 + -0x10),*(undefined8 *)(unaff_x29 + -8));
                    /* WARNING: Could not recover jumptable at 0x01458108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 3) * 8))
            (param_1);
  return;
}

