
bool FUN_008ac338(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_2;
  if (pvVar4 == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)((long)pvVar4 + 0xc);
  }
  piVar1 = (int *)((long)pvVar4 + 0x10);
  if (pvVar4 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  toluafix_pushusertype_ccobject(*(lua_State **)(param_1 + 8),iVar2,piVar1,pvVar4,"cc.Node");
  lVar3 = cocos2d::LuaEngine::getInstance();
  iVar2 = (**(code **)(**(long **)(lVar3 + 8) + 200))
                    (*(long **)(lVar3 + 8),*(undefined4 *)(param_1 + 0x10),1);
  return iVar2 != 0;
}

