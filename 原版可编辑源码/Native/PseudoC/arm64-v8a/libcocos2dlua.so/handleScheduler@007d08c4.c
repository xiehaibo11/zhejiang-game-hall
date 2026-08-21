
/* cocos2d::LuaEngine::handleScheduler(void*) */

undefined4 __thiscall cocos2d::LuaEngine::handleScheduler(LuaEngine *this,void *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (void *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x68))(*(undefined4 *)((long)param_1 + 4));
    uVar1 = (**(code **)(**(long **)(this + 8) + 200))
                      (*(long **)(this + 8),*(undefined4 *)param_1,1);
    (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
    return uVar1;
  }
  return 0;
}

