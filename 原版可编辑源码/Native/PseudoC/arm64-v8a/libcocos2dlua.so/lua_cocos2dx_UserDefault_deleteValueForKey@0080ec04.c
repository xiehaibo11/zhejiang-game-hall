
/* lua_cocos2dx_UserDefault_deleteValueForKey(lua_State*) */

undefined4 lua_cocos2dx_UserDefault_deleteValueForKey(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.UserDefault:deleteValueForKey");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_UserDefault_deleteValueForKey\'",0);
      uVar6 = 0;
    }
    else {
      pvVar1 = (void *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pvVar1 = local_40;
      }
      (**(code **)(*plVar4 + 0x68))(plVar4,pvVar1);
      uVar6 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.UserDefault:deleteValueForKey",iVar3 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

