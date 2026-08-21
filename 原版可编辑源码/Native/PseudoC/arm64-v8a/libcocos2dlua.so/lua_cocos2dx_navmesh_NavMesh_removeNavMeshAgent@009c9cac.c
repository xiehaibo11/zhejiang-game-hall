
/* lua_cocos2dx_navmesh_NavMesh_removeNavMeshAgent(lua_State*) */

undefined4 lua_cocos2dx_navmesh_NavMesh_removeNavMeshAgent(lua_State *param_1)

{
  int iVar1;
  NavMesh *this;
  ulong uVar2;
  NavMeshAgent *pNVar3;
  
  this = (NavMesh *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.NavMeshAgent",0), (uVar2 & 1) != 0)) {
      pNVar3 = (NavMeshAgent *)tolua_tousertype(param_1,2,0);
      cocos2d::NavMesh::removeNavMeshAgent(this,pNVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,&DAT_012ef8c0,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.NavMesh:removeNavMeshAgent",iVar1 + -1,1);
  }
  return 0;
}

