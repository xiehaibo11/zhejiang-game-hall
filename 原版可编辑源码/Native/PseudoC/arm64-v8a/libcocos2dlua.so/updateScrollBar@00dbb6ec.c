
/* cocos2d::ui::ScrollView::updateScrollBar(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::ScrollView::updateScrollBar(ScrollView *this,Vec2 *param_1)

{
  long *plVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb640 with catch @ 00dbb6fc
                        */
  plVar1 = *(long **)(this + 0x858);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x580))(plVar1,param_1);
  }
  plVar1 = *(long **)(this + 0x860);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dbb734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x580))(plVar1,param_1);
    return;
  }
  return;
}

