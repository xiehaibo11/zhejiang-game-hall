
/* lua_cocos2dx_spine_SkeletonRenderer_getDebugBonesEnabled(lua_State*) */

bool lua_cocos2dx_spine_SkeletonRenderer_getDebugBonesEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  SkeletonRenderer *this;
  
  this = (SkeletonRenderer *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00950710 to 00a507ab has its CatchHandler @ 00950590 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = spine::SkeletonRenderer::getDebugBonesEnabled(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:getDebugBonesEnabled",iVar1,0);
  }
                    /* catch() { ... } // from try @ 009506c4 with catch @ 0095075c */
                    /* catch() { ... } // from try @ 009506dc with catch @ 00950760 */
  return iVar1 == 0;
}

