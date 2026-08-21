
void FUN_013bea60(undefined8 param_1,code *param_2)

{
  int iVar1;
  long unaff_x26;
  undefined8 unaff_x27;
  
  *(undefined1 **)(unaff_x26 + 0x2c28) = &stack0xfffffffffffffff0;
  *(undefined8 *)(unaff_x26 + 0x2bc8) = unaff_x27;
  iVar1 = (*param_2)(param_1);
  if (iVar1 != (int)*(undefined8 *)(unaff_x26 + 0x180)) {
    *(undefined8 *)(unaff_x26 + 0x2c28) = 0;
    return;
  }
  *(undefined8 *)(unaff_x26 + 0x40) = 0x13beb18;
  *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
  (**(code **)(unaff_x26 + 0x2100))(0,0);
  *(undefined8 *)(unaff_x26 + 0x38) = 0;
  if (*(long *)(unaff_x26 + 0x2be0) != 0) {
    *(long *)(*(long *)(unaff_x26 + 0x2bf8) + -8) = *(long *)(unaff_x26 + 0x2be0);
  }
                    /* WARNING: Could not recover jumptable at 0x013beb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x26 + 0x2be8))();
  return;
}

