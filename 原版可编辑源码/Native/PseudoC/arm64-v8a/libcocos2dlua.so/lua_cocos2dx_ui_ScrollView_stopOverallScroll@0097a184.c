
/* lua_cocos2dx_ui_ScrollView_stopOverallScroll(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_stopOverallScroll(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x6e8))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:stopOverallScroll",iVar1,0);
  }
                    /* try { // try from 0097a1f8 to 00a7a247 has its CatchHandler @ 0097a1f8
                       catch() { ... } // from try @ 0097a1f8 with catch @ 0097a1f8
                       catch() { ... } // from try @ 0097a2a4 with catch @ 0097a1f8
                       catch() { ... } // from try @ 0097a2e8 with catch @ 0097a1f8 */
  return iVar1 == 0;
}

