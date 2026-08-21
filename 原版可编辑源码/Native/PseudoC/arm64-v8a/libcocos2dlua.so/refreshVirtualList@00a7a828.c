
/* fairygui::GList::refreshVirtualList() */

void __thiscall fairygui::GList::refreshVirtualList(GList *this)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0x358) == 0) {
    *(undefined4 *)(this + 0x358) = 1;
  }
  lVar1 = cocos2d::Director::getInstance();
  uVar2 = cocos2d::Scheduler::isScheduled
                    (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::schedule
            (*(Scheduler **)(lVar1 + 0xa0),__selector_doRefreshVirtualList,(Ref *)0x0,0.0,
             SUB81(this,0));
  return;
}

