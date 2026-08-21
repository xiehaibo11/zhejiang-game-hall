
/* lua_cocos2dx_navmesh_NavMeshAgent_getHeight(lua_State*) */

bool lua_cocos2dx_navmesh_NavMeshAgent_getHeight(lua_State *param_1)

{
  int iVar1;
  NavMeshAgent *this;
  float fVar2;
  
  this = (NavMeshAgent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::NavMeshAgent::getHeight(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.NavMeshAgent:getHeight",iVar1,0);
  }
                    /* try { // try from 009c8180 to 00ac81ff has its CatchHandler @ 009c82e4 */
  return iVar1 == 0;
}

