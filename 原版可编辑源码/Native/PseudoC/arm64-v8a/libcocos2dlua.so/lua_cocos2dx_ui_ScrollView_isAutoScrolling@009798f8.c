
/* lua_cocos2dx_ui_ScrollView_isAutoScrolling(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_isAutoScrolling(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00979910 to 00a79923 has its CatchHandler @ 00979968 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 00979924 to 00a79983 has its CatchHandler @ 00979858 */
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x81d));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:isAutoScrolling",iVar1,0);
  }
                    /* catch() { ... } // from try @ 009798c4 with catch @ 00979964 */
  return iVar1 == 0;
}

