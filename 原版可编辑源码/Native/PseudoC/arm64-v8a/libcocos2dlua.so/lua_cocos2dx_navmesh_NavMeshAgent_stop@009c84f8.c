
/* lua_cocos2dx_navmesh_NavMeshAgent_stop(lua_State*) */

bool lua_cocos2dx_navmesh_NavMeshAgent_stop(lua_State *param_1)

{
  int iVar1;
  NavMeshAgent *this;
  
  this = (NavMeshAgent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::NavMeshAgent::stop(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.NavMeshAgent:stop",iVar1,0);
  }
  return iVar1 == 0;
}

