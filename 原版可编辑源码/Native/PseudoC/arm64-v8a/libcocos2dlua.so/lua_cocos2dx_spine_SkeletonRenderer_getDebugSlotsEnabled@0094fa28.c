
/* lua_cocos2dx_spine_SkeletonRenderer_getDebugSlotsEnabled(lua_State*) */

bool lua_cocos2dx_spine_SkeletonRenderer_getDebugSlotsEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  SkeletonRenderer *this;
  
  this = (SkeletonRenderer *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0094f9ec with catch @ 0094fa4c */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = spine::SkeletonRenderer::getDebugSlotsEnabled(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 0094fa60 to 00a4fb2f has its CatchHandler @ 0094fa60
                       catch() { ... } // from try @ 0094fa60 with catch @ 0094fa60
                       catch() { ... } // from try @ 0094fbb0 with catch @ 0094fa60 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:getDebugSlotsEnabled",iVar1,0);
  }
  return iVar1 == 0;
}

