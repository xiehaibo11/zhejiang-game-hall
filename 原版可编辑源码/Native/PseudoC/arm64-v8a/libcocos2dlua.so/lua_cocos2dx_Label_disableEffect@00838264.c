
/* lua_cocos2dx_Label_disableEffect(lua_State*) */

undefined4 lua_cocos2dx_Label_disableEffect(lua_State *param_1)

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
  if (iVar2 + -1 == 0) {
    (**(code **)(*plVar3 + 0x5b8))(plVar3);
  }
  else {
    if ((iVar2 != 2) ||
       (uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.Label:disableEffect"), (uVar4 & 1) == 0)) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Label:disableEffect",iVar2 + -1,0);
      uVar5 = 0;
      goto LAB_0083832c;
    }
    (**(code **)(*plVar3 + 0x5c0))(plVar3,local_3c);
  }
  uVar5 = 1;
  lua_settop(param_1,1);
LAB_0083832c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

