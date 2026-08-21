
void FUN_00e581bc(long param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  
  if (param_3 == '\0') {
    iVar1 = (**(code **)(param_1 + 0x340))(param_1,0x68686561,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    param_1 = param_1 + 400;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x340))(param_1,0x76686561,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    param_1 = param_1 + 0x1f8;
  }
  iVar1 = FUN_00e1dd74(param_2,&DAT_01977ebc,param_1);
  if (iVar1 != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

