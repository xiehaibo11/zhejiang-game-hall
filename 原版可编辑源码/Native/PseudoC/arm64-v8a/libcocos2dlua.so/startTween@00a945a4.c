
/* fairygui::ScrollPane::startTween(int) */

void __thiscall fairygui::ScrollPane::startTween(ScrollPane *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(int *)(this + 0xd0) = param_1;
  lVar1 = cocos2d::Director::getInstance();
                    /* try { // try from 00a945c4 to 00b94647 has its CatchHandler @ 00a9480c */
  uVar2 = cocos2d::Scheduler::isScheduled(*(_func_void_float **)(lVar1 + 0xa0),(Ref *)tweenUpdate);
  if ((uVar2 & 1) == 0) {
    lVar1 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::schedule
              (*(Scheduler **)(lVar1 + 0xa0),tweenUpdate,(Ref *)0x0,0.0,SUB81(this,0));
  }
  updateScrollBarVisible(this);
  return;
}

