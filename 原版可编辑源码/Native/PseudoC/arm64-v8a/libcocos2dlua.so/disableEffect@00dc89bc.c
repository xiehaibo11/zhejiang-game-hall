
/* cocos2d::ui::Text::disableEffect() */

void __thiscall cocos2d::ui::Text::disableEffect(Text *this)

{
                    /* try { // try from 00dc89c0 to 00ec8a07 has its CatchHandler @ 00dc8988 */
  (**(code **)(**(long **)(this + 0x528) + 0x5b8))();
  (**(code **)(**(long **)(this + 0x528) + 0x168))();
                    /* catch() { ... } // from try @ 00dc89b8 with catch @ 00dc89ec */
  Widget::updateContentSizeWithTextureSize((Size *)this);
  this[0x530] = (Text)0x1;
                    /* catch() { ... } // from try @ 00dc8a40 with catch @ 00dc8a08 */
  return;
}

