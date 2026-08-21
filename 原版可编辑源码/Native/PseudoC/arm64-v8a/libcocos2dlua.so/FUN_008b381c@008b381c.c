
undefined8 FUN_008b381c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ScriptHandlerMgr *pSVar5;
  undefined8 uVar6;
  code *pcVar7;
  double dVar8;
  undefined **local_70;
  long lStack_68;
  undefined8 local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (lua_State *)0x0) goto switchD_008b38b0_default;
  lVar4 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.EventListenerTouchAllAtOnce:registerScriptHandler",iVar2 + -1,2);
    goto switchD_008b38b0_default;
  }
  uVar3 = toluafix_ref_function(param_1,2,0);
  dVar8 = (double)tolua_tonumber(0,param_1,3);
  switch((int)dVar8) {
  case 0x2c:
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,0x2c);
    local_70 = &PTR_FUN_01699de0;
    local_60 = 0x2c;
    lStack_68 = lVar4;
    local_50 = (long *)&local_70;
    FUN_008ae5c8(&local_70,lVar4 + 0xa0);
    if (&local_70 == (undefined ***)local_50) {
      (**(code **)(*local_50 + 0x20))();
    }
    else if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x28))();
    }
    goto switchD_008b38b0_default;
  case 0x2d:
    local_70 = &PTR_FUN_01699e60;
    local_60 = 0x2d;
    lStack_68 = lVar4;
    local_50 = (long *)&local_70;
    FUN_008ae5c8(&local_70,lVar4 + 0xd0);
    if (&local_70 == (undefined ***)local_50) {
      pcVar7 = *(code **)(*local_50 + 0x20);
LAB_008b3a44:
      (*pcVar7)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar7 = *(code **)(*local_50 + 0x28);
      goto LAB_008b3a44;
    }
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    uVar6 = 0x2d;
    break;
  case 0x2e:
    local_70 = &PTR_FUN_01699ee0;
    local_60 = 0x2e;
    lStack_68 = lVar4;
    local_50 = (long *)&local_70;
    FUN_008ae5c8(&local_70,lVar4 + 0x100);
    if (&local_70 == (undefined ***)local_50) {
      pcVar7 = *(code **)(*local_50 + 0x20);
LAB_008b3a14:
      (*pcVar7)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar7 = *(code **)(*local_50 + 0x28);
      goto LAB_008b3a14;
    }
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    uVar6 = 0x2e;
    break;
  case 0x2f:
    local_70 = &PTR_FUN_01699f60;
    local_60 = 0x2f;
    lStack_68 = lVar4;
    local_50 = (long *)&local_70;
    FUN_008ae5c8(&local_70,lVar4 + 0x130);
    if (&local_70 == (undefined ***)local_50) {
      pcVar7 = *(code **)(*local_50 + 0x20);
LAB_008b3a2c:
      (*pcVar7)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar7 = *(code **)(*local_50 + 0x28);
      goto LAB_008b3a2c;
    }
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    uVar6 = 0x2f;
    break;
  default:
    goto switchD_008b38b0_default;
  }
  cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,uVar6);
switchD_008b38b0_default:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

