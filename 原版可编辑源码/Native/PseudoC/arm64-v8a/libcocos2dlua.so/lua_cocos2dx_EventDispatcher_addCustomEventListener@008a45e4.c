
/* lua_cocos2dx_EventDispatcher_addCustomEventListener(lua_State*) */

undefined4 lua_cocos2dx_EventDispatcher_addCustomEventListener(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  EventDispatcher *this;
  ulong uVar4;
  void *pvVar5;
  code *pcVar6;
  undefined4 uVar7;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (EventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventDispatcher:addCustomEventListener",iVar2 + -1,2);
    uVar7 = 0;
    goto LAB_008a4790;
  }
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  uVar4 = luaval_to_std_string
                    (param_1,2,(basic_string *)&local_98,"cc.EventDispatcher:addCustomEventListener"
                    );
  luaL_checktype(param_1,3,6);
  lua_pushvalue(param_1,3);
  uVar3 = luaL_ref(param_1,0xffffd8f0);
  if ((uVar4 & 1) == 0) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_EventDispatcher_addCustomEventListener\'"
                ,0);
    uVar7 = 0;
    if ((param_1 != (lua_State *)0x0) && (uVar3 < 0xfffffffe)) {
      luaL_unref(param_1,0xffffd8f0,uVar3);
      uVar7 = 0;
    }
  }
  else {
    local_60 = (long *)0x0;
    local_60 = operator_new(0x18);
    *(uint *)(local_60 + 2) = uVar3;
    *local_60 = (long)&PTR____func_0169a7a0;
    local_60[1] = (long)param_1;
    pvVar5 = (void *)cocos2d::EventDispatcher::addCustomEventListener
                               (this,(basic_string *)&local_98,(function *)alStack_80);
    if (alStack_80 == local_60) {
      pcVar6 = *(code **)(*local_60 + 0x20);
LAB_008a474c:
      (*pcVar6)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar6 = *(code **)(*local_60 + 0x28);
      goto LAB_008a474c;
    }
    if (pvVar5 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                 "cc.EventListenerCustom");
    }
    uVar7 = 1;
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
LAB_008a4790:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

