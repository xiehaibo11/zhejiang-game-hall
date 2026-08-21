
void FUN_008b7614(long param_1,undefined1 *param_2,byte *param_3)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  
  tolua_pushboolean(*(undefined8 *)(param_1 + 8),*param_2);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  tolua_pushstring(*(undefined8 *)(param_1 + 8),pbVar3);
  lVar1 = cocos2d::LuaEngine::getInstance();
                    /* catch() { ... } // from try @ 008b75f8 with catch @ 008b7660 */
  (**(code **)(**(long **)(lVar1 + 8) + 200))
            (*(long **)(lVar1 + 8),*(undefined4 *)(param_1 + 0x10),2);
  plVar2 = (long *)cocos2d::LuaEngine::getInstance();
                    /* try { // try from 008b767c to 009b76d3 has its CatchHandler @ 008b767c
                       catch() { ... } // from try @ 008b767c with catch @ 008b767c
                       catch() { ... } // from try @ 008b76ec with catch @ 008b767c */
                    /* WARNING: Could not recover jumptable at 0x008b7680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(param_1 + 0x10));
  return;
}

