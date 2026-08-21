
/* lua_cocos2dx_navmesh_NavMeshAgent_pause(lua_State*) */

bool lua_cocos2dx_navmesh_NavMeshAgent_pause(lua_State *param_1)

{
  int iVar1;
  NavMeshAgent *this;
  
  this = (NavMeshAgent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::NavMeshAgent::pause(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.NavMeshAgent:pause",iVar1,0);
  }
                    /* try { // try from 009c7fb8 to 00ac817f has its CatchHandler @ 009c7fb8
                       catch() { ... } // from try @ 009c7fb8 with catch @ 009c7fb8
                       catch() { ... } // from try @ 009c8294 with catch @ 009c7fb8 */
  return iVar1 == 0;
}

