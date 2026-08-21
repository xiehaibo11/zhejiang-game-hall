
/* cocos2d::LuaEngine::handlerControlEvent(void*) */

undefined4 __thiscall cocos2d::LuaEngine::handlerControlEvent(LuaEngine *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ScriptHandlerMgr *pSVar4;
  int iVar5;
  
  if ((param_1 == (void *)0x0) || (*(long *)param_1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar1 = **(uint **)((long)param_1 + 8);
    iVar5 = 7;
    do {
      if ((1 << (ulong)(iVar5 - 7U & 0x1f) & uVar1) != 0) {
        pSVar4 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
        iVar2 = ScriptHandlerMgr::getObjectHandler(pSVar4,*(undefined8 *)param_1,iVar5);
        if (iVar2 != 0) {
          (**(code **)(**(long **)(this + 8) + 0x98))
                    (*(long **)(this + 8),*(undefined8 *)param_1,&DAT_012769c7);
          (**(code **)(**(long **)(this + 8) + 0x60))(*(long **)(this + 8),uVar1);
          uVar3 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),iVar2,2);
          (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x10);
  }
  return uVar3;
}

