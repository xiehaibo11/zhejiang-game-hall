
/* non-virtual thunk to cocos2d::TextFieldTTF::~TextFieldTTF() */

void __thiscall cocos2d::TextFieldTTF::~TextFieldTTF(TextFieldTTF *this)

{
                    /* try { // try from 00f55638 to 01055657 has its CatchHandler @ 00f55bfc */
  ~TextFieldTTF(this + -0x2f8);
  operator_delete(this + -0x2f8);
  return;
}

