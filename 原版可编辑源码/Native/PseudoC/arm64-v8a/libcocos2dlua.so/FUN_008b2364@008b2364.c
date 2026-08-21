
undefined8 FUN_008b2364(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ScriptHandlerMgr *pSVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined **local_70;
  long lStack_68;
  undefined8 local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (lua_State *)0x0) {
    lVar4 = tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 2) {
      uVar3 = toluafix_ref_function(param_1,2,0);
      dVar8 = (double)tolua_tonumber(0,param_1,3);
      if ((int)dVar8 == 0x27) {
        pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        uVar7 = 0x27;
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,0x27);
        lVar6 = lVar4 + 0xd0;
        local_70 = &PTR_FUN_01699860;
      }
      else {
        if ((int)dVar8 != 0x26) goto LAB_008b2498;
        pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        uVar7 = 0x26;
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,0x26);
        lVar6 = lVar4 + 0xa0;
        local_70 = &PTR_FUN_016997e0;
      }
      lStack_68 = lVar4;
      local_60 = uVar7;
      local_50 = (long *)&local_70;
      FUN_008af1b8(&local_70,lVar6);
      if (&local_70 == (undefined ***)local_50) {
        (**(code **)(*local_50 + 0x20))();
      }
      else if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x28))();
      }
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.EventListenerKeyboard:registerScriptHandler",iVar2 + -1,2);
    }
  }
LAB_008b2498:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

