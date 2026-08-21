
/* cocos2d::ui::UICCTextField::~UICCTextField() */

void __thiscall cocos2d::ui::UICCTextField::~UICCTextField(UICCTextField *this)

{
                    /* try { // try from 00dcdf40 to 00ecdf53 has its CatchHandler @ 00dce8d8 */
  TextFieldTTF::~TextFieldTTF((TextFieldTTF *)this);
                    /* try { // try from 00dcdf58 to 00ecdf87 has its CatchHandler @ 00dceca0 */
  operator_delete(this);
  return;
}

