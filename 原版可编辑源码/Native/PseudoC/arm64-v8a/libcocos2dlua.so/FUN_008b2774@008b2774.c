
void FUN_008b2774(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ScriptHandlerMgr *pSVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined **local_70;
  long lStack_68;
  undefined8 local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 != 0) && (param_2 != 0)) {
    pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar4,param_1,param_3);
    if (iVar2 != 0) {
      puVar5 = (undefined8 *)cocos2d::ScriptEngineManager::getInstance();
      uVar3 = (**(code **)(*(long *)*puVar5 + 0x58))((long *)*puVar5,iVar2);
      pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,param_2,uVar3,param_3);
      if (param_3 == 0x27) {
        local_70 = &PTR_FUN_01699960;
        local_60 = 0x27;
        lVar6 = param_2 + 0xd0;
      }
      else {
        if (param_3 != 0x26) goto LAB_008b2868;
        local_70 = &PTR_FUN_016998e0;
        local_60 = 0x26;
        lVar6 = param_2 + 0xa0;
      }
      lStack_68 = param_2;
      local_50 = (long *)&local_70;
      FUN_008af1b8(&local_70,lVar6);
      if (&local_70 == (undefined ***)local_50) {
        pcVar7 = *(code **)(*local_50 + 0x20);
      }
      else {
        if (local_50 == (long *)0x0) goto LAB_008b2868;
        pcVar7 = *(code **)(*local_50 + 0x28);
      }
      (*pcVar7)();
    }
  }
LAB_008b2868:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

