
/* cocos2d::ui::EditBox::onSizeChanged() */

void __thiscall cocos2d::ui::EditBox::onSizeChanged(EditBox *this)

{
                    /* try { // try from 00deb264 to 00eeb267 has its CatchHandler @ 00deb2a8 */
  Widget::onSizeChanged((Widget *)this);
  *(undefined2 *)(this + 0x55b) = 0x101;
  this[0x55d] = (EditBox)0x1;
  return;
}

