
/* lua_cocos2dx_ui_ScrollView_jumpToBottomRight(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_jumpToBottomRight(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 009798a8 with catch @ 00979968
                       catch() { ... } // from try @ 00979910 with catch @ 00979968 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x780))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:jumpToBottomRight",iVar1,0);
  }
  return iVar1 == 0;
}

