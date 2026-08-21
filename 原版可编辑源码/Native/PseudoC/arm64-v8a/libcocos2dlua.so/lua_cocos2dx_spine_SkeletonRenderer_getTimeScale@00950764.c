
/* lua_cocos2dx_spine_SkeletonRenderer_getTimeScale(lua_State*) */

bool lua_cocos2dx_spine_SkeletonRenderer_getTimeScale(lua_State *param_1)

{
  int iVar1;
  SkeletonRenderer *this;
  float fVar2;
  
  this = (SkeletonRenderer *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* catch() { ... } // from try @ 00950690 with catch @ 00950790 */
  if (iVar1 == 0) {
    fVar2 = (float)spine::SkeletonRenderer::getTimeScale(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:getTimeScale",iVar1,0);
  }
  return iVar1 == 0;
}

