
/* cocos2d::ui::ScrollView::initScrollBar() */

void __thiscall cocos2d::ui::ScrollView::initScrollBar(ScrollView *this)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00dbed04 with catch @ 00dbf074 */
  iVar1 = *(int *)(this + 0x7c0);
  if (iVar1 != 2) {
    if (*(long *)(this + 0x858) == 0) {
                    /* catch() { ... } // from try @ 00dbec0c with catch @ 00dbf0e0 */
      uVar2 = ScrollViewBar::create(this,1);
      *(undefined8 *)(this + 0x858) = uVar2;
      (**(code **)(*(long *)this + 0x538))(this,uVar2,2);
      iVar1 = *(int *)(this + 0x7c0);
    }
    if (iVar1 == 1) {
      return;
    }
  }
  if (*(long *)(this + 0x860) != 0) {
                    /* catch() { ... } // from try @ 00dbebf8 with catch @ 00dbf0a4 */
    return;
  }
  uVar2 = ScrollViewBar::create(this,2);
  *(undefined8 *)(this + 0x860) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00dbf0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x538))(this,uVar2,2);
  return;
}

