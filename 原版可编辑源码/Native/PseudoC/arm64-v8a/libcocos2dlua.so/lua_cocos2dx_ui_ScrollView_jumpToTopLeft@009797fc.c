
/* lua_cocos2dx_ui_ScrollView_jumpToTopLeft(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_jumpToTopLeft(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00979858 to 00a798a7 has its CatchHandler @ 00979858
                       catch() { ... } // from try @ 00979858 with catch @ 00979858
                       catch() { ... } // from try @ 009798dc with catch @ 00979858
                       catch() { ... } // from try @ 00979924 with catch @ 00979858 */
    (**(code **)(*plVar2 + 0x768))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:jumpToTopLeft",iVar1,0);
  }
  return iVar1 == 0;
}

