
undefined8 FUN_008d9134(lua_State *param_1)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 008d8ed8 with catch @ 008d9144 */
  lVar1 = tolua_tousertype(param_1,1,0);
  size_to_luaval(param_1,(Size *)(lVar1 + 0x88));
                    /* catch() { ... } // from try @ 008d8e34 with catch @ 008d915c */
  return 1;
}

