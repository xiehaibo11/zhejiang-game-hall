
void FUN_008f7a44(long param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = cocos2d::LuaEngine::getInstance();
  (**(code **)(**(long **)(lVar4 + 8) + 0xb8))(*(long **)(lVar4 + 8),*(undefined4 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  lua_pushlstring(*(undefined8 *)(param_1 + 0x10),pbVar2,uVar1);
  iVar3 = lua_pcall(*(undefined8 *)(param_1 + 0x10),1,0,0);
  if (iVar3 != 0) {
    lua_settop(*(undefined8 *)(param_1 + 0x10),0xfffffffe);
    return;
  }
  return;
}

