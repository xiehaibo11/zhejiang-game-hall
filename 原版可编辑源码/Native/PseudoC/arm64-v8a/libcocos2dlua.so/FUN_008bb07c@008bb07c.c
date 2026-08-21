
void FUN_008bb07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = cocos2d::LuaEngine::getInstance();
  plVar2 = *(long **)(lVar1 + 8);
  (**(code **)(*plVar2 + 0x98))(plVar2,param_2,"cc.PhysicsContact");
  tolua_pushusertype(plVar2[5],param_3,"cc.PhysicsContactPostSolve");
  (**(code **)(*plVar2 + 200))(plVar2,*(undefined4 *)(param_1 + 8),2);
                    /* WARNING: Could not recover jumptable at 0x008bb100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2);
  return;
}

