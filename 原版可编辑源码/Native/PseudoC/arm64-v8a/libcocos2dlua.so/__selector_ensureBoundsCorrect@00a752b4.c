
/* fairygui::GGroup::__selector_ensureBoundsCorrect(float) */

void fairygui::GGroup::__selector_ensureBoundsCorrect(float param_1)

{
  GGroup *in_x0;
  long lVar1;
  
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule
            (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_ensureBoundsCorrect);
  if ((*(long *)(in_x0 + 0xa0) != 0) && (in_x0[0x1f5] != (GGroup)0x0)) {
    lVar1 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::unschedule
              (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_ensureBoundsCorrect);
    in_x0[0x1f5] = (GGroup)0x0;
    if (in_x0[0x1e9] != (GGroup)0x0) {
      resizeChildren(in_x0,0.0,0.0);
      return;
    }
    handleLayout(in_x0);
    updateBounds(in_x0);
    return;
  }
  return;
}

