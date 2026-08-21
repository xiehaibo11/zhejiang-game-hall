
/* cocos2d::LuaEngine::handleTouchEvent(void*) */

undefined4 cocos2d::LuaEngine::handleTouchEvent(void *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ScriptHandlerMgr *pSVar4;
  long *plVar5;
  Director *this;
  undefined4 *in_x1;
  char *pcVar6;
  Touch *this_00;
  undefined4 in_s1;
  undefined4 in_register_00005024;
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((in_x1 == (undefined4 *)0x0) || (*(long *)(in_x1 + 2) == 0)) || (*(long *)(in_x1 + 4) == 0))
  {
switchD_007d09b4_default:
    uVar3 = 0;
  }
  else {
    pSVar4 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar2 = ScriptHandlerMgr::getObjectHandler(pSVar4,*(undefined8 *)(in_x1 + 2),4);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_007d09cc;
    switch(*in_x1) {
    case 0:
      plVar5 = *(long **)((long)param_1 + 8);
      pcVar6 = "began";
      break;
    case 1:
      plVar5 = *(long **)((long)param_1 + 8);
      pcVar6 = "moved";
      break;
    case 2:
      plVar5 = *(long **)((long)param_1 + 8);
      pcVar6 = "ended";
      break;
    case 3:
      plVar5 = *(long **)((long)param_1 + 8);
      pcVar6 = "cancelled";
      break;
    default:
      goto switchD_007d09b4_default;
    }
    (**(code **)(*plVar5 + 0x80))(plVar5,pcVar6);
    this_00 = *(Touch **)(in_x1 + 4);
    if (this_00 == (Touch *)0x0) {
      uVar3 = 0;
    }
    else {
      this = (Director *)Director::getInstance();
      local_50[0] = Touch::getLocationInView(this_00);
      Director::convertToGL(this,(Vec2 *)local_50);
      (**(code **)(**(long **)((long)param_1 + 8) + 0x68))();
      (**(code **)(**(long **)((long)param_1 + 8) + 0x68))(CONCAT44(in_register_00005024,in_s1));
      uVar3 = (**(code **)(**(long **)((long)param_1 + 8) + 200))
                        (*(long **)((long)param_1 + 8),iVar2,3);
    }
    (**(code **)(**(long **)((long)param_1 + 8) + 0x58))();
  }
LAB_007d09cc:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

