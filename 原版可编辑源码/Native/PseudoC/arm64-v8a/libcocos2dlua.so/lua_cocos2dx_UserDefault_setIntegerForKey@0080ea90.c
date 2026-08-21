
/* lua_cocos2dx_UserDefault_setIntegerForKey(lua_State*) */

bool lua_cocos2dx_UserDefault_setIntegerForKey(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  bool bVar7;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 2) {
    local_60 = 0;
    local_58 = (void *)0x0;
    local_68 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_68,"cc.UserDefault:setIntegerForKey");
    pvVar1 = (void *)((ulong)&local_68 | 1);
    if ((local_68 & 1) != 0) {
      pvVar1 = local_58;
    }
    uVar5 = luaval_to_int32(param_1,3,&local_4c,"cc.UserDefault:setIntegerForKey");
    bVar7 = (uVar4 & uVar5 & 1) == 0;
    if (bVar7) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_UserDefault_setIntegerForKey\'",0);
    }
    else {
      (**(code **)(*plVar6 + 0x38))(plVar6,pvVar1,local_4c);
      lua_settop(param_1,1);
    }
    bVar7 = !bVar7;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.UserDefault:setIntegerForKey",iVar3 + -1,2);
    bVar7 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

