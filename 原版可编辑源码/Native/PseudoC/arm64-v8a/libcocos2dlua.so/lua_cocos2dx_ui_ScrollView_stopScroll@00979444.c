
/* lua_cocos2dx_ui_ScrollView_stopScroll(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_stopScroll(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x6d8))(plVar2);
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 00979488 to 00a794bb has its CatchHandler @ 00979588 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:stopScroll",iVar1,0);
  }
                    /* try { // try from 009794bc to 00a794cf has its CatchHandler @ 00979554 */
  return iVar1 == 0;
}

