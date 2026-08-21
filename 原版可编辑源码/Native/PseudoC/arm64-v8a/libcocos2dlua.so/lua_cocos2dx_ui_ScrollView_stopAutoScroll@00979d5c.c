
/* lua_cocos2dx_ui_ScrollView_stopAutoScroll(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_stopAutoScroll(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00979d7c to 00a79d93 has its CatchHandler @ 00979eb4 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00979db8 to 00a79dbb has its CatchHandler @ 00979ebc */
    (**(code **)(*plVar2 + 0x6e0))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:stopAutoScroll",iVar1,0);
  }
                    /* try { // try from 00979dd4 to 00a79ddb has its CatchHandler @ 00979eb4 */
  return iVar1 == 0;
}

