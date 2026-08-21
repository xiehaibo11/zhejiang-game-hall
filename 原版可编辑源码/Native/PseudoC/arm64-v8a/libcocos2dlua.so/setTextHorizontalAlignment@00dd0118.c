
/* cocos2d::ui::TextField::setTextHorizontalAlignment(cocos2d::TextHAlignment) */

void __thiscall
cocos2d::ui::TextField::setTextHorizontalAlignment(TextField *this,undefined8 param_2)

{
                    /* try { // try from 00dd0120 to 00ed0137 has its CatchHandler @ 00dd0378 */
  Label::setAlignment(*(Label **)(this + 0x4f0),param_2,
                      *(undefined4 *)(*(Label **)(this + 0x4f0) + 0x454));
  return;
}

