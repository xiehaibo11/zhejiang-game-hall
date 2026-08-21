
void lua_pushfstring(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_30 = param_3;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))
  {
    FUN_00c19f80();
  }
  local_e0 = &local_30;
  uStack_d8 = 0xffffff80ffffffd0;
  local_f0 = (undefined1 *)register0x00000008;
  puStack_e8 = (undefined1 *)register0x00000008;
  FUN_00c00864(param_1,param_2,&local_f0);
  return;
}

