
/* cocos2d::ScriptHandlerMgr::getObjectHandler(void*, cocos2d::ScriptHandlerMgr::HandlerType) */

int __thiscall
cocos2d::ScriptHandlerMgr::getObjectHandler(ScriptHandlerMgr *this,ulong param_1,int param_3)

{
  ScriptHandlerMgr *pSVar1;
  ScriptHandlerMgr *pSVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_1 != 0) && (*(long *)(this + 0x18) != 0)) {
    this = this + 0x10;
    pSVar2 = *(ScriptHandlerMgr **)this;
    pSVar1 = this;
    if (pSVar2 != (ScriptHandlerMgr *)0x0) {
      do {
        if (*(ulong *)(pSVar2 + 0x20) >= param_1) {
          pSVar1 = pSVar2;
        }
        pSVar2 = *(ScriptHandlerMgr **)(pSVar2 + (ulong)(*(ulong *)(pSVar2 + 0x20) < param_1) * 8);
      } while (pSVar2 != (ScriptHandlerMgr *)0x0);
      if ((pSVar1 != this) && (*(ulong *)(pSVar1 + 0x20) <= param_1)) {
        piVar3 = *(int **)(pSVar1 + 0x28);
        if (piVar3 != *(int **)(pSVar1 + 0x30)) {
          do {
            piVar4 = piVar3 + 2;
            if (*piVar3 == param_3) {
              return piVar3[1];
            }
            piVar3 = piVar4;
          } while (*(int **)(pSVar1 + 0x30) != piVar4);
          return 0;
        }
      }
    }
  }
  return 0;
}

