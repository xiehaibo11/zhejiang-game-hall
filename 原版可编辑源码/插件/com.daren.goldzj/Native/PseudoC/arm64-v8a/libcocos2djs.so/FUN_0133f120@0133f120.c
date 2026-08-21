
undefined8 FUN_0133f120(undefined8 param_1,undefined8 param_2,int param_3)

{
  long unaff_x26;
  
  if (param_3 == 0) {
    *(undefined8 *)(unaff_x26 + 0x40) = 0x133f254;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    (**(code **)(unaff_x26 + 0x10b8))();
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
  }
  else {
    *(undefined8 *)(unaff_x26 + 0x40) = 0x133f1a0;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    (**(code **)(unaff_x26 + 0x10b8))();
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
  }
  return *(undefined8 *)(unaff_x26 + 0xb8);
}

