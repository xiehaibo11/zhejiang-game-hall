
/* fairygui::GGroup::ensureBoundsCorrect() */

void __thiscall fairygui::GGroup::ensureBoundsCorrect(GGroup *this)

{
  long lVar1;
  
  if ((*(long *)(this + 0xa0) != 0) && (this[0x1f5] != (GGroup)0x0)) {
    lVar1 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::unschedule
              (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_ensureBoundsCorrect);
    this[0x1f5] = (GGroup)0x0;
    if (this[0x1e9] != (GGroup)0x0) {
      resizeChildren(this,0.0,0.0);
      return;
    }
    handleLayout(this);
    updateBounds(this);
    return;
  }
  return;
}

