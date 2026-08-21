
/* lua_cocos2dx_studio_ActionTimelineCache_getInstance(lua_State*) */

bool lua_cocos2dx_studio_ActionTimelineCache_getInstance(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocostudio::timeline::ActionTimelineCache::getInstance();
                    /* try { // try from 00920b40 to 00a20b73 has its CatchHandler @ 00920c40 */
    tolua_pushusertype(param_1,uVar2,"ccs.ActionTimelineCache");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.ActionTimelineCache:getInstance",iVar1,0);
  }
  return iVar1 == 0;
}

