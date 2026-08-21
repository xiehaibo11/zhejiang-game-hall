
undefined8 FUN_008e1230(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 008e1230 to 009e12ff has its CatchHandler @ 008e1230
                       catch() { ... } // from try @ 008e1230 with catch @ 008e1230
                       catch() { ... } // from try @ 008e1380 with catch @ 008e1230 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_type(param_1,2);
  if (iVar1 == 1) {
    iVar1 = lua_toboolean(param_1,2);
    *(bool *)(lVar2 + 0x2e1) = iVar1 != 0;
  }
  else {
    luaL_error(param_1,"fairygui.GList:foldInvisibleItems value type MUST be Boolean!");
  }
  return 0;
}

