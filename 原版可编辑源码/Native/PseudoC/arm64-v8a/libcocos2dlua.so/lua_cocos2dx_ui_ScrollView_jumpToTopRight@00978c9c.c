
/* lua_cocos2dx_ui_ScrollView_jumpToTopRight(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_jumpToTopRight(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00978c10 with catch @ 00978ca8 */
                    /* catch() { ... } // from try @ 00978c28 with catch @ 00978cac */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00978cf8 to 00a78d4f has its CatchHandler @ 00978cf8
                       catch() { ... } // from try @ 00978cf8 with catch @ 00978cf8
                       catch() { ... } // from try @ 00978d84 with catch @ 00978cf8
                       catch() { ... } // from try @ 00978e28 with catch @ 00978cf8 */
    (**(code **)(*plVar2 + 0x770))(plVar2);
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 00978bdc with catch @ 00978cdc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:jumpToTopRight",iVar1,0);
  }
  return iVar1 == 0;
}

