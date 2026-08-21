
/* lua_cocos2dx_spine_SkeletonRenderer_isTwoColorTint(lua_State*) */

bool lua_cocos2dx_spine_SkeletonRenderer_isTwoColorTint(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  SkeletonRenderer *this;
  
  this = (SkeletonRenderer *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = spine::SkeletonRenderer::isTwoColorTint(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 009504d0 to 00a5051b has its CatchHandler @ 009504d0
                       catch() { ... } // from try @ 009504d0 with catch @ 009504d0
                       catch() { ... } // from try @ 00950520 with catch @ 009504d0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:isTwoColorTint",iVar1,0);
  }
  return iVar1 == 0;
}

