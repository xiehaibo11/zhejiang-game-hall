
/* cocos2d::LuaEngine::handleAccelerometerEvent(void*) */

undefined4 __thiscall cocos2d::LuaEngine::handleAccelerometerEvent(LuaEngine *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ScriptHandlerMgr *pSVar3;
  long lVar4;
  
  if (((param_1 != (void *)0x0) && (*(long *)param_1 != 0)) && (*(long *)((long)param_1 + 8) != 0))
  {
    pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar1 = ScriptHandlerMgr::getObjectHandler(pSVar3,*(undefined8 *)param_1,6);
    if (iVar1 != 0) {
      lVar4 = *(long *)((long)param_1 + 8);
      (**(code **)(**(long **)(this + 8) + 0x68))((float)*(double *)(lVar4 + 0x28));
      (**(code **)(**(long **)(this + 8) + 0x68))((float)*(double *)(lVar4 + 0x30));
      (**(code **)(**(long **)(this + 8) + 0x68))((float)*(double *)(lVar4 + 0x38));
      (**(code **)(**(long **)(this + 8) + 0x68))((float)*(double *)(lVar4 + 0x40));
      uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar1,4);
      (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
      return uVar2;
    }
  }
  return 0;
}

