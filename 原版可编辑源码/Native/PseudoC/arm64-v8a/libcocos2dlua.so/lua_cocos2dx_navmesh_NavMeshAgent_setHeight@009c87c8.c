
/* lua_cocos2dx_navmesh_NavMeshAgent_setHeight(lua_State*) */

undefined4 lua_cocos2dx_navmesh_NavMeshAgent_setHeight(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  NavMeshAgent *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009c87e0 to 00ac87e7 has its CatchHandler @ 009c887c */
  local_38 = *(long *)(lVar1 + 0x28);
  this = (NavMeshAgent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.NavMeshAgent:setHeight");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 009c882c to 00ac882f has its CatchHandler @ 009c8880 */
                    /* try { // try from 009c8830 to 00ac889b has its CatchHandler @ 009c8660 */
      cocos2d::NavMeshAgent::setHeight(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009c8888;
    }
                    /* catch() { ... } // from try @ 009c87e0 with catch @ 009c887c */
                    /* catch() { ... } // from try @ 009c8718 with catch @ 009c8880
                       catch() { ... } // from try @ 009c882c with catch @ 009c8880 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_navmesh_NavMeshAgent_setHeight\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.NavMeshAgent:setHeight",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009c8888:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

