
/* cocos2d::ui::ScrollView::getScrollBarColor() const */

undefined2 * __thiscall cocos2d::ui::ScrollView::getScrollBarColor(ScrollView *this)

{
  long *plVar1;
  undefined2 *puVar2;
  
  plVar1 = *(long **)(this + 0x858);
                    /* try { // try from 00dbe8b4 to 00ebe9e3 has its CatchHandler @ 00dbe8b4
                       catch() { ... } // from try @ 00dbe8b4 with catch @ 00dbe8b4
                       catch() { ... } // from try @ 00dbece0 with catch @ 00dbe8b4
                       catch() { ... } // from try @ 00dbefdc with catch @ 00dbe8b4 */
  if ((plVar1 == (long *)0x0) && (plVar1 = *(long **)(this + 0x860), plVar1 == (long *)0x0)) {
    return &Color3B::WHITE;
  }
                    /* WARNING: Could not recover jumptable at 0x00dbe8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (undefined2 *)(**(code **)(*plVar1 + 0x4b0))();
  return puVar2;
}

