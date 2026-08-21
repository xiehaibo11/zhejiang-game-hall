
/* non-virtual thunk to cocos2d::TextFieldTTF::~TextFieldTTF() */

void __thiscall cocos2d::TextFieldTTF::~TextFieldTTF(TextFieldTTF *this)

{
                    /* try { // try from 00f5566c to 010556a3 has its CatchHandler @ 00f55c10 */
  ~TextFieldTTF(this + -0x300);
  operator_delete(this + -0x300);
  return;
}

