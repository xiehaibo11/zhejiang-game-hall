
/* lua_cocos2dx_ui_ScrollView_isScrolling(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_isScrolling(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00979ed0 with catch @ 00979f00
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00979e5c with catch @ 00979f04
                        */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x81c));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:isScrolling",iVar1,0);
  }
  return iVar1 == 0;
}

