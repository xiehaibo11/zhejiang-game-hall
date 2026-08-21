
/* cocos2d::ui::RelativeLayoutParameter::~RelativeLayoutParameter() */

void __thiscall
cocos2d::ui::RelativeLayoutParameter::~RelativeLayoutParameter(RelativeLayoutParameter *this)

{
  *(undefined ***)this = &PTR__RelativeLayoutParameter_016d9a00;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

