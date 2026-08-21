
/* lua_cocos2dx_studio_ActionTimeline_getTimeSpeed(lua_State*) */

bool lua_cocos2dx_studio_ActionTimeline_getTimeSpeed(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar3 = (float)(**(code **)(*plVar2 + 0xa8))(plVar2);
    tolua_pushnumber((double)fVar3,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:getTimeSpeed",iVar1,0);
  }
                    /* try { // try from 00948558 to 00a48597 has its CatchHandler @ 00948558
                       catch() { ... } // from try @ 00948558 with catch @ 00948558
                       catch() { ... } // from try @ 00948654 with catch @ 00948558
                       catch() { ... } // from try @ 009486fc with catch @ 00948558 */
  return iVar1 == 0;
}

