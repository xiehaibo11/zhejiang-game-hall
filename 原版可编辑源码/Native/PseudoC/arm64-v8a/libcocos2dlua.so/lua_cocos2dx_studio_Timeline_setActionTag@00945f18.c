
/* lua_cocos2dx_studio_Timeline_setActionTag(lua_State*) */

undefined4 lua_cocos2dx_studio_Timeline_setActionTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccs.Timeline:setActionTag");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00945fdc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_Timeline_setActionTag\'",0);
  }
  else {
                    /* try { // try from 00945fb4 to 00a45fe7 has its CatchHandler @ 009460b4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Timeline:setActionTag",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00945fdc:
                    /* try { // try from 00945fe8 to 00a45ffb has its CatchHandler @ 00946080 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00946000 to 00a46033 has its CatchHandler @ 00946084 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

