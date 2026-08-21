
undefined4 FUN_00e49d34(long *param_1)

{
  undefined4 uVar1;
  long local_28;
  
  uVar1 = FT_New_Size(*(undefined8 *)(*param_1 + 0x328),&local_28);
  param_1[0xb] = local_28;
  FT_Activate_Size();
  return uVar1;
}

