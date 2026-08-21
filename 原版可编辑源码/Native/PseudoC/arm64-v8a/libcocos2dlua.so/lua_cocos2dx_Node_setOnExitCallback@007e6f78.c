
/* lua_cocos2dx_Node_setOnExitCallback(lua_State*) */

void lua_cocos2dx_Node_setOnExitCallback(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long alStack_a0 [4];
  long *local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:setOnExitCallback",iVar2 + -1,1);
    uVar4 = 0;
    goto LAB_007e7060;
  }
  local_80 = (long *)0x0;
  local_50 = (long *)0x0;
  FUN_008820fc(alStack_70,lVar3 + 0x260);
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_007e7020:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_007e7020;
  }
  lua_settop(param_1,1);
  if (alStack_a0 == local_80) {
    pcVar5 = *(code **)(*local_80 + 0x20);
LAB_007e7058:
    (*pcVar5)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar5 = *(code **)(*local_80 + 0x28);
    goto LAB_007e7058;
  }
  uVar4 = 1;
LAB_007e7060:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

