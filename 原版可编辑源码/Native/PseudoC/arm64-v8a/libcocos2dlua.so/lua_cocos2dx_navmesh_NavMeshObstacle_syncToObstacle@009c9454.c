
/* lua_cocos2dx_navmesh_NavMeshObstacle_syncToObstacle(lua_State*) */

bool lua_cocos2dx_navmesh_NavMeshObstacle_syncToObstacle(lua_State *param_1)

{
  int iVar1;
  NavMeshObstacle *this;
  
  this = (NavMeshObstacle *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::NavMeshObstacle::syncToObstacle(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.NavMeshObstacle:syncToObstacle",iVar1,0);
  }
  return iVar1 == 0;
}

