
bool FUN_008bab88(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = cocos2d::LuaEngine::getInstance();
  plVar3 = *(long **)(lVar2 + 8);
  (**(code **)(*plVar3 + 0x98))(plVar3,param_2,"cc.PhysicsContact");
  iVar1 = (**(code **)(*plVar3 + 200))(plVar3,*(undefined4 *)(param_1 + 8),1);
  (**(code **)(*plVar3 + 0x58))(plVar3);
  return iVar1 != 0;
}

