
/* cocos2d::ui::ScrollView::setScrollBarColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::ui::ScrollView::setScrollBarColor(ScrollView *this,Color3B *param_1)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 00dbe718 with catch @ 00dbe860
                       catch() { ... } // from try @ 00dbe790 with catch @ 00dbe860 */
                    /* catch() { ... } // from try @ 00dbe5e8 with catch @ 00dbe864 */
  plVar1 = *(long **)(this + 0x858);
  if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00dbe5d4 with catch @ 00dbe878 */
    (**(code **)(*plVar1 + 0x4c0))(plVar1,param_1);
  }
  plVar1 = *(long **)(this + 0x860);
  if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00dbe72c with catch @ 00dbe888 */
                    /* WARNING: Could not recover jumptable at 0x00dbe89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4c0))(plVar1,param_1);
    return;
  }
  return;
}

