
/* lua_cocos2dx_navmesh_NavMeshAgent_getCurrentOffMeshLinkData(lua_State*) */

void lua_cocos2dx_navmesh_NavMeshAgent_getCurrentOffMeshLinkData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  OffMeshLinkData aOStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    cocos2d::NavMeshAgent::getCurrentOffMeshLinkData();
    offmeshlinkdata_to_luaval(param_1,aOStack_50);
  }
  else {
                    /* try { // try from 009c8254 to 00ac825b has its CatchHandler @ 009c82e0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.NavMeshAgent:getCurrentOffMeshLinkData",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009c8290 to 00ac8293 has its CatchHandler @ 009c82e4 */
                    /* try { // try from 009c8294 to 00ac82ff has its CatchHandler @ 009c7fb8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

