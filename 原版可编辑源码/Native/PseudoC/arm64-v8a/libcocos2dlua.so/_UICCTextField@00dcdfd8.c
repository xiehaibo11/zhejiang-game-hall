
/* non-virtual thunk to cocos2d::ui::UICCTextField::~UICCTextField() */

void __thiscall cocos2d::ui::UICCTextField::~UICCTextField(UICCTextField *this)

{
                    /* try { // try from 00dcdfe8 to 00ece027 has its CatchHandler @ 00dceaa0 */
  TextFieldTTF::~TextFieldTTF((TextFieldTTF *)(this + -0x738));
  operator_delete((TextFieldTTF *)(this + -0x738));
  return;
}

