
/* cocos2d::TextFieldTTF::~TextFieldTTF() */

void __thiscall cocos2d::TextFieldTTF::~TextFieldTTF(TextFieldTTF *this)

{
  *(undefined ***)this = &PTR__TextFieldTTF_01711e18;
  *(undefined ***)(this + 0x300) = &PTR__TextFieldTTF_01712500;
  *(undefined ***)(this + 0x2f8) = &PTR__TextFieldTTF_017124d0;
  *(undefined ***)(this + 0x6a0) = &PTR__TextFieldTTF_01712530;
  if (((byte)this[0x6f8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x708));
  }
  if (((byte)this[0x6d0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x6e0));
  }
  if (((byte)this[0x6b8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x6c8));
  }
  IMEDelegate::~IMEDelegate((IMEDelegate *)(this + 0x6a0));
  Label::~Label((Label *)this);
  return;
}

