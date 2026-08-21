
void FUN_00961c94(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar2 = *param_2;
  lVar1 = cocos2d::LuaEngine::getInstance();
  plVar3 = *(long **)(lVar1 + 8);
  (**(code **)(*plVar3 + 0x98))(plVar3,uVar2,&DAT_012769c7);
  (**(code **)(*plVar3 + 200))(plVar3,*(undefined4 *)(param_1 + 8),1);
                    /* WARNING: Could not recover jumptable at 0x00961d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x58))(plVar3);
  return;
}

