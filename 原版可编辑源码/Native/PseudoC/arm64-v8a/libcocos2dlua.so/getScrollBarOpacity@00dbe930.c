
/* cocos2d::ui::ScrollView::getScrollBarOpacity() const */

undefined8 __thiscall cocos2d::ui::ScrollView::getScrollBarOpacity(ScrollView *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(this + 0x858);
  if ((plVar1 == (long *)0x0) && (plVar1 = *(long **)(this + 0x860), plVar1 == (long *)0x0)) {
    return 0xff;
  }
                    /* WARNING: Could not recover jumptable at 0x00dbe94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x480))();
  return uVar2;
}

