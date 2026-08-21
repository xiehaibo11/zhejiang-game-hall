
void luaL_openlibs(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  pcVar1 = luaopen_base;
  ppuVar3 = &PTR_luaopen_package_016c79b8;
  do {
    lua_pushcclosure(param_1,pcVar1,0);
    lua_pushstring(param_1,ppuVar3[-3]);
    lua_call(param_1,1,0);
    pcVar1 = (code *)*ppuVar3;
    ppuVar3 = ppuVar3 + 2;
  } while (pcVar1 != (code *)0x0);
  luaL_findtable(param_1,0xffffd8f0,"_PRELOAD",1);
  pcVar1 = luaopen_ffi;
  puVar2 = &DAT_016c7a68;
  do {
    lua_pushcclosure(param_1,pcVar1,0);
    lua_setfield(param_1,0xfffffffe,puVar2[-3]);
    pcVar1 = (code *)*puVar2;
    puVar2 = puVar2 + 2;
  } while (pcVar1 != (code *)0x0);
  lua_settop(param_1,0xfffffffe);
  return;
}

