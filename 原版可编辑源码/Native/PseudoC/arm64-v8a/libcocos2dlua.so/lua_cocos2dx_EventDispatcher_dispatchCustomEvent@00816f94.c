
/* lua_cocos2dx_EventDispatcher_dispatchCustomEvent(lua_State*) */

bool lua_cocos2dx_EventDispatcher_dispatchCustomEvent(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  EventDispatcher *this;
  ulong uVar4;
  bool bVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (EventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    luaval_to_std_string
              (param_1,2,(basic_string *)&local_50,"cc.EventDispatcher:dispatchCustomEvent");
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_EventDispatcher_dispatchCustomEvent\'"
                ,0);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    if (iVar3 == 2) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar4 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_50,
                         "cc.EventDispatcher:dispatchCustomEvent");
      bVar1 = (uVar4 & 1) == 0;
      if (bVar1) {
        tolua_error(param_1,
                    "invalid arguments in function \'lua_cocos2dx_EventDispatcher_dispatchCustomEvent\'"
                    ,0);
      }
      else {
        cocos2d::EventDispatcher::dispatchCustomEvent(this,(basic_string *)&local_50,(void *)0x0);
        lua_settop(param_1,1);
      }
      bVar5 = !bVar1;
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
        bVar5 = !bVar1;
      }
      goto LAB_0081709c;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventDispatcher:dispatchCustomEvent",iVar3 + -1,1);
  }
  bVar5 = false;
LAB_0081709c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

