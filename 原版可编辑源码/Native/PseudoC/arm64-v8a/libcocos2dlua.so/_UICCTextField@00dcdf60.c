
/* non-virtual thunk to cocos2d::ui::UICCTextField::~UICCTextField() */

void __thiscall cocos2d::ui::UICCTextField::~UICCTextField(UICCTextField *this)

{
  TextFieldTTF::~TextFieldTTF((TextFieldTTF *)(this + -0x2f8));
  operator_delete((TextFieldTTF *)(this + -0x2f8));
  return;
}

