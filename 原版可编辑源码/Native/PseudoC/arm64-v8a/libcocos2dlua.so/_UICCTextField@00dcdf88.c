
/* non-virtual thunk to cocos2d::ui::UICCTextField::~UICCTextField() */

void __thiscall cocos2d::ui::UICCTextField::~UICCTextField(UICCTextField *this)

{
                    /* try { // try from 00dcdf98 to 00ecdfab has its CatchHandler @ 00dce8c8 */
  TextFieldTTF::~TextFieldTTF((TextFieldTTF *)(this + -0x300));
  operator_delete((TextFieldTTF *)(this + -0x300));
  return;
}

