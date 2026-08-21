
undefined8 FUN_008d916c(lua_State *param_1)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 008d8f90 with catch @ 008d9174 */
  lVar1 = tolua_tousertype(param_1,1,0);
  size_to_luaval(param_1,(Size *)(lVar1 + 0x90));
  return 1;
}

