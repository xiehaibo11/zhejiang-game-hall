
/* lua_cocos2dx_UserDefault_setStringForKey(lua_State*) */

bool lua_cocos2dx_UserDefault_setStringForKey(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  bool bVar7;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 2) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_78,"cc.UserDefault:setStringForKey");
    pvVar1 = (void *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      pvVar1 = local_68;
    }
    uVar5 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_60,"cc.UserDefault:setStringForKey");
    bVar7 = (uVar4 & uVar5 & 1) == 0;
    if (bVar7) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_UserDefault_setStringForKey\'",0);
    }
    else {
      (**(code **)(*plVar6 + 0x50))(plVar6,pvVar1,&local_60);
      lua_settop(param_1,1);
    }
    bVar7 = !bVar7;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.UserDefault:setStringForKey",iVar3 + -1,2);
    bVar7 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

