
void FUN_0109e23c(long param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  
  if (param_3 == '\0') {
    iVar1 = (**(code **)(param_1 + 0x330))(param_1,0x68686561,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    param_1 = param_1 + 400;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x330))(param_1,0x76686561,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    param_1 = param_1 + 0x1f8;
  }
  iVar1 = FT_Stream_ReadFields(param_2,&DAT_014602d8,param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

