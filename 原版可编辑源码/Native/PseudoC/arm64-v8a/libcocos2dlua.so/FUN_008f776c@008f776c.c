
undefined8 FUN_008f776c(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  ScriptHandlerMgr *pSVar5;
  code *pcVar6;
  undefined **local_70;
  ulong uStack_68;
  lua_State *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = lua_type(param_1,2);
  plVar2 = DAT_017827e0;
  if (iVar3 == 0) {
    DAT_017827e0 = (long *)0x0;
    if (plVar2 == &fairygui::UIConfig::onMusicCallback) {
      (**(code **)(fairygui::UIConfig::onMusicCallback + 0x20))
                (&fairygui::UIConfig::onMusicCallback);
    }
    else if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar5,fairygui::UIConfig::registerFont,0);
    goto LAB_008f7870;
  }
  uVar4 = toluafix_ref_function(param_1,2,0);
  uStack_68 = (ulong)uVar4;
  local_70 = &PTR_FUN_0169bc78;
  local_60 = param_1;
  local_50 = (long *)&local_70;
  FUN_008f7af0(&local_70,&fairygui::UIConfig::onMusicCallback);
  if (&local_70 == (undefined ***)local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
LAB_008f782c:
    (*pcVar6)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar6 = *(code **)(*local_50 + 0x28);
    goto LAB_008f782c;
  }
  pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,fairygui::UIConfig::registerFont,uVar4,0);
LAB_008f7870:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

