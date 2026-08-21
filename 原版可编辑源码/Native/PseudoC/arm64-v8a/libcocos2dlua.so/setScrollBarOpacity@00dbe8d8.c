
/* cocos2d::ui::ScrollView::setScrollBarOpacity(unsigned char) */

void __thiscall cocos2d::ui::ScrollView::setScrollBarOpacity(ScrollView *this,uchar param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x858);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x490))(plVar1,param_1);
  }
  plVar1 = *(long **)(this + 0x860);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dbe920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x490))(plVar1,param_1);
    return;
  }
  return;
}

