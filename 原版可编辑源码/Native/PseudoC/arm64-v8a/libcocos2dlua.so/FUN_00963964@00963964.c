
void FUN_00963964(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)*param_2;
  pvVar5 = (void *)*param_3;
  if (pvVar4 == (void *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)((long)pvVar4 + 0xc);
  }
  piVar1 = (int *)((long)pvVar4 + 0x10);
  if (pvVar4 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  toluafix_pushusertype_ccobject(*(lua_State **)(param_1 + 8),iVar3,piVar1,pvVar4,"ccui.Widget");
  if (pvVar5 == (void *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)((long)pvVar5 + 0xc);
  }
  piVar1 = (int *)((long)pvVar5 + 0x10);
  if (pvVar5 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  toluafix_pushusertype_ccobject(*(lua_State **)(param_1 + 8),iVar3,piVar1,pvVar5,"ccui.Widget");
  lVar2 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x009639f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 8) + 200))
            (*(long **)(lVar2 + 8),*(undefined4 *)(param_1 + 0x10),2);
  return;
}

