
/* lua_cocos2dx_navmesh_NavMeshAgent_getCurrentVelocity(lua_State*) */

void lua_cocos2dx_navmesh_NavMeshAgent_getCurrentVelocity(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  NavMeshAgent *this;
  undefined4 local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (NavMeshAgent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    local_48[0] = cocos2d::NavMeshAgent::getCurrentVelocity(this);
    vec3_to_luaval(param_1,(Vec3 *)local_48);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.NavMeshAgent:getCurrentVelocity",iVar2,0);
  }
                    /* try { // try from 009c7d4c to 00ac7d53 has its CatchHandler @ 009c7ea0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009c7d54 to 00ac7ebb has its CatchHandler @ 009c7bf4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

