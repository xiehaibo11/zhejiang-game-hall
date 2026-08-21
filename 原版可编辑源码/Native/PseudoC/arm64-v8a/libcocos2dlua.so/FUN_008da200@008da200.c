
bool FUN_008da200(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008da21c to 009da2ab has its CatchHandler @ 008da394 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    vec2_to_luaval(param_1,(Vec2 *)(lVar2 + 0xe0));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getScale",iVar1,0);
  }
  return iVar1 == 0;
}

