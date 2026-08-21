
void FUN_009625b8(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar4 = *param_2;
  uVar1 = *param_3;
  uVar2 = *(undefined4 *)(param_1 + 8);
  lVar3 = cocos2d::LuaEngine::getInstance();
  plVar5 = *(long **)(lVar3 + 8);
  (**(code **)(*plVar5 + 0x98))(plVar5,uVar4,&DAT_012769c7);
  (**(code **)(*plVar5 + 0x60))(plVar5,uVar1);
  (**(code **)(*plVar5 + 200))(plVar5,uVar2,2);
                    /* try { // try from 0096262c to 00a62677 has its CatchHandler @ 0096262c
                       catch() { ... } // from try @ 0096262c with catch @ 0096262c
                       catch() { ... } // from try @ 0096267c with catch @ 0096262c */
                    /* WARNING: Could not recover jumptable at 0x0096263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5);
  return;
}

