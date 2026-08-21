
/* cocos2d::LuaEngine::executeSchedule(int, float, cocos2d::Node*) */

undefined4 cocos2d::LuaEngine::executeSchedule(int param_1,float param_2,Node *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(uint)param_1;
  if ((int)param_3 != 0) {
    (**(code **)(**(long **)(uVar2 + 8) + 0x68))();
    uVar1 = (**(code **)(**(long **)(uVar2 + 8) + 200))
                      (*(long **)(uVar2 + 8),(ulong)param_3 & 0xffffffff,1);
    (**(code **)(**(long **)(uVar2 + 8) + 0x58))(*(long **)(uVar2 + 8));
    return uVar1;
  }
  return 0;
}

