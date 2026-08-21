
void FUN_008bb2f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = cocos2d::LuaEngine::getInstance();
  plVar2 = *(long **)(lVar1 + 8);
  (**(code **)(*plVar2 + 0x98))(plVar2,param_2,"cc.PhysicsContact");
  (**(code **)(*plVar2 + 200))(plVar2,*(undefined4 *)(param_1 + 8),1);
                    /* WARNING: Could not recover jumptable at 0x008bb360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2);
  return;
}

