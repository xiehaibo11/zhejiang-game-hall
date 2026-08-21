
/* cocos2d::LuaEngine::executeScriptFile(char const*) */

undefined4 cocos2d::LuaEngine::executeScriptFile(char *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x48))();
  (**(code **)(**(long **)(param_1 + 8) + 0x58))(*(long **)(param_1 + 8));
  return uVar1;
}

