
/* lua_cocos2dx_studio_ZOrderFrame_getZOrder(lua_State*) */

bool lua_cocos2dx_studio_ZOrderFrame_getZOrder(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00944b60 to 00a44b63 has its CatchHandler @ 00944bbc */
                    /* try { // try from 00944b64 to 00a44bcf has its CatchHandler @ 00944b14 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 00944b60 with catch @ 00944bbc */
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x58),param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ZOrderFrame:getZOrder",iVar1,0);
  }
  return iVar1 == 0;
}

