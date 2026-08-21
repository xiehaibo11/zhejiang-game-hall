
undefined8 FUN_00c2adc0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = lua_pushthread();
  if (iVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x28) = puVar2 + 1;
    *puVar2 = 0xffffffffffffffff;
  }
  return 1;
}

