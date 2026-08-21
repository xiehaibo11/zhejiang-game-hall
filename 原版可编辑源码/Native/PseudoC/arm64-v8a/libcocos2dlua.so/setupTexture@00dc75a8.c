
/* cocos2d::ui::ImageView::setupTexture() */

void __thiscall cocos2d::ui::ImageView::setupTexture(ImageView *this)

{
  Size *pSVar1;
  
  pSVar1 = (Size *)(**(code **)(**(long **)(this + 0x510) + 0x168))();
  Size::operator=((Size *)(this + 0x51c),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  Widget::updateContentSizeWithTextureSize((Size *)this);
  this[0x524] = (ImageView)0x1;
  return;
}

