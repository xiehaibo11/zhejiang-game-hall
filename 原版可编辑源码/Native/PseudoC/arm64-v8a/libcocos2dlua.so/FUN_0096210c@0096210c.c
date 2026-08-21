
void FUN_0096210c(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  uVar3 = *param_2;
  uVar1 = *param_3;
  lVar2 = cocos2d::LuaEngine::getInstance();
  plVar4 = *(long **)(lVar2 + 8);
  (**(code **)(*plVar4 + 0x98))(plVar4,uVar3,"ccui.RadioButton");
  (**(code **)(*plVar4 + 0x60))(plVar4,uVar1);
  (**(code **)(*plVar4 + 200))(plVar4,*(undefined4 *)(param_1 + 8),2);
                    /* WARNING: Could not recover jumptable at 0x00962190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x58))(plVar4);
  return;
}

