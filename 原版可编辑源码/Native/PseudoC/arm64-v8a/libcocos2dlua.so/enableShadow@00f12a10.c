
/* cocos2d::LabelTTF::enableShadow(cocos2d::Size const&, float, float, bool) */

void cocos2d::LabelTTF::enableShadow(Size *param_1,float param_2,float param_3,bool param_4)

{
  long lVar1;
  Color4B aCStack_50 [3];
  undefined1 local_4d;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Color4B::Color4B(aCStack_50,(Color3B *)&Color3B::BLACK,0xff);
  local_4d = (undefined1)(int)(param_2 * 255.0);
  (**(code **)(**(long **)(param_1 + 0x308) + 0x5a0))
            (*(long **)(param_1 + 0x308),aCStack_50,param_4,(int)param_3);
  param_1[0x310] = (Size)0x1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

