
/* cocos2d::Label::setAlignment(cocos2d::TextHAlignment, cocos2d::TextVAlignment) */

void __thiscall cocos2d::Label::setAlignment(Label *this,int param_2,int param_3)

{
  if ((*(int *)(this + 0x450) != param_2) || (*(int *)(this + 0x454) != param_3)) {
    *(int *)(this + 0x450) = param_2;
    *(int *)(this + 0x454) = param_3;
    this[0x30c] = (Label)0x1;
  }
  return;
}

