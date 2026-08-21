
bool FUN_008bb558(long param_1,PhysicsWorld *param_2,PhysicsRayCastInfo *param_3)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  pcVar2 = getLuaTypeName<cocos2d::PhysicsWorld>(param_2,"cc.PhysicsWorld");
  tolua_pushusertype(uVar4,param_2,pcVar2);
  physics_raycastinfo_to_luaval(*(lua_State **)(param_1 + 0x10),param_3);
  lVar3 = cocos2d::LuaEngine::getInstance();
  iVar1 = (**(code **)(**(long **)(lVar3 + 8) + 200))
                    (*(long **)(lVar3 + 8),*(undefined4 *)(param_1 + 8),2);
  return iVar1 != 0;
}

