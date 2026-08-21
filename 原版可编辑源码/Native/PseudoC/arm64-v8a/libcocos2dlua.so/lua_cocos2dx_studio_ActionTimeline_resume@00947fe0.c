
/* lua_cocos2dx_studio_ActionTimeline_resume(lua_State*) */

bool lua_cocos2dx_studio_ActionTimeline_resume(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00947f4c with catch @ 00947fec */
                    /* catch() { ... } // from try @ 00947f0c with catch @ 00947ff0
                       catch() { ... } // from try @ 00947f98 with catch @ 00947ff0 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x90))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:resume",iVar1,0);
  }
  return iVar1 == 0;
}

