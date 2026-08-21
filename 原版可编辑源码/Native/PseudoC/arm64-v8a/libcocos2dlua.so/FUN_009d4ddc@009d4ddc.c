
void FUN_009d4ddc(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  uVar3 = *param_2;
  uVar1 = *param_3;
  lVar2 = cocos2d::LuaEngine::getInstance();
  plVar4 = *(long **)(lVar2 + 8);
  (**(code **)(*plVar4 + 0x98))(plVar4,uVar3,&DAT_012769c7);
                    /* try { // try from 009d4e2c to 00ad4e3f has its CatchHandler @ 009d7ffc */
  (**(code **)(*plVar4 + 0x60))(plVar4,uVar1);
                    /* try { // try from 009d4e44 to 00ad4eaf has its CatchHandler @ 009d80d4 */
                    /* WARNING: Could not recover jumptable at 0x009d4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 200))(plVar4,*(undefined4 *)(param_1 + 8),2);
  return;
}

