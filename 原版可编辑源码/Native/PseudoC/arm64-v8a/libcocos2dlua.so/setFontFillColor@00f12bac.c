
/* cocos2d::LabelTTF::setFontFillColor(cocos2d::Color3B const&, bool) */

void cocos2d::LabelTTF::setFontFillColor(Color3B *param_1,bool param_2)

{
  long lVar1;
  long *plVar2;
  Color4B aCStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x308);
  Color4B::Color4B(aCStack_30,(Color3B *)(ulong)param_2,0xff);
  (**(code **)(*plVar2 + 0x598))(plVar2,aCStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

