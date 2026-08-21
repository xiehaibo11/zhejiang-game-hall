
/* cocos2d::ui::TextField::setTextVerticalAlignment(cocos2d::TextVAlignment) */

void __thiscall cocos2d::ui::TextField::setTextVerticalAlignment(TextField *this,undefined4 param_2)

{
                    /* try { // try from 00dd0138 to 00ed014b has its CatchHandler @ 00dd0394 */
  Label::setAlignment(*(Label **)(this + 0x4f0),*(undefined4 *)(*(Label **)(this + 0x4f0) + 0x450),
                      param_2);
  return;
}

