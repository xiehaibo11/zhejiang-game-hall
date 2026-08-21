
/* fairygui::GComponent::__selector_buildNativeDisplayList(float) */

void fairygui::GComponent::__selector_buildNativeDisplayList(float param_1)

{
  GComponent *in_x0;
  long lVar1;
  
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule
            (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_buildNativeDisplayList);
  buildNativeDisplayList(in_x0);
  return;
}

