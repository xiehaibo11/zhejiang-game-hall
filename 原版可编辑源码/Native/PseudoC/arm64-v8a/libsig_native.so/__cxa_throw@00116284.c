
void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = __cxa_get_globals();
  uVar2 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x68) = uVar2;
  uVar2 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x78) = param_2;
  *(undefined8 *)(param_1 + -0x70) = param_3;
  *(undefined8 *)(param_1 + -0x60) = uVar2;
  FUN_001162f8(param_1 + -0x20);
  *(undefined8 *)(param_1 + -0x80) = 1;
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  *(code **)(param_1 + -0x18) = FUN_0011631c;
  FUN_0012c460(param_1 + -0x20);
  puVar3 = (undefined8 *)FUN_0011637c((undefined8 *)(param_1 + -0x80));
  *puVar3 = 0x434c4e47432b2b00;
  return;
}

