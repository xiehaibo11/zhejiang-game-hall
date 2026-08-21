
/* lua_cocos2dx_EventDispatcher_setPriority(lua_State*) */

undefined4 lua_cocos2dx_EventDispatcher_setPriority(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  EventDispatcher *this;
  ulong uVar3;
  EventListener *pEVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (EventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.EventListener",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"cc.EventDispatcher:setPriority");
    }
    else {
      pEVar4 = (EventListener *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"cc.EventDispatcher:setPriority");
      if ((uVar3 & 1) != 0) {
        cocos2d::EventDispatcher::setPriority(this,pEVar4,local_3c);
        uVar5 = 1;
        lua_settop(param_1,1);
        goto LAB_00817570;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_EventDispatcher_setPriority\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventDispatcher:setPriority",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_00817570:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

