
/* lua_cocos2dx_navmesh_NavMeshAgent_syncToNode(lua_State*) */

bool lua_cocos2dx_navmesh_NavMeshAgent_syncToNode(lua_State *param_1)

{
  int iVar1;
  NavMeshAgent *this;
  
  this = (NavMeshAgent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::NavMeshAgent::syncToNode(this);
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 009c79b0 with catch @ 009c7a98 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012eee90,
               iVar1,0);
  }
  return iVar1 == 0;
}

