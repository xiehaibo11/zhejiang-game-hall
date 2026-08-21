
void FUN_008eccd0(long param_1)

{
  long lVar1;
  
                    /* try { // try from 008ecce0 to 009ecd2f has its CatchHandler @ 008ecce0
                       catch() { ... } // from try @ 008ecce0 with catch @ 008ecce0
                       catch() { ... } // from try @ 008ecd78 with catch @ 008ecce0
                       catch() { ... } // from try @ 008ecdf8 with catch @ 008ecce0 */
  lVar1 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008ecd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 8) + 200))(*(long **)(lVar1 + 8),*(undefined4 *)(param_1 + 8),0);
  return;
}

