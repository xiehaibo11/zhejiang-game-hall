
void FUN_00963bec(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  lua_State *plVar5;
  void *pvVar6;
  
  pvVar6 = (void *)*param_2;
  pvVar4 = (void *)*param_3;
  lVar2 = cocos2d::LuaEngine::getInstance();
  plVar5 = *(lua_State **)(*(long *)(lVar2 + 8) + 0x28);
  piVar1 = (int *)((long)pvVar6 + 0x10);
  if (pvVar6 == (void *)0x0) {
    iVar3 = -1;
    piVar1 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)((long)pvVar6 + 0xc);
  }
  toluafix_pushusertype_ccobject(plVar5,iVar3,piVar1,pvVar6,"ccui.Widget");
                    /* try { // try from 00963c54 to 00a63c9f has its CatchHandler @ 00963c54
                       catch() { ... } // from try @ 00963c54 with catch @ 00963c54
                       catch() { ... } // from try @ 00963ca4 with catch @ 00963c54 */
  piVar1 = (int *)((long)pvVar4 + 0x10);
  if (pvVar4 == (void *)0x0) {
    iVar3 = -1;
    piVar1 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)((long)pvVar4 + 0xc);
  }
  toluafix_pushusertype_ccobject(plVar5,iVar3,piVar1,pvVar4,"ccui.Widget");
  lVar2 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00963c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 8) + 200))(*(long **)(lVar2 + 8),*(undefined4 *)(param_1 + 8),2);
  return;
}

