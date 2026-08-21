
int FUN_00c2a2d8(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_00c29b44(param_1,1);
  lVar1 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20) + 8;
  iVar2 = luaL_loadfile(param_1,lVar1);
  if (iVar2 != 0) {
    lua_error(param_1);
  }
  lua_call(param_1,0,0xffffffff);
  return (int)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) + -1;
}

