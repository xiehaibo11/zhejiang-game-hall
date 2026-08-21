
undefined8 lua_atpanic(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148) = param_2;
  return uVar1;
}

