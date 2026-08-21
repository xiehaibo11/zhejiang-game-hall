
/* cocos2d::TextFieldTTF::attachWithIME() */

uint __thiscall cocos2d::TextFieldTTF::attachWithIME(TextFieldTTF *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = IMEDelegate::attachWithIME((IMEDelegate *)(this + 0x6a0));
  if ((uVar1 & 1) != 0) {
    lVar2 = Director::getInstance();
                    /* catch() { ... } // from try @ 00f55b0c with catch @ 00f55b98 */
    plVar3 = *(long **)(lVar2 + 0x108);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
  }
                    /* catch() { ... } // from try @ 00f55af0 with catch @ 00f55bb0 */
  return uVar1 & 1;
}

