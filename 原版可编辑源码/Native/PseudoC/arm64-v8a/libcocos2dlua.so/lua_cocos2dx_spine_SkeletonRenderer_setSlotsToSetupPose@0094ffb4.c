
/* lua_cocos2dx_spine_SkeletonRenderer_setSlotsToSetupPose(lua_State*) */

bool lua_cocos2dx_spine_SkeletonRenderer_setSlotsToSetupPose(lua_State *param_1)

{
  int iVar1;
  SkeletonRenderer *this;
  
                    /* catch() { ... } // from try @ 0094ff6c with catch @ 0094ffcc */
  this = (SkeletonRenderer *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 0094ffe0 to 00a500df has its CatchHandler @ 0094ffe0
                       catch() { ... } // from try @ 0094ffe0 with catch @ 0094ffe0
                       catch() { ... } // from try @ 00950160 with catch @ 0094ffe0 */
  if (iVar1 == 0) {
    spine::SkeletonRenderer::setSlotsToSetupPose(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:setSlotsToSetupPose",iVar1,0);
  }
  return iVar1 == 0;
}

