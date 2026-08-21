
undefined8 FUN_009f8ce8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_48 [16];
  long local_38;
  
  uVar3 = FUN_009f9a54();
  local_48 = FUN_009f9e20(param_1,1);
  local_38 = local_48._0_8_;
  if (local_38 == 0) {
    uVar1 = lua_type(param_1,1);
    uVar4 = lua_typename(param_1,uVar1);
    lua_pushfstring(param_1,"%s expected, got %s","string/buffer/slice",uVar4);
    uVar4 = lua_tolstring(param_1,0xffffffff,0);
    luaL_argerror(param_1,1,uVar4);
  }
  iVar2 = FUN_009fcc5c(uVar3,local_48);
  lua_pushboolean(param_1,iVar2 == 0);
  lua_pushinteger(param_1,(long)(((ulong)(uint)(local_48._0_4_ - (int)local_38) << 0x20) +
                                0x100000000) >> 0x20);
  return 2;
}

