
void FUN_009d4a58(long param_1,undefined8 *param_2,byte *param_3)

{
  long lVar1;
  void *pvVar2;
  byte *pbVar3;
  
  pvVar2 = (void *)*param_2;
  toluafix_pushusertype_ccobject
            (*(lua_State **)(param_1 + 8),*(int *)((long)pvVar2 + 0xc),(int *)((long)pvVar2 + 0x10),
             pvVar2,"ccexp.WebView");
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  tolua_pushstring(*(undefined8 *)(param_1 + 8),pbVar3);
  lVar1 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x009d4ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 8) + 200))
            (*(long **)(lVar1 + 8),*(undefined4 *)(param_1 + 0x10),2);
  return;
}

