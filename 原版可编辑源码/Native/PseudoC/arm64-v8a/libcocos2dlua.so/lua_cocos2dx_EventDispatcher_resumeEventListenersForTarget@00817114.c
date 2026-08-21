
/* lua_cocos2dx_EventDispatcher_resumeEventListenersForTarget(lua_State*) */

undefined4 lua_cocos2dx_EventDispatcher_resumeEventListenersForTarget(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  EventDispatcher *this;
  ulong uVar3;
  Node *pNVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (EventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) == 0)) {
      luaval_to_boolean(param_1,3,local_3c,"cc.EventDispatcher:resumeEventListenersForTarget");
    }
    else {
      pNVar4 = (Node *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_boolean(param_1,3,local_3c,
                                "cc.EventDispatcher:resumeEventListenersForTarget");
      if ((uVar3 & 1) != 0) goto LAB_0081721c;
    }
LAB_00817270:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_EventDispatcher_resumeEventListenersForTarget\'"
                ,0);
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) != 0)) {
        pNVar4 = (Node *)tolua_tousertype(param_1,2,0);
        local_3c[0] = false;
LAB_0081721c:
        cocos2d::EventDispatcher::resumeEventListenersForTarget(this,pNVar4,local_3c[0]);
        uVar5 = 1;
        lua_settop(param_1,1);
        goto LAB_00817288;
      }
      goto LAB_00817270;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventDispatcher:resumeEventListenersForTarget",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00817288:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

