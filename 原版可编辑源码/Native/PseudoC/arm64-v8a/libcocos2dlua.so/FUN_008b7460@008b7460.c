
void FUN_008b7460(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  void *pvVar5;
  
  pvVar5 = (void *)*param_2;
                    /* catch() { ... } // from try @ 008b73d4 with catch @ 008b7470 */
  if (pvVar5 == (void *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)((long)pvVar5 + 0xc);
  }
  piVar1 = (int *)((long)pvVar5 + 0x10);
                    /* try { // try from 008b748c to 009b74e7 has its CatchHandler @ 008b748c
                       catch() { ... } // from try @ 008b748c with catch @ 008b748c
                       catch() { ... } // from try @ 008b7500 with catch @ 008b748c */
  if (pvVar5 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  toluafix_pushusertype_ccobject(*(lua_State **)(param_1 + 8),iVar4,piVar1,pvVar5,"cc.Texture2D");
  lVar2 = cocos2d::LuaEngine::getInstance();
  (**(code **)(**(long **)(lVar2 + 8) + 200))
            (*(long **)(lVar2 + 8),*(undefined4 *)(param_1 + 0x10),1);
  plVar3 = (long *)cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008b74d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(param_1 + 0x10));
  return;
}

