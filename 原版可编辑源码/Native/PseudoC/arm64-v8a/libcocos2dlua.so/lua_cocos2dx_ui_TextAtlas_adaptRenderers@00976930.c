
/* lua_cocos2dx_ui_TextAtlas_adaptRenderers(lua_State*) */

bool lua_cocos2dx_ui_TextAtlas_adaptRenderers(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 0097693c to 00a76977 has its CatchHandler @ 00976a50 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x660))(plVar2);
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 00976978 to 00a769ab has its CatchHandler @ 009768e4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextAtlas:adaptRenderers",iVar1,0);
  }
                    /* try { // try from 009769ac to 00a76a3b has its CatchHandler @ 00976a50 */
  return iVar1 == 0;
}

