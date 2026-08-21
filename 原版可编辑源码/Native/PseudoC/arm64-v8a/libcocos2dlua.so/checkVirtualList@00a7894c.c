
/* fairygui::GList::checkVirtualList() */

void __thiscall fairygui::GList::checkVirtualList(GList *this)

{
  long lVar1;
  
  if (*(int *)(this + 0x358) != 0) {
    doRefreshVirtualList(this);
    lVar1 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::unschedule
              (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
    return;
  }
  return;
}

