
/* lua_cocos2dx_studio_ContourData_addVertex(lua_State*) */

undefined4 lua_cocos2dx_studio_ContourData_addVertex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"ccs.ContourData:addVertex");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
                    /* try { // try from 0092f3bc to 00a2f407 has its CatchHandler @ 0092f3bc
                       catch() { ... } // from try @ 0092f3bc with catch @ 0092f3bc
                       catch() { ... } // from try @ 0092f430 with catch @ 0092f3bc */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0092f408;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ContourData_addVertex\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ContourData:addVertex",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0092f408:
                    /* try { // try from 0092f408 to 00a2f40b has its CatchHandler @ 0092f48c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0092f42c to 00a2f42f has its CatchHandler @ 0092f47c */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0092f430 to 00a2f49f has its CatchHandler @ 0092f3bc */
  __stack_chk_fail();
}

