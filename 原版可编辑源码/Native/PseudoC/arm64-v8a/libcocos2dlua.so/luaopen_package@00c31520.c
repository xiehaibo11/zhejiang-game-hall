
undefined8 luaopen_package(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  
  luaL_newmetatable(param_1,"_LOADLIB");
  iVar3 = 0;
  FUN_00c298e0(param_1,FUN_00c31194,1,0);
  lua_setfield(param_1,0xfffffffe,&DAT_014121a8);
  luaL_register(param_1,"package",&PTR_s_loadlib_01697800);
  lua_pushvalue(param_1,0xffffffff);
  lua_replace(param_1,0xffffd8ef);
  lua_createtable(param_1,4,0);
  pcVar2 = FUN_00c30f78;
  ppuVar4 = &PTR_FUN_01697848;
  do {
    iVar3 = iVar3 + 1;
    FUN_00c298e0(param_1,pcVar2,1,0);
    lua_rawseti(param_1,0xfffffffe,iVar3);
    pcVar2 = (code *)*ppuVar4;
    ppuVar4 = ppuVar4 + 1;
  } while (pcVar2 != (code *)0x0);
  lua_setfield(param_1,0xfffffffe,"loaders");
  lua_getfield(param_1,0xffffd8f0,"LUA_NOENV");
  uVar1 = lua_toboolean(param_1,0xffffffff);
  lua_settop(param_1,0xfffffffe);
  FUN_00c311d0(param_1,&DAT_014121a0,"LUA_PATH",
               "./?.lua;/usr/local/share/luajit-2.1.0-beta2/?.lua;/usr/local/share/lua/5.1/?.lua;/usr/local/share/lua/5.1/?/init.lua"
               ,uVar1);
  FUN_00c311d0(param_1,"cpath","LUA_CPATH",
               "./?.so;/usr/local/lib/lua/5.1/?.so;/usr/local/lib/lua/5.1/loadall.so",uVar1);
  lua_pushlstring(param_1,"/\n;\n?\n!\n-",9);
  lua_setfield(param_1,0xfffffffe,"config");
  luaL_findtable(param_1,0xffffd8f0,"_LOADED",0x10);
  lua_setfield(param_1,0xfffffffe,"loaded");
  luaL_findtable(param_1,0xffffd8f0,"_PRELOAD",4);
  lua_setfield(param_1,0xfffffffe,"preload");
  lua_pushvalue(param_1,0xffffd8ee);
  luaL_register(param_1,0,&PTR_s_module_01697868);
  lua_settop(param_1,0xfffffffe);
  return 1;
}

