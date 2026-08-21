
bool FUN_008e7c64(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    ccvaluemap_to_luaval(param_1,*(unordered_map **)(lVar2 + 0x1f8));
  }
  else {
                    /* catch() { ... } // from try @ 008e7c48 with catch @ 008e7cac */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:getTemplateVars",iVar1,0);
  }
  return iVar1 == 0;
}

