
undefined8 FUN_008ba934(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ScriptHandlerMgr *pSVar5;
  double dVar6;
  undefined **local_70;
  undefined4 local_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (lua_State *)0x0) {
    lVar4 = tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 2) {
      uVar3 = toluafix_ref_function(param_1,2,0);
      dVar6 = (double)tolua_tonumber(0,param_1,3);
      switch((int)dVar6) {
      case 0x35:
        pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,0x35);
        local_70 = &PTR_FUN_0169a930;
        local_68 = uVar3;
        local_50 = (long *)&local_70;
        FUN_008bac30(&local_70,lVar4 + 0xd0);
        break;
      case 0x36:
        pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,0x36);
        local_70 = &PTR_FUN_0169a9c0;
        local_68 = uVar3;
        local_50 = (long *)&local_70;
        FUN_008baeb8(&local_70,lVar4 + 0x100);
        break;
      case 0x37:
        pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,0x37);
        local_70 = &PTR_FUN_0169aa50;
        local_68 = uVar3;
        local_50 = (long *)&local_70;
        FUN_008bb130(&local_70,lVar4 + 0x130);
        break;
      case 0x38:
        pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,0x38);
        local_70 = &PTR_FUN_0169aae0;
        local_68 = uVar3;
        local_50 = (long *)&local_70;
        FUN_008bb390(&local_70,lVar4 + 0x160);
        break;
      default:
        goto switchD_008ba9c8_default;
      }
      if (&local_70 == (undefined ***)local_50) {
        (**(code **)(*local_50 + 0x20))();
      }
      else if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x28))();
      }
    }
    else {
      luaL_error(param_1,
                 "\'registerScriptHandler\' has wrong number of arguments: %d, was expecting %d\n",
                 iVar2 + -1,2);
    }
  }
switchD_008ba9c8_default:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

