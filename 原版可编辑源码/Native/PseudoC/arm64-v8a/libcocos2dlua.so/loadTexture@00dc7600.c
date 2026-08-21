
/* cocos2d::ui::ImageView::loadTexture(cocos2d::SpriteFrame*) */

void cocos2d::ui::ImageView::loadTexture(SpriteFrame *param_1)

{
  Size *pSVar1;
  
  (**(code **)(**(long **)(param_1 + 0x510) + 0x610))();
  pSVar1 = (Size *)(**(code **)(**(long **)(param_1 + 0x510) + 0x168))();
  Size::operator=((Size *)(param_1 + 0x51c),pSVar1);
  Widget::updateChildrenDisplayedRGBA((Widget *)param_1);
  Widget::updateContentSizeWithTextureSize((Size *)param_1);
  param_1[0x524] = (SpriteFrame)0x1;
  return;
}

