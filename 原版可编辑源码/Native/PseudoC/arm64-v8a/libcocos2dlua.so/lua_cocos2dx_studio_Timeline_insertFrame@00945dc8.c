
/* lua_cocos2dx_studio_Timeline_insertFrame(lua_State*) */

undefined4 lua_cocos2dx_studio_Timeline_insertFrame(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00945e04 to 00a45e07 has its CatchHandler @ 00945e58 */
                    /* try { // try from 00945e08 to 00a45e6b has its CatchHandler @ 00945db8 */
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"ccs.Frame",0), (uVar4 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"ccs.Timeline:insertFrame");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
                    /* catch() { ... } // from try @ 00945e04 with catch @ 00945e58 */
      uVar4 = luaval_to_int32(param_1,3,&local_3c,"ccs.Timeline:insertFrame");
                    /* try { // try from 00945e6c to 00a45fb3 has its CatchHandler @ 00945e6c
                       catch() { ... } // from try @ 00945e6c with catch @ 00945e6c
                       catch() { ... } // from try @ 00946034 with catch @ 00945e6c */
      if ((uVar4 & 1) != 0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,uVar5,local_3c);
        uVar6 = 1;
        lua_settop(param_1,1);
        goto LAB_00945eec;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_Timeline_insertFrame\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Timeline:insertFrame",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00945eec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

