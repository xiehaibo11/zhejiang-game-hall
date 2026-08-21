
/* cocos2d::ui::ScrollViewBar::setAutoHideEnabled(bool) */

void __thiscall cocos2d::ui::ScrollViewBar::setAutoHideEnabled(ScrollViewBar *this,bool param_1)

{
  this[0x34d] = (ScrollViewBar)param_1;
  if (((!param_1) && (this[0x34c] == (ScrollViewBar)0x0)) && (*(float *)(this + 0x354) <= 0.0)) {
    Node::setOpacity((Node *)this,(uchar)this[0x340]);
    return;
  }
  Node::setOpacity((Node *)this,'\0');
  return;
}

