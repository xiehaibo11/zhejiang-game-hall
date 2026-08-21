
/* cocos2d::LuaEngine::executeString(char const*) */

undefined4 cocos2d::LuaEngine::executeString(char *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  (**(code **)(**(long **)(param_1 + 8) + 0x58))(*(long **)(param_1 + 8));
  return uVar1;
}

