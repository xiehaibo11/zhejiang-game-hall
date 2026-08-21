
/* non-virtual thunk to cocos2d::ui::UICCTextField::onTextFieldInsertText(cocos2d::TextFieldTTF*,
   char const*, unsigned long) */

undefined4 __thiscall
cocos2d::ui::UICCTextField::onTextFieldInsertText
          (UICCTextField *this,TextFieldTTF *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* try { // try from 00dce260 to 00ece273 has its CatchHandler @ 00dce888 */
  if ((param_3 == 1) && (iVar1 = strcmp(param_2,"\n"), iVar1 == 0)) {
    return 0;
  }
                    /* try { // try from 00dce278 to 00ece29f has its CatchHandler @ 00dce920 */
  this[0x12] = (UICCTextField)0x1;
  if ((this[8] == (UICCTextField)0x0) || (*(int *)(this + -0x88) < *(int *)(this + 0xc))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

