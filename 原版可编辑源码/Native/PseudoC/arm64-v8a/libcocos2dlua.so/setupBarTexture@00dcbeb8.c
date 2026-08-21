
/* cocos2d::ui::Slider::setupBarTexture() */

void __thiscall cocos2d::ui::Slider::setupBarTexture(Slider *this)

{
  Size *pSVar1;
  
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
                    /* try { // try from 00dcbed0 to 00ecbef3 has its CatchHandler @ 00dcb1b0 */
  *(undefined2 *)(this + 0x5f4) = 0x101;
  (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
                    /* try { // try from 00dcbef4 to 00ecbefb has its CatchHandler @ 00dccb5c */
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Size::operator=((Size *)(this + 0x500),pSVar1);
  Rect::operator=((Rect *)(this + 0x508),(Rect *)(*(long *)(this + 0x4f0) + 0x408));
  return;
}

