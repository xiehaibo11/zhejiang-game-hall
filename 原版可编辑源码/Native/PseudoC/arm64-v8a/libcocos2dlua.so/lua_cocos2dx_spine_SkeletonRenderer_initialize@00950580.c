
/* lua_cocos2dx_spine_SkeletonRenderer_initialize(lua_State*) */

bool lua_cocos2dx_spine_SkeletonRenderer_initialize(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 00950590 to 00a5068f has its CatchHandler @ 00950590
                       catch() { ... } // from try @ 00950590 with catch @ 00950590
                       catch() { ... } // from try @ 00950710 with catch @ 00950590 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x548))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:initialize",iVar1,0);
  }
  return iVar1 == 0;
}

