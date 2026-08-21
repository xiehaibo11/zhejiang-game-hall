
/* lua_cocos2dx_studio_ActionTimelineData_init(lua_State*) */

void lua_cocos2dx_studio_ActionTimelineData_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar5 = luaval_to_int32(param_1,2,&local_3c,"ccs.ActionTimelineData:init");
    if ((uVar5 & 1) != 0) {
                    /* try { // try from 00946c1c to 00a46ddf has its CatchHandler @ 00946c1c
                       catch() { ... } // from try @ 00946c1c with catch @ 00946c1c
                       catch() { ... } // from try @ 00946e3c with catch @ 00946c1c
                       catch() { ... } // from try @ 00946ecc with catch @ 00946c1c */
      uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,local_3c);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_00946c78;
    }
    tolua_error(param_1,&DAT_012cf879,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cf85d,
               iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_00946c78:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

