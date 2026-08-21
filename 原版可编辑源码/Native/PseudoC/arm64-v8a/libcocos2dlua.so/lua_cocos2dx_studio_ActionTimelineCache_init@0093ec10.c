
/* lua_cocos2dx_studio_ActionTimelineCache_init(lua_State*) */

bool lua_cocos2dx_studio_ActionTimelineCache_init(lua_State *param_1)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 0093eb90 with catch @ 0093ec28 */
  tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0093eba8 with catch @ 0093ec2c */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocostudio::timeline::ActionTimelineCache::init();
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimelineCache:init",iVar1,0);
                    /* catch() { ... } // from try @ 0093eb5c with catch @ 0093ec5c */
  }
  return iVar1 == 0;
}

