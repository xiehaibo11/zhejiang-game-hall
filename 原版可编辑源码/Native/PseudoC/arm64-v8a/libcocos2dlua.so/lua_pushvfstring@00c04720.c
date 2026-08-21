
void lua_pushvfstring(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))
  {
    FUN_00c19f80();
  }
  local_20 = *param_3;
  uStack_18 = param_3[1];
  local_10 = param_3[2];
  uStack_8 = param_3[3];
  FUN_00c00864(param_1,param_2,&local_20);
  return;
}

