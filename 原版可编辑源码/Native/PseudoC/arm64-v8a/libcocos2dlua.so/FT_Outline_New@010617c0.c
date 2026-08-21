
undefined8 FT_Outline_New(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = FT_Outline_New_Internal(*param_1);
    return uVar1;
  }
  return 0x21;
}

