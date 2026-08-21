
undefined8 FUN_0091aa1c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = luaL_optinteger(param_1,1,0xffffffffffffffff);
  lVar2 = lua_newuserdata(param_1,0x70);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar1 = deflateInit_(lVar2,uVar1,"1.2.8",0x70);
  FUN_0091ada0(param_1,uVar1,lVar2,0xda);
  lua_getfield(param_1,0xffffd8f0,"lz.deflate.meta");
  lua_setmetatable(param_1,0xfffffffe);
  lua_pushnil(param_1);
  lua_pushcclosure(param_1,FUN_0091aecc,2);
  return 1;
}

