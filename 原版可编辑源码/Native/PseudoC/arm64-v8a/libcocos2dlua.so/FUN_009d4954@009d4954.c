
bool FUN_009d4954(long param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  byte *pbVar4;
  
  pvVar3 = (void *)*param_2;
  toluafix_pushusertype_ccobject
            (*(lua_State **)(param_1 + 8),*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),
             pvVar3,"ccexp.WebView");
                    /* try { // try from 009d4984 to 00ad4997 has its CatchHandler @ 009d8000 */
  pbVar4 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar4 = param_3 + 1;
  }
  tolua_pushstring(*(undefined8 *)(param_1 + 8),pbVar4);
                    /* try { // try from 009d499c to 00ad4a07 has its CatchHandler @ 009d80dc */
  lVar2 = cocos2d::LuaEngine::getInstance();
  iVar1 = (**(code **)(**(long **)(lVar2 + 8) + 200))
                    (*(long **)(lVar2 + 8),*(undefined4 *)(param_1 + 0x10),2);
  return iVar1 != 0;
}

