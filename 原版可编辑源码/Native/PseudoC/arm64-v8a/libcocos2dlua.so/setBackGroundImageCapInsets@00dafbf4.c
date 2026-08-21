
/* cocos2d::ui::Layout::setBackGroundImageCapInsets(cocos2d::Rect const&) */

void __thiscall cocos2d::ui::Layout::setBackGroundImageCapInsets(Layout *this,Rect *param_1)

{
                    /* try { // try from 00dafbf4 to 00eafc3b has its CatchHandler @ 00dafb20 */
  Rect::operator=((Rect *)(this + 0x558),(Rect *)param_1);
  if ((this[0x530] != (Layout)0x0) && (*(Scale9Sprite **)(this + 0x538) != (Scale9Sprite *)0x0)) {
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x538),param_1);
    return;
  }
  return;
}

