
/* lua_cocos2dx_spine_SkeletonRenderer_setVertexEffect(lua_State*) */

undefined8 lua_cocos2dx_spine_SkeletonRenderer_setVertexEffect(lua_State *param_1)

{
  int iVar1;
  
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_spine_SkeletonRenderer_setVertexEffect\'"
                ,0);
  }
  else {
                    /* try { // try from 00950a80 to 00a50acb has its CatchHandler @ 00950a80
                       catch() { ... } // from try @ 00950a80 with catch @ 00950a80
                       catch() { ... } // from try @ 00950ad0 with catch @ 00950a80 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonRenderer:setVertexEffect",iVar1 + -1,1);
  }
  return 0;
}

