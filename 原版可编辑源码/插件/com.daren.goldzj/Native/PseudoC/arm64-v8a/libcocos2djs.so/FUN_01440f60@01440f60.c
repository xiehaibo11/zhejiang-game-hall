
void FUN_01440f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  undefined1 auStack_40 [16];
  
  if (*(undefined1 **)(unaff_x26 + 0x60) < auStack_40) {
                    /* WARNING: Could not recover jumptable at 0x01440fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 1) * 8))();
    return;
  }
  *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048),param_3,unaff_x29,param_1,
               *(undefined8 *)(unaff_x29 + -8));
}

