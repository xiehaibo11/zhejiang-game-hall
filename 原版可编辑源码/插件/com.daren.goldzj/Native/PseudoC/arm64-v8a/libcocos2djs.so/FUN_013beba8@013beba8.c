
undefined1  [16] FUN_013beba8(ulong param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined1 auVar2 [16];
  
  *(undefined1 **)(unaff_x26 + 0x2c28) = &stack0xfffffffffffffff0;
  *(undefined8 *)(unaff_x26 + 0x2bc8) = unaff_x27;
  iVar1 = (*param_3)(param_2);
  if (iVar1 != (int)*(undefined8 *)(unaff_x26 + 0x180)) {
    *(undefined8 *)(unaff_x26 + 0x2c28) = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  *(undefined8 *)(unaff_x26 + 0x40) = 0x13beccc;
  *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
  (**(code **)(unaff_x26 + 0x2100))(0,0);
  *(undefined8 *)(unaff_x26 + 0x38) = 0;
  if (*(long *)(unaff_x26 + 0x2be0) != 0) {
    *(long *)(*(long *)(unaff_x26 + 0x2bf8) + -8) = *(long *)(unaff_x26 + 0x2be0);
  }
                    /* WARNING: Could not recover jumptable at 0x013bed38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar2 = (**(code **)(unaff_x26 + 0x2be8))();
  return auVar2;
}

