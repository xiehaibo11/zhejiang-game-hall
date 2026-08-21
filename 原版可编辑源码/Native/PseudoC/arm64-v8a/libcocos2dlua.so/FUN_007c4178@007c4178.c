
void FUN_007c4178(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  lVar1 = param_1 + 9;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
  }
  lVar4 = cocos2d::LuaEngine::getInstance();
  plVar5 = *(long **)(lVar4 + 8);
  (**(code **)(*plVar5 + 0x60))(plVar5,uVar3);
  (**(code **)(*plVar5 + 0x80))(plVar5,lVar1);
  (**(code **)(*plVar5 + 200))(plVar5,uVar2,2);
                    /* WARNING: Could not recover jumptable at 0x007c4200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5);
  return;
}

