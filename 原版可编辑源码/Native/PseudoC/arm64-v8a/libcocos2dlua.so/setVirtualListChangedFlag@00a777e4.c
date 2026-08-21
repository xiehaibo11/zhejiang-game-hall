
/* fairygui::GList::setVirtualListChangedFlag(bool) */

void __thiscall fairygui::GList::setVirtualListChangedFlag(GList *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (param_1) {
    uVar3 = 2;
  }
  else {
    if (*(int *)(this + 0x358) != 0) goto LAB_00a77810;
    uVar3 = 1;
  }
  *(undefined4 *)(this + 0x358) = uVar3;
LAB_00a77810:
  lVar1 = cocos2d::Director::getInstance();
  uVar2 = cocos2d::Scheduler::isScheduled
                    (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a77854 to 00b7786b has its CatchHandler @ 00a77b78 */
  cocos2d::Scheduler::schedule
            (*(Scheduler **)(lVar1 + 0xa0),__selector_doRefreshVirtualList,(Ref *)0x0,0.0,
             SUB81(this,0));
  return;
}

