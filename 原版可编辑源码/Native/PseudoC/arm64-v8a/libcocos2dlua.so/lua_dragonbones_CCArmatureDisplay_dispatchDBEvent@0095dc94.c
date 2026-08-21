
/* lua_dragonbones_CCArmatureDisplay_dispatchDBEvent(lua_State*) */

undefined4 lua_dragonbones_CCArmatureDisplay_dispatchDBEvent(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_50,"db.CCArmatureDisplay:dispatchDBEvent");
    if ((((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
        (uVar5 = luaval_is_usertype(param_1,3,"db.EventObject",0), (uVar5 & 1) == 0)) ||
       (uVar6 = tolua_tousertype(param_1,3,0), (uVar4 & 1) == 0)) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_CCArmatureDisplay_dispatchDBEvent\'"
                  ,0);
      uVar7 = 0;
    }
    else {
      (**(code **)(*plVar3 + 0x558))(plVar3,local_50,uVar6);
      uVar7 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d3f84,
               iVar2 + -1,2);
    uVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

