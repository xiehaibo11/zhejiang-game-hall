
ulong FUN_00c298e0(long param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  ulong uVar1;
  
  lua_pushcclosure(param_1,param_2,param_4);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  *(undefined1 *)(uVar1 + 10) = param_3;
  *(long *)(uVar1 + 0x20) = *(long *)(param_1 + 0x10) + 0x150;
  return uVar1;
}

