
/* fairygui::GGroup::setLayout(fairygui::GroupLayoutType) */

void __thiscall fairygui::GGroup::setLayout(GGroup *this,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((((*(int *)(this + 0x1dc) != param_2) &&
       (*(int *)(this + 0x1dc) = param_2, *(int *)(this + 0x1d8) == 0)) &&
      (*(long *)(this + 0xa0) != 0)) &&
     ((this[0x1f5] == (GGroup)0x0 && (this[0x1f5] = (GGroup)0x1, param_2 != 0)))) {
    lVar1 = cocos2d::Director::getInstance();
    uVar2 = cocos2d::Scheduler::isScheduled
                      (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_ensureBoundsCorrect);
    if ((uVar2 & 1) == 0) {
      lVar1 = cocos2d::Director::getInstance();
      cocos2d::Scheduler::schedule
                (*(Scheduler **)(lVar1 + 0xa0),__selector_ensureBoundsCorrect,(Ref *)0x0,0.0,
                 SUB81(this,0));
      return;
    }
  }
  return;
}

