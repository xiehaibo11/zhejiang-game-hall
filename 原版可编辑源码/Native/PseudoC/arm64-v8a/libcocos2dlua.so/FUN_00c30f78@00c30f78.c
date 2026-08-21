
undefined8 FUN_00c30f78(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = luaL_checklstring(param_1,1,0);
  lua_getfield(param_1,0xffffd8ef,"preload");
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 5) {
    luaL_error(param_1,"\'package.preload\' must be a table");
  }
  lua_getfield(param_1,0xffffffff,uVar2);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    uVar3 = FUN_00c309e4(param_1,uVar2,"luaJIT_BC_%s");
    lVar4 = dlsym(0,uVar3);
    if ((lVar4 == 0) || (iVar1 = luaL_loadbuffer(param_1,lVar4,0x7fffff00,uVar2), iVar1 != 0)) {
      lua_pushfstring(param_1,"\n\tno field package.preload[\'%s\']",uVar2);
      return 1;
    }
  }
  return 1;
}

