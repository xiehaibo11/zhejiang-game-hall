
/* cocos2d::ui::Text::enableOutline(cocos2d::Color4B const&, int) */

void cocos2d::ui::Text::enableOutline(Color4B *param_1,int param_2)

{
  (**(code **)(**(long **)(param_1 + 0x528) + 0x5a8))(*(long **)(param_1 + 0x528),param_2);
  (**(code **)(**(long **)(param_1 + 0x528) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)param_1);
                    /* catch() { ... } // from try @ 00dc89c0 with catch @ 00dc8988 */
  param_1[0x530] = (Color4B)0x1;
  return;
}

