
/* lua_cocos2dx_studio_ActionTimelineCache_purge(lua_State*) */

bool lua_cocos2dx_studio_ActionTimelineCache_purge(lua_State *param_1)

{
  int iVar1;
  ActionTimelineCache *this;
  
                    /* try { // try from 0093eba8 to 00a3ebdb has its CatchHandler @ 0093ec2c */
  this = (ActionTimelineCache *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocostudio::timeline::ActionTimelineCache::purge(this);
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 0093ebdc to 00a3ec77 has its CatchHandler @ 0093ea14 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimelineCache:purge",iVar1,0);
  }
  return iVar1 == 0;
}

