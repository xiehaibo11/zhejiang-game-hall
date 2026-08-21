
/* cocos2d::LuaEngine::handleAssert(char const*) */

uint cocos2d::LuaEngine::handleAssert(char *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0xe0))();
  (**(code **)(**(long **)(param_1 + 8) + 0x58))(*(long **)(param_1 + 8));
  return uVar1 & 1;
}

