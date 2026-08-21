
/* lua_cocos2dx_studio_InnerActionFrame_getEndFrameIndex(lua_State*) */

bool lua_cocos2dx_studio_InnerActionFrame_getEndFrameIndex(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x60),param_1);
                    /* try { // try from 0094305c to 00a4308b has its CatchHandler @ 00942fd4 */
  }
  else {
                    /* try { // try from 00943024 to 00a4305b has its CatchHandler @ 009430e0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.InnerActionFrame:getEndFrameIndex",iVar1,0);
  }
  return iVar1 == 0;
}

