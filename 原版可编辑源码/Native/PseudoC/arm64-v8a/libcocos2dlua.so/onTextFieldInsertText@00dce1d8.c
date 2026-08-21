
/* cocos2d::ui::UICCTextField::onTextFieldInsertText(cocos2d::TextFieldTTF*, char const*, unsigned
   long) */

undefined4 __thiscall
cocos2d::ui::UICCTextField::onTextFieldInsertText
          (UICCTextField *this,TextFieldTTF *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* try { // try from 00dce1d8 to 00ece1eb has its CatchHandler @ 00dced94 */
                    /* try { // try from 00dce1f0 to 00ece207 has its CatchHandler @ 00dce934 */
  if ((param_3 == 1) && (iVar1 = strcmp(param_2,"\n"), iVar1 == 0)) {
    return 0;
  }
                    /* try { // try from 00dce208 to 00ece21b has its CatchHandler @ 00dce898 */
  this[0x74a] = (UICCTextField)0x1;
                    /* try { // try from 00dce220 to 00ece24f has its CatchHandler @ 00dcebe0 */
  if ((this[0x740] == (UICCTextField)0x0) || (*(int *)(this + 0x6b0) < *(int *)(this + 0x744))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

