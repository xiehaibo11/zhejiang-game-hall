
/* cocos2d::ui::Widget::updateSizeAndPosition() */

void __thiscall cocos2d::ui::Widget::updateSizeAndPosition(Widget *this)

{
  long lVar1;
  Size *pSVar2;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 400) + 0x168))();
  Size::Size(aSStack_30,pSVar2);
  updateSizeAndPosition(this,aSStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00da9ca8 to 00ea9e17 has its CatchHandler @ 00da9ca8
                       catch() { ... } // from try @ 00da9ca8 with catch @ 00da9ca8
                       catch() { ... } // from try @ 00da9e1c with catch @ 00da9ca8
                       catch() { ... } // from try @ 00da9ed0 with catch @ 00da9ca8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

