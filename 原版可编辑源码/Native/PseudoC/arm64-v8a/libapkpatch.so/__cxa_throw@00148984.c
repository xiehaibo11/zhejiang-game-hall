
void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = __cxa_get_globals();
  uVar3 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar3;
  uVar3 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x58) = uVar3;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  FUN_00148a04(param_1 + -0x20);
  iVar1 = *(int *)(lVar2 + 8);
  *(undefined8 *)(param_1 + -0x78) = 1;
  *(int *)(lVar2 + 8) = iVar1 + 1;
  *(code **)(param_1 + -0x18) = FUN_00148a20;
  FUN_001612b4(param_1 + -0x20);
  puVar4 = (undefined8 *)FUN_00148a88(param_1 + -0x80);
  *puVar4 = 0x434c4e47432b2b00;
  return;
}

