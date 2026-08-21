
void FUN_008f9df0(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  void *pvVar3;
  
                    /* try { // try from 008f9df0 to 009f9e23 has its CatchHandler @ 008f9d6c */
  pvVar3 = (void *)*param_2;
  uVar1 = *param_3;
  if (pvVar3 == (void *)0x0) {
    lua_pushnil();
  }
  else {
    toluafix_pushusertype_ccobject
              (*(lua_State **)(param_1 + 8),*(int *)((long)pvVar3 + 0xc),
               (int *)((long)pvVar3 + 0x10),pvVar3,"fairygui.GTreeNode");
                    /* try { // try from 008f9e24 to 009f9e37 has its CatchHandler @ 008f9e7c */
  }
  lua_pushboolean(*(undefined8 *)(param_1 + 8),uVar1);
                    /* try { // try from 008f9e38 to 009f9e97 has its CatchHandler @ 008f9d6c */
  lVar2 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008f9e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 8) + 200))
            (*(long **)(lVar2 + 8),*(undefined4 *)(param_1 + 0x10),2);
  return;
}

