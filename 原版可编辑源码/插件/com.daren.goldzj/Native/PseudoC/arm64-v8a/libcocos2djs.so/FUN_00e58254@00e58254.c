
void FUN_00e58254(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x340))(param_1,0x636d6170,param_2,(undefined8 *)(param_1 + 0x338))
  ;
  if ((iVar1 == 0) &&
     (iVar1 = FUN_00e1d5c4(param_2,*(undefined8 *)(param_1 + 0x338),param_1 + 0x330), iVar1 != 0)) {
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  return;
}

