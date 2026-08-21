
/* lua_cocos2dx_ui_Layout_isClippingEnabled(lua_State*) */

bool lua_cocos2dx_ui_Layout_isClippingEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0096a5ec with catch @ 0096a684 */
                    /* catch() { ... } // from try @ 0096a604 with catch @ 0096a688 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 0096a5b8 with catch @ 0096a6b8 */
    uVar2 = (**(code **)(*plVar3 + 0x688))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Layout:isClippingEnabled",iVar1,0);
  }
  return iVar1 == 0;
}

