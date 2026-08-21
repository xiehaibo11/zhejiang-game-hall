
void FUN_008ecd8c(long param_1)

{
  long lVar1;
  
  lVar1 = cocos2d::LuaEngine::getInstance();
                    /* try { // try from 008ecda0 to 009ecdb3 has its CatchHandler @ 008ece10 */
                    /* WARNING: Could not recover jumptable at 0x008ecdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 8) + 200))(*(long **)(lVar1 + 8),*(undefined4 *)(param_1 + 8),0);
  return;
}

