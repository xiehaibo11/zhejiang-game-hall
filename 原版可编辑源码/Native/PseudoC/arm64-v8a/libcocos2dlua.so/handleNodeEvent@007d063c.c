
/* cocos2d::LuaEngine::handleNodeEvent(void*) */

undefined4 __thiscall cocos2d::LuaEngine::handleNodeEvent(LuaEngine *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ScriptHandlerMgr *pSVar3;
  long *plVar4;
  char *pcVar5;
  
  if (((param_1 != (void *)0x0) && (*(long *)param_1 != 0)) && (*(long *)((long)param_1 + 8) != 0))
  {
    pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar3,*(undefined8 *)param_1,0);
    if (iVar1 != 0) {
      switch(**(undefined4 **)((long)param_1 + 8)) {
      case 0:
        plVar4 = *(long **)(this + 8);
        pcVar5 = "enter";
        break;
      case 1:
        plVar4 = *(long **)(this + 8);
        pcVar5 = "exit";
        break;
      case 2:
        plVar4 = *(long **)(this + 8);
        pcVar5 = "enterTransitionFinish";
        break;
      case 3:
        plVar4 = *(long **)(this + 8);
        pcVar5 = "exitTransitionStart";
        break;
      case 4:
        plVar4 = *(long **)(this + 8);
        pcVar5 = "cleanup";
        break;
      default:
        goto LAB_007d06bc;
      }
      (**(code **)(*plVar4 + 0x80))(plVar4,pcVar5);
      uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,1);
      (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
      return uVar2;
    }
  }
LAB_007d06bc:
  return 0;
}

