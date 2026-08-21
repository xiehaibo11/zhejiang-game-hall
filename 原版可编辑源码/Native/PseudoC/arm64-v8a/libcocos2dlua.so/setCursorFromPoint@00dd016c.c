
/* cocos2d::ui::TextField::setCursorFromPoint(cocos2d::Vec2 const&, cocos2d::Camera const*) */

void __thiscall
cocos2d::ui::TextField::setCursorFromPoint(TextField *this,Vec2 *param_1,Camera *param_2)

{
                    /* try { // try from 00dd016c to 00ed0183 has its CatchHandler @ 00dd0358 */
  TextFieldTTF::setCursorFromPoint(*(TextFieldTTF **)(this + 0x4f0),param_1,param_2);
  return;
}

