
/* cocos2d::ui::TextField::setCursorEnabled(bool) */

void __thiscall cocos2d::ui::TextField::setCursorEnabled(TextField *this,bool param_1)

{
                    /* try { // try from 00dd0150 to 00ed0167 has its CatchHandler @ 00dd0354 */
  TextFieldTTF::setCursorEnabled(*(TextFieldTTF **)(this + 0x4f0),param_1);
  return;
}

