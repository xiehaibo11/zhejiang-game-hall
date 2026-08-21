
/* fairygui::GGroup::setBoundsChangedFlag(bool) */

void __thiscall fairygui::GGroup::setBoundsChangedFlag(GGroup *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(int *)(this + 0x1d8) == 0) && (*(long *)(this + 0xa0) != 0)) {
    if (!param_1) {
      this[500] = (GGroup)0x0;
    }
    if ((this[0x1f5] == (GGroup)0x0) && (this[0x1f5] = (GGroup)0x1, *(int *)(this + 0x1dc) != 0)) {
      lVar1 = cocos2d::Director::getInstance();
      uVar2 = cocos2d::Scheduler::isScheduled
                        (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_ensureBoundsCorrect)
      ;
      if ((uVar2 & 1) == 0) {
        lVar1 = cocos2d::Director::getInstance();
        cocos2d::Scheduler::schedule
                  (*(Scheduler **)(lVar1 + 0xa0),__selector_ensureBoundsCorrect,(Ref *)0x0,0.0,
                   SUB81(this,0));
        return;
      }
    }
  }
  return;
}

