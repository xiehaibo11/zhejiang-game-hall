
/* cocos2d::LabelTTF::enableStroke(cocos2d::Color3B const&, float, bool) */

void cocos2d::LabelTTF::enableStroke(Color3B *param_1,float param_2,bool param_3)

{
  long lVar1;
  long *plVar2;
  Color4B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x308);
  Color4B::Color4B(aCStack_40,(Color3B *)(ulong)param_3,0xff);
  (**(code **)(*plVar2 + 0x5a8))(plVar2,aCStack_40,(int)param_2);
  param_1[0x310] = (Color3B)0x1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

