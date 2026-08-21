
void FUN_00962354(long param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar4 = *param_2;
  uVar1 = *param_3;
  uVar2 = *param_4;
  lVar3 = cocos2d::LuaEngine::getInstance();
  plVar5 = *(long **)(lVar3 + 8);
  (**(code **)(*plVar5 + 0x98))(plVar5,uVar4,"ccui.RadioButton");
  (**(code **)(*plVar5 + 0x60))(plVar5,uVar1);
  (**(code **)(*plVar5 + 0x60))(plVar5,uVar2);
                    /* try { // try from 009623d8 to 00a6240b has its CatchHandler @ 009624d8 */
  (**(code **)(*plVar5 + 200))(plVar5,*(undefined4 *)(param_1 + 8),3);
                    /* WARNING: Could not recover jumptable at 0x009623f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5);
  return;
}

