
/* fairygui::ScrollPane::__selector_refresh(float) */

void fairygui::ScrollPane::__selector_refresh(float param_1)

{
  long lVar1;
  
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule(*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_refresh);
  refresh();
  return;
}

