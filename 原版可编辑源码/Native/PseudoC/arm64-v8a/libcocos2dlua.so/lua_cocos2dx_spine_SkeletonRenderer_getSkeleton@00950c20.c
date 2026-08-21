
/* lua_cocos2dx_spine_SkeletonRenderer_getSkeleton(lua_State*) */

bool lua_cocos2dx_spine_SkeletonRenderer_getSkeleton(lua_State *param_1)

{
  int iVar1;
  SkeletonRenderer *this;
  
  this = (SkeletonRenderer *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00950c40 to 00a50c73 has its CatchHandler @ 00950d40 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00950c74 to 00a50c87 has its CatchHandler @ 00950d0c */
    spine::SkeletonRenderer::getSkeleton(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:getSkeleton",iVar1,0);
  }
  return iVar1 == 0;
}

