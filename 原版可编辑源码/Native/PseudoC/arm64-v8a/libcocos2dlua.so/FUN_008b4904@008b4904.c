
undefined8 FUN_008b4904(lua_State *param_1)

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
  if (param_1 == (lua_State *)0x0) goto switchD_008b4998_default;
  lVar4 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
               "cc.EventListenerMouse:registerScriptHandler",iVar2 + -1,2);
    goto switchD_008b4998_default;
  }
  uVar3 = toluafix_ref_function(param_1,2,0);
  dVar8 = (double)tolua_tonumber(0,param_1,3);
  switch((int)dVar8) {
  case 0x30:
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,0x30);
    local_70 = &PTR_FUN_0169a1e0;
    local_60 = 0x30;
    lStack_68 = lVar4;
    local_50 = (long *)&local_70;
    FUN_008b4d3c(&local_70,lVar4 + 0xa0);
    if (&local_70 == (undefined ***)local_50) {
      (**(code **)(*local_50 + 0x20))();
    }
    else if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x28))();
    }
    goto switchD_008b4998_default;
  case 0x31:
    local_70 = &PTR_FUN_0169a270;
    local_60 = 0x31;
    lStack_68 = lVar4;
    local_50 = (long *)&local_70;
    FUN_008b4d3c(&local_70,lVar4 + 0xd0);
    if (&local_70 == (undefined ***)local_50) {
      pcVar7 = *(code **)(*local_50 + 0x20);
LAB_008b4b2c:
      (*pcVar7)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar7 = *(code **)(*local_50 + 0x28);
      goto LAB_008b4b2c;
    }
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    uVar6 = 0x31;
    break;
  case 0x32:
    local_70 = &PTR_FUN_0169a2f0;
    local_60 = 0x32;
    lStack_68 = lVar4;
    local_50 = (long *)&local_70;
    FUN_008b4d3c(&local_70,lVar4 + 0x100);
    if (&local_70 == (undefined ***)local_50) {
      pcVar7 = *(code **)(*local_50 + 0x20);
LAB_008b4afc:
      (*pcVar7)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar7 = *(code **)(*local_50 + 0x28);
      goto LAB_008b4afc;
    }
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    uVar6 = 0x32;
    break;
  case 0x33:
    local_70 = &PTR_FUN_0169a370;
    local_60 = 0x33;
    lStack_68 = lVar4;
    local_50 = (long *)&local_70;
    FUN_008b4d3c(&local_70,lVar4 + 0x130);
    if (&local_70 == (undefined ***)local_50) {
      pcVar7 = *(code **)(*local_50 + 0x20);
LAB_008b4b14:
      (*pcVar7)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar7 = *(code **)(*local_50 + 0x28);
      goto LAB_008b4b14;
    }
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    uVar6 = 0x33;
    break;
  default:
    goto switchD_008b4998_default;
  }
  cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,uVar6);
switchD_008b4998_default:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

