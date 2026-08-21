
undefined8 FUN_008ebd3c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Transition *pTVar4;
  ScriptHandlerMgr *this;
  code *pcVar5;
  ulong local_98 [2];
  void *local_88;
  undefined **local_80;
  int local_78;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pTVar4 = (Transition *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Transition:setHook",iVar2 + -1,2);
    goto LAB_008ebe54;
  }
  local_98[1] = 0;
  local_88 = (void *)0x0;
  local_98[0] = 0;
  uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_98,"fairygui.Transition:setHook");
  iVar2 = toluafix_ref_function(param_1,3,0);
  if ((iVar2 == 0) || (((uVar3 ^ 1) & 1) != 0)) {
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_Transition_setHook\'",0);
  }
  else {
    local_80 = &PTR_FUN_0169b748;
    local_78 = iVar2;
    local_60 = &local_80;
    fairygui::Transition::setHook(pTVar4,local_98,&local_80);
    if (&local_80 == local_60) {
      pcVar5 = (code *)(*local_60)[4];
LAB_008ebe88:
      (*pcVar5)();
    }
    else if (local_60 != (undefined ***)0x0) {
      pcVar5 = (code *)(*local_60)[5];
      goto LAB_008ebe88;
    }
    this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this,pTVar4,iVar2);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
LAB_008ebe54:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

