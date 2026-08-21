
void FUN_008b6edc(long param_1,int *param_2,byte *param_3)

{
  long lVar1;
  byte *pbVar2;
  
  tolua_pushnumber((double)(long)*param_2,*(undefined8 *)(param_1 + 8));
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  tolua_pushstring(*(undefined8 *)(param_1 + 8),pbVar2);
  lVar1 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008b6f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 8) + 200))
            (*(long **)(lVar1 + 8),*(undefined4 *)(param_1 + 0x10),2);
  return;
}

