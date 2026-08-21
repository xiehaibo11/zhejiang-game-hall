
/* non-virtual thunk to cocos2d::ui::UICCTextField::~UICCTextField() */

void __thiscall cocos2d::ui::UICCTextField::~UICCTextField(UICCTextField *this)

{
                    /* try { // try from 00dcdfb0 to 00ecdfd7 has its CatchHandler @ 00dce950 */
  TextFieldTTF::~TextFieldTTF((TextFieldTTF *)(this + -0x6a0));
  operator_delete((TextFieldTTF *)(this + -0x6a0));
  return;
}

