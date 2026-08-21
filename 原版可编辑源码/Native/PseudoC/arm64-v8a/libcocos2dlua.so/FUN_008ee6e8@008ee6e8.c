
undefined8 FUN_008ee6e8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ScriptHandlerMgr *this;
  code *pcVar4;
  undefined **local_70;
  ulong uStack_68;
  lua_State *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = toluafix_ref_function(param_1,2,0);
    this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this,&fairygui::UIObjectFactory::typeinfo,uVar3);
    local_70 = &PTR_FUN_0169bae8;
    uStack_68 = (ulong)uVar3;
    local_60 = param_1;
    local_50 = (long *)&local_70;
    fairygui::UIObjectFactory::setLoaderExtension(&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_008ee7b0;
      pcVar4 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar4)();
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "fairygui.UIObjectFactory:setLoaderExtension",iVar2 + -1,1);
  }
LAB_008ee7b0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

