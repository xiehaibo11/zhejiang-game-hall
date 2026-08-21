
void FUN_00c2992c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  luaL_findtable(param_1,0xffffd8f0,"_PRELOAD",4);
  lua_pushcclosure(param_1,param_3,0);
  *(undefined8 *)((*(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff) + 0x10) = param_4;
  lua_setfield(param_1,0xfffffffe,param_2);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
  return;
}

