
undefined8 FUN_008ee978(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = cocos2d::LuaEngine::getInstance();
  (**(code **)(**(long **)(lVar2 + 8) + 0xb8))(*(long **)(lVar2 + 8),*(undefined4 *)(param_1 + 8));
  iVar1 = lua_pcall(*(undefined8 *)(param_1 + 0x10),0,1,0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    uVar4 = tolua_tousertype(uVar3,0xffffffff,0);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar4 = 0;
  }
  lua_settop(uVar3,0xfffffffe);
  return uVar4;
}

