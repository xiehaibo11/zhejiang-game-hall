
/* cocos2d::ui::Slider::loadBarTexture(cocos2d::SpriteFrame*) */

void cocos2d::ui::Slider::loadBarTexture(SpriteFrame *param_1)

{
  Size *pSVar1;
  
                    /* try { // try from 00dcbf28 to 00ecbf33 has its CatchHandler @ 00dccb30 */
                    /* try { // try from 00dcbf34 to 00ecbf3f has its CatchHandler @ 00dccb20 */
  (**(code **)(**(long **)(param_1 + 0x4f0) + 0x598))();
  Widget::updateChildrenDisplayedRGBA((Widget *)param_1);
                    /* try { // try from 00dcbf50 to 00ecbf53 has its CatchHandler @ 00dcc9e4 */
  *(undefined2 *)(param_1 + 0x5f4) = 0x101;
  (**(code **)(**(long **)(param_1 + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)param_1);
                    /* try { // try from 00dcbf74 to 00ecbf97 has its CatchHandler @ 00dccaf0 */
  pSVar1 = (Size *)(**(code **)(**(long **)(param_1 + 0x4f0) + 0x168))();
  Size::operator=((Size *)(param_1 + 0x500),pSVar1);
  Rect::operator=((Rect *)(param_1 + 0x508),(Rect *)(*(long *)(param_1 + 0x4f0) + 0x408));
  return;
}

