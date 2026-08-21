
/* lua_cocos2dx_studio_ActionTimeline_clearFrameEventCallFunc(lua_State*) */

bool lua_cocos2dx_studio_ActionTimeline_clearFrameEventCallFunc(lua_State *param_1)

{
  int iVar1;
  ActionTimeline *this;
  
  this = (ActionTimeline *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocostudio::timeline::ActionTimeline::clearFrameEventCallFunc(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:clearFrameEventCallFunc",iVar1,0);
  }
                    /* try { // try from 0094791c to 00a4794f has its CatchHandler @ 00947a1c */
  return iVar1 == 0;
}

