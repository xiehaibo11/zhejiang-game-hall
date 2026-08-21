
/* lua_cocos2dx_spine_SkeletonRenderer_getBlendFunc(lua_State*) */

bool lua_cocos2dx_spine_SkeletonRenderer_getBlendFunc(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  BlendFunc *pBVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0095051c to 00a5051f has its CatchHandler @ 0095057c */
                    /* try { // try from 00950520 to 00a5058f has its CatchHandler @ 009504d0 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pBVar3 = (BlendFunc *)(**(code **)(*plVar2 + 0x540))(plVar2);
    blendfunc_to_luaval(param_1,pBVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:getBlendFunc",iVar1,0);
  }
                    /* catch() { ... } // from try @ 0095051c with catch @ 0095057c */
  return iVar1 == 0;
}

