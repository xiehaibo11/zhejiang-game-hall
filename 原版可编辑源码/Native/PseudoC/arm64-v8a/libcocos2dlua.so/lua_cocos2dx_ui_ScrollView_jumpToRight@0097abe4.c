
/* lua_cocos2dx_ui_ScrollView_jumpToRight(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_jumpToRight(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0097ab50 with catch @ 0097ac04 */
                    /* catch() { ... } // from try @ 0097ab14 with catch @ 0097ac08
                       catch() { ... } // from try @ 0097aba0 with catch @ 0097ac08 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x760))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:jumpToRight",iVar1,0);
  }
  return iVar1 == 0;
}

