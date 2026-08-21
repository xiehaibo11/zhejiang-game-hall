
/* lua_cocos2dx_UserDefault_getStringForKey(lua_State*) */

void lua_cocos2dx_UserDefault_getStringForKey(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  byte local_90 [8];
  ulong local_88;
  void *local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 2) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"cc.UserDefault:getStringForKey");
    if ((uVar5 & 1) != 0) {
      cocos2d::UserDefault::getStringForKey((char *)plVar4);
      uVar5 = local_78 >> 1 & 0x7f;
      pvVar1 = (void *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        uVar5 = local_70;
        pvVar1 = local_68;
      }
      lua_pushlstring(param_1,pvVar1,uVar5);
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
LAB_0080f5f8:
      uVar6 = 1;
      goto LAB_0080f630;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else if (iVar3 == 3) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"cc.UserDefault:getStringForKey");
    pvVar1 = (void *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pvVar1 = local_50;
    }
    if ((uVar5 & 1) == 0) {
      iVar7 = 2;
    }
    else {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_78,"cc.UserDefault:getStringForKey");
      if ((uVar5 & 1) == 0) {
        iVar7 = 2;
      }
      else {
        (**(code **)(*plVar4 + 0x20))(local_90,plVar4,pvVar1,&local_78);
        uVar5 = (ulong)(local_90[0] >> 1);
        pvVar1 = (void *)((ulong)local_90 | 1);
        if ((local_90[0] & 1) != 0) {
          uVar5 = local_88;
          pvVar1 = local_80;
        }
        lua_pushlstring(param_1,pvVar1,uVar5);
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
        iVar7 = 1;
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar7 != 2) goto LAB_0080f5f8;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.UserDefault:getStringForKey",iVar3 + -1,1);
  uVar6 = 0;
LAB_0080f630:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

