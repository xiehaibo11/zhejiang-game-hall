
/* lua_cocos2dx_navmesh_NavMeshAgent_setMaxSpeed(lua_State*) */

undefined4 lua_cocos2dx_navmesh_NavMeshAgent_setMaxSpeed(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  NavMeshAgent *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 009c79b8 with catch @ 009c7974 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (NavMeshAgent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009c79b0 to 00ac79b7 has its CatchHandler @ 009c7a98 */
                    /* try { // try from 009c79b8 to 00ac7ab3 has its CatchHandler @ 009c7974 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.NavMeshAgent:setMaxSpeed");
    if ((uVar3 & 1) != 0) {
      cocos2d::NavMeshAgent::setMaxSpeed(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009c7a34;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_navmesh_NavMeshAgent_setMaxSpeed\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.NavMeshAgent:setMaxSpeed",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009c7a34:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

