
void FUN_008b3244(long param_1,long param_2,undefined4 param_3)

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
  if ((param_1 == 0) || (param_2 == 0)) goto switchD_008b32e0_default;
  pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar4,param_1,param_3);
  if (iVar2 == 0) goto switchD_008b32e0_default;
  puVar5 = (undefined8 *)cocos2d::ScriptEngineManager::getInstance();
  uVar3 = (**(code **)(*(long *)*puVar5 + 0x58))((long *)*puVar5,iVar2);
  pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,param_2,uVar3,param_3);
  switch(param_3) {
  case 0x28:
    local_70 = &PTR_FUN_01699be0;
    local_60 = 0x28;
    lStack_68 = param_2;
    local_50 = (long *)&local_70;
    FUN_008aeb48(&local_70,param_2 + 0xa0);
    goto LAB_008b3368;
  case 0x29:
    local_70 = &PTR_FUN_01699c60;
    local_60 = 0x29;
    lVar6 = param_2 + 0xd0;
    break;
  case 0x2a:
    local_70 = &PTR_FUN_01699ce0;
    local_60 = 0x2a;
    lVar6 = param_2 + 0x100;
    break;
  case 0x2b:
    local_70 = &PTR_FUN_01699d60;
    local_60 = 0x2b;
    lVar6 = param_2 + 0x130;
    break;
  default:
    goto switchD_008b32e0_default;
  }
  lStack_68 = param_2;
  local_50 = (long *)&local_70;
  FUN_008aedb8(&local_70,lVar6);
LAB_008b3368:
  if (&local_70 == (undefined ***)local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto switchD_008b32e0_default;
    pcVar7 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar7)();
switchD_008b32e0_default:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

