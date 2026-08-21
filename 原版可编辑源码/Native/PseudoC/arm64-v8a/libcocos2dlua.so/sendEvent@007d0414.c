
/* cocos2d::LuaEngine::sendEvent(cocos2d::ScriptEvent*) */

ulong __thiscall cocos2d::LuaEngine::sendEvent(LuaEngine *this,ScriptEvent *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  ScriptHandlerMgr *pSVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  
  if (param_1 != (ScriptEvent *)0x0) {
    switch(*(undefined4 *)param_1) {
    case 0:
      uVar6 = handleNodeEvent(this,*(void **)(param_1 + 8));
      return uVar6;
    case 1:
      if ((*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) &&
         (plVar5 = (long *)**(undefined8 **)(param_1 + 8), plVar5 != (long *)0x0)) {
        pSVar4 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
        iVar3 = ScriptHandlerMgr::getObjectHandler(pSVar4,plVar5,1);
        if (iVar3 != 0) {
          plVar9 = *(long **)(this + 8);
          uVar2 = (**(code **)(*plVar5 + 0x2b8))(plVar5);
          (**(code **)(*plVar9 + 0x60))(plVar9,uVar2);
          (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),plVar5,"cc.MenuItem");
          plVar5 = *(long **)(this + 8);
          uVar1 = 2;
          goto LAB_007d056c;
        }
      }
      break;
    case 2:
      plVar5 = *(long **)(param_1 + 8);
      if ((plVar5 != (long *)0x0) && (*plVar5 != 0)) {
        pSVar4 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
        iVar3 = ScriptHandlerMgr::getObjectHandler(pSVar4,*plVar5,2);
        if (iVar3 != 0) {
          lVar8 = plVar5[1];
          if (lVar8 != 0) {
            (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),lVar8,"cc.Node");
          }
          plVar5 = *(long **)(this + 8);
          uVar1 = lVar8 != 0;
          goto LAB_007d056c;
        }
      }
      break;
    case 3:
      piVar7 = *(int **)(param_1 + 8);
      if (piVar7 != (int *)0x0) {
        (**(code **)(**(long **)(this + 8) + 0x68))(piVar7[1]);
        plVar5 = *(long **)(this + 8);
        iVar3 = *piVar7;
        uVar1 = 1;
LAB_007d056c:
        uVar6 = (**(code **)(*plVar5 + 200))(plVar5,iVar3,uVar1);
        (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
        return uVar6 & 0xffffffff;
      }
      break;
    case 4:
      uVar6 = handleTouchEvent(this);
      return uVar6;
    case 5:
      uVar6 = handleTouchesEvent(this);
      return uVar6;
    case 6:
      uVar6 = handleKeypadEvent(this,*(void **)(param_1 + 8));
      return uVar6;
    case 7:
      uVar6 = handleAccelerometerEvent(this,*(void **)(param_1 + 8));
      return uVar6;
    case 8:
      uVar6 = handlerControlEvent(this,*(void **)(param_1 + 8));
      return uVar6;
    case 9:
      uVar6 = handleCommonEvent(this,*(void **)(param_1 + 8));
      return uVar6;
    }
  }
  return 0;
}

