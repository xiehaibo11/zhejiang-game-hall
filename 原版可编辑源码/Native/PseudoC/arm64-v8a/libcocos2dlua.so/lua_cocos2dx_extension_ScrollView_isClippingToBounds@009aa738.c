
/* lua_cocos2dx_extension_ScrollView_isClippingToBounds(lua_State*) */

bool lua_cocos2dx_extension_ScrollView_isClippingToBounds(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 009aa700 with catch @ 009aa78c */
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x35d));
  }
  else {
                    /* catch() { ... } // from try @ 009aa690 with catch @ 009aa774 */
                    /* catch() { ... } // from try @ 009aa680 with catch @ 009aa778 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:isClippingToBounds",iVar1,0);
                    /* catch() { ... } // from try @ 009aa6d8 with catch @ 009aa788 */
  }
  return iVar1 == 0;
}

