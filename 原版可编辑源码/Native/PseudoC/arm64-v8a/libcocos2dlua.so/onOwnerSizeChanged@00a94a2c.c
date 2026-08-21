
/* fairygui::ScrollPane::onOwnerSizeChanged() */

void __thiscall fairygui::ScrollPane::onOwnerSizeChanged(ScrollPane *this)

{
  long lVar1;
  ulong uVar2;
  
  setSize(this,*(float *)(*(long *)(this + 0xf8) + 200),*(float *)(*(long *)(this + 0xf8) + 0xcc));
  if (*(uint *)(this + 0xbc) < 2) {
    *(undefined4 *)(this + 0xbc) = 0xffffffff;
  }
  this[0x45] = (ScrollPane)0x1;
  lVar1 = cocos2d::Director::getInstance();
  uVar2 = cocos2d::Scheduler::isScheduled
                    (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_refresh);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::schedule
            (*(Scheduler **)(lVar1 + 0xa0),__selector_refresh,(Ref *)0x0,0.0,SUB81(this,0));
  return;
}

