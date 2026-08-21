
/* cocos2d::LuaEngine::handleEvent(cocos2d::ScriptHandlerMgr::HandlerType, void*) */

ulong __thiscall cocos2d::LuaEngine::handleEvent(LuaEngine *this,ulong param_2,long *param_3)

{
  int iVar1;
  ScriptHandlerMgr *pSVar2;
  ulong uVar3;
  void *pvVar4;
  long *plVar5;
  
  if ((int)param_2 - 0x15U < 0x1f) {
    uVar3 = param_2 & 0xffffffff;
    switch((int)param_2) {
    default:
      uVar3 = handleTableViewEvent(this,uVar3,param_3);
      return uVar3;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x22:
      break;
    case 0x1f:
    case 0x20:
    case 0x21:
      uVar3 = handleAssetsManagerEvent(this,uVar3,param_3);
      return uVar3;
    case 0x23:
      handleArmatureWrapper(this,param_2,param_3);
      break;
    case 0x24:
      uVar3 = handleEventAcc(this,param_3);
      return uVar3;
    case 0x25:
      if (((param_3 != (long *)0x0) && (*param_3 != 0)) &&
         (pvVar4 = (void *)param_3[1], pvVar4 != (void *)0x0)) {
        pSVar2 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
        iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar2,*param_3,0x25);
        if (iVar1 != 0) {
          toluafix_pushusertype_ccobject
                    (*(lua_State **)(*(long *)(this + 8) + 0x28),*(int *)((long)pvVar4 + 0xc),
                     (int *)((long)pvVar4 + 0x10),pvVar4,"cc.EventCustom");
LAB_007d1720:
          uVar3 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,1);
          (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
          return uVar3 & 0xffffffff;
        }
      }
      break;
    case 0x26:
    case 0x27:
      uVar3 = handleEventKeyboard(this,uVar3,param_3);
      return uVar3;
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
      uVar3 = handleEventTouch(this,uVar3,param_3);
      return uVar3;
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
      uVar3 = handleEventTouches(this,uVar3,param_3);
      return uVar3;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
      if ((((param_3 != (long *)0x0) && (*param_3 != 0)) &&
          (plVar5 = (long *)param_3[1], plVar5 != (long *)0x0)) && (*plVar5 != 0)) {
        pSVar2 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
        iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar2,*param_3,uVar3);
        if (iVar1 != 0) {
          (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),*plVar5,"cc.Event");
          goto LAB_007d1720;
        }
      }
    }
  }
  return 0;
}

