
void FUN_008ecaa8(long param_1)

{
  long lVar1;
  
  lVar1 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008ecad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 8) + 200))(*(long **)(lVar1 + 8),*(undefined4 *)(param_1 + 8),0);
  return;
}

