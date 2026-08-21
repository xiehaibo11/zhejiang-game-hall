
/* lua_cocos2dx_studio_InnerActionFrame_getStartFrameIndex(lua_State*) */

bool lua_cocos2dx_studio_InnerActionFrame_getStartFrameIndex(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 0094308c to 00a4309f has its CatchHandler @ 009430e0 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x5c),param_1);
  }
  else {
                    /* try { // try from 009430a0 to 00a430fb has its CatchHandler @ 00942fd4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.InnerActionFrame:getStartFrameIndex",iVar1,0);
  }
                    /* catch() { ... } // from try @ 00943024 with catch @ 009430e0
                       catch() { ... } // from try @ 0094308c with catch @ 009430e0 */
  return iVar1 == 0;
}

