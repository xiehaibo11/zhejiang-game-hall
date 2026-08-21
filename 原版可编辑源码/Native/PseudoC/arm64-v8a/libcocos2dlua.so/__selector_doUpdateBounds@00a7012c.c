
/* fairygui::GComponent::__selector_doUpdateBounds(float) */

void fairygui::GComponent::__selector_doUpdateBounds(float param_1)

{
  long *in_x0;
  long lVar1;
  
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule
            (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doUpdateBounds);
  if ((char)in_x0[0x4b] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00a70174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_x0 + 0xe8))();
    return;
  }
  return;
}

