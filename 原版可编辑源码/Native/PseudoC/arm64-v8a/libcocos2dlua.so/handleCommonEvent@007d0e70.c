
/* cocos2d::LuaEngine::handleCommonEvent(void*) */

undefined4 __thiscall cocos2d::LuaEngine::handleCommonEvent(LuaEngine *this,void *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  char *__s;
  long lVar3;
  
  if ((param_1 == (void *)0x0) || (*(int *)param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(**(long **)(this + 8) + 0x80))(*(long **)(this + 8),(long)param_1 + 4);
    lVar3 = *(long *)((long)param_1 + 0x48);
    if (lVar3 != 0) {
      __s = (char *)((long)param_1 + 0x50);
      sVar2 = strlen(__s);
      if (sVar2 == 0) {
        __s = "cc.Ref";
      }
      (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),lVar3,__s);
    }
    uVar1 = 1;
    if (*(long *)((long)param_1 + 0x48) != 0) {
      uVar1 = 2;
    }
    uVar1 = (**(code **)(**(long **)(this + 8) + 200))
                      (*(long **)(this + 8),*(undefined4 *)param_1,uVar1);
    (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
  }
  return uVar1;
}

