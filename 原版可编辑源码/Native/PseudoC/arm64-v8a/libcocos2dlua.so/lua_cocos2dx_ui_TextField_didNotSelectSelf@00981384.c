
/* lua_cocos2dx_ui_TextField_didNotSelectSelf(lua_State*) */

bool lua_cocos2dx_ui_TextField_didNotSelectSelf(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009813a8 to 00a813df has its CatchHandler @ 009813a8
                       catch() { ... } // from try @ 009813a8 with catch @ 009813a8
                       catch() { ... } // from try @ 00981424 with catch @ 009813a8
                       catch() { ... } // from try @ 009814a0 with catch @ 009813a8 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009813e0 to 00a813f7 has its CatchHandler @ 009814b8 */
    (**(code **)(*plVar2 + 0x680))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:didNotSelectSelf",iVar1,0);
  }
                    /* try { // try from 009813fc to 00a81423 has its CatchHandler @ 009814b4 */
  return iVar1 == 0;
}

