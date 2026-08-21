
/* cocos2d::LuaEngine::reallocateScriptHandler(int) */

undefined4 cocos2d::LuaEngine::reallocateScriptHandler(int param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(**(long **)((ulong)(uint)param_1 + 8) + 0x38))();
  plVar2 = *(long **)((ulong)(uint)param_1 + 8);
  (**(code **)(*plVar2 + 0x58))(plVar2);
  return uVar1;
}

