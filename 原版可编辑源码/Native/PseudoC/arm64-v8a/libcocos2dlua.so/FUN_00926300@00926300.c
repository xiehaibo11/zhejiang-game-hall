
void FUN_00926300(long param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_2;
  if (pvVar2 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00926284 with catch @ 0092631c */
                    /* catch() { ... } // from try @ 0092629c with catch @ 00926320 */
    toluafix_pushusertype_ccobject
              (*(lua_State **)(param_1 + 0x10),*(int *)((long)pvVar2 + 0xc),
               (int *)((long)pvVar2 + 0x10),pvVar2,"cc.Ref");
    lVar1 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00926350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00926250 with catch @ 00926350 */
    (**(code **)(**(long **)(lVar1 + 8) + 200))
              (*(long **)(lVar1 + 8),*(undefined4 *)(param_1 + 8),1);
    return;
  }
  return;
}

