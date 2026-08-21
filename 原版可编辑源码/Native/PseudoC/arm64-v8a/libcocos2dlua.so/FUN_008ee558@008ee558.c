
undefined8 FUN_008ee558(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ScriptHandlerMgr *this;
  code *pcVar4;
  ulong local_88 [2];
  void *local_78;
  undefined **local_70;
  ulong uStack_68;
  lua_State *local_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "fairygui.UIObjectFactory:setPackageItemExtension",iVar2 + -1,2);
    goto LAB_008ee654;
  }
  local_88[1] = 0;
  local_78 = (void *)0x0;
  local_88[0] = 0;
  luaval_to_std_string
            (param_1,2,(basic_string *)local_88,"fairygui.UIObjectFactory:setPackageItemExtension");
  uVar3 = toluafix_ref_function(param_1,3,0);
  this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addCustomHandler(this,&fairygui::UIObjectFactory::typeinfo,uVar3);
  local_70 = &PTR_FUN_0169ba58;
  uStack_68 = (ulong)uVar3;
  local_60 = param_1;
  local_50 = &local_70;
  fairygui::UIObjectFactory::setPackageItemExtension(local_88,&local_70);
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
LAB_008ee640:
    (*pcVar4)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar4 = (code *)(*local_50)[5];
    goto LAB_008ee640;
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
LAB_008ee654:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

