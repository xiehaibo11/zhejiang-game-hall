
/* cocos2d::ui::Slider::setupProgressBarTexture() */

void __thiscall cocos2d::ui::Slider::setupProgressBarTexture(Slider *this)

{
  long lVar1;
  Size *pSVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  local_30 = 0x3f00000000000000;
  (**(code **)(**(long **)(this + 0x4f8) + 0x148))(*(long **)(this + 0x4f8),&local_30);
                    /* try { // try from 00dcc118 to 00ecc13b has its CatchHandler @ 00dcb1b0 */
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
  Size::operator=((Size *)(this + 0x518),pSVar2);
                    /* try { // try from 00dcc13c to 00ecc143 has its CatchHandler @ 00dccb48 */
  Rect::operator=((Rect *)(this + 0x520),(Rect *)(*(long *)(this + 0x4f8) + 0x408));
  this[0x5f5] = (Slider)0x1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

