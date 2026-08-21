
bool FUN_008badf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = cocos2d::LuaEngine::getInstance();
  plVar3 = *(long **)(lVar2 + 8);
  (**(code **)(*plVar3 + 0x98))(plVar3,param_2,"cc.PhysicsContact");
  tolua_pushusertype(plVar3[5],param_3,"cc.PhysicsContactPreSolve");
  iVar1 = (**(code **)(*plVar3 + 200))(plVar3,*(undefined4 *)(param_1 + 8),2);
  (**(code **)(*plVar3 + 0x58))(plVar3);
  return iVar1 != 0;
}

