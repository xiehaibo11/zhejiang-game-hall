
/* lua_cocos2dx_UserDefault_getDoubleForKey(lua_State*) */

void lua_cocos2dx_UserDefault_getDoubleForKey(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  double local_68;
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
                      (param_1,2,(basic_string *)&local_60,"cc.UserDefault:getDoubleForKey");
    if ((uVar5 & 1) != 0) {
      cocos2d::UserDefault::getDoubleForKey((char *)plVar4);
      tolua_pushnumber(param_1);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
LAB_0080fc70:
      uVar6 = 1;
      goto LAB_0080fca8;
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
                      (param_1,2,(basic_string *)&local_60,"cc.UserDefault:getDoubleForKey");
    pvVar1 = (void *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pvVar1 = local_50;
    }
    if ((uVar5 & 1) == 0) {
      iVar7 = 2;
    }
    else {
      uVar5 = luaval_to_number(param_1,3,&local_68,"cc.UserDefault:getDoubleForKey");
      if ((uVar5 & 1) == 0) {
        iVar7 = 2;
      }
      else {
        (**(code **)(*plVar4 + 0x18))(local_68,plVar4,pvVar1);
        tolua_pushnumber(param_1);
        iVar7 = 1;
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar7 != 2) goto LAB_0080fc70;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.UserDefault:getDoubleForKey",iVar3 + -1,1);
  uVar6 = 0;
LAB_0080fca8:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

