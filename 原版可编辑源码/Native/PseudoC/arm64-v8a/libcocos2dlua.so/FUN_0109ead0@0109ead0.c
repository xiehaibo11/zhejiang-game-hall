
void FUN_0109ead0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x330))(param_1,0x62686564,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  FT_Stream_ReadFields(param_2,&DAT_01460284,param_1 + 0x130);
  return;
}

