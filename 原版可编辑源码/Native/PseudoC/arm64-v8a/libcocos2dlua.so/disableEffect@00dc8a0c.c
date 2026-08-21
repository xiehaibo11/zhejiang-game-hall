
/* cocos2d::ui::Text::disableEffect(cocos2d::LabelEffect) */

void __thiscall cocos2d::ui::Text::disableEffect(Text *this,int param_2)

{
  (**(code **)(**(long **)(this + 0x528) + 0x5c0))();
  if (param_2 == 1) {
                    /* try { // try from 00dc8a38 to 00ec8a3f has its CatchHandler @ 00dc8a6c */
                    /* try { // try from 00dc8a40 to 00ec8a87 has its CatchHandler @ 00dc8a08 */
    (**(code **)(**(long **)(this + 0x528) + 0x168))();
    Widget::updateContentSizeWithTextureSize((Size *)this);
    this[0x530] = (Text)0x1;
  }
  return;
}

