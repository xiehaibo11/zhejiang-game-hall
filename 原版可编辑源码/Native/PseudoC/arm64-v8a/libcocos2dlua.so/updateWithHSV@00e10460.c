
/* cocos2d::extension::ControlSaturationBrightnessPicker::updateWithHSV(cocos2d::extension::HSV) */

void cocos2d::extension::ControlSaturationBrightnessPicker::updateWithHSV(long param_1)

{
  long lVar1;
  long *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Color3B aCStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dVar4 = 1.0;
  dVar5 = 1.0;
  dVar3 = (double)ControlUtils::RGBfromHSV();
  plVar2 = *(long **)(param_1 + 0x360);
  Color3B::Color3B(aCStack_30,(uchar)(int)(dVar3 * 255.0),(uchar)(int)(dVar4 * 255.0),
                   (uchar)(int)(dVar5 * 255.0));
  (**(code **)(*plVar2 + 0x4c0))(plVar2,aCStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

