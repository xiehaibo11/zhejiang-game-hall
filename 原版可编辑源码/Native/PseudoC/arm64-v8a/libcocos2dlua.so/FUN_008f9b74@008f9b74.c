
void FUN_008f9b74(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  lua_State *plVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)*param_2;
                    /* try { // try from 008f9b88 to 009f9b9b has its CatchHandler @ 008f9be8 */
  pvVar4 = (void *)*param_3;
  if (pvVar3 == (void *)0x0) {
    lua_pushnil();
    plVar1 = *(lua_State **)(param_1 + 8);
  }
  else {
                    /* try { // try from 008f9b9c to 009f9c03 has its CatchHandler @ 008f9a48 */
    toluafix_pushusertype_ccobject
              (*(lua_State **)(param_1 + 8),*(int *)((long)pvVar3 + 0xc),
               (int *)((long)pvVar3 + 0x10),pvVar3,"fairygui.GTreeNode");
    plVar1 = *(lua_State **)(param_1 + 8);
  }
  if (pvVar4 == (void *)0x0) {
    lua_pushnil();
  }
  else {
    toluafix_pushusertype_ccobject
              (plVar1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
               "fairygui.GComponent");
  }
                    /* catch() { ... } // from try @ 008f9b20 with catch @ 008f9bdc */
  lVar2 = cocos2d::LuaEngine::getInstance();
                    /* catch() { ... } // from try @ 008f9ab8 with catch @ 008f9be0 */
                    /* catch() { ... } // from try @ 008f9a9c with catch @ 008f9be4
                       catch() { ... } // from try @ 008f9b70 with catch @ 008f9be4 */
                    /* catch() { ... } // from try @ 008f9ae0 with catch @ 008f9be8
                       catch() { ... } // from try @ 008f9b88 with catch @ 008f9be8 */
                    /* WARNING: Could not recover jumptable at 0x008f9bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 8) + 200))
            (*(long **)(lVar2 + 8),*(undefined4 *)(param_1 + 0x10),2);
  return;
}

