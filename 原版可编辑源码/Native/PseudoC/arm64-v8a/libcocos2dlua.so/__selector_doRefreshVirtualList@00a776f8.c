
/* fairygui::GList::__selector_doRefreshVirtualList(float) */

void fairygui::GList::__selector_doRefreshVirtualList(float param_1)

{
  GList *in_x0;
  long lVar1;
  
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule
            (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
  doRefreshVirtualList(in_x0);
  return;
}

