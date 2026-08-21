
/* cocos2d::TextFieldTTF::detachWithIME() */

uint __thiscall cocos2d::TextFieldTTF::detachWithIME(TextFieldTTF *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 00f5587c with catch @ 00f55c04 */
                    /* catch() { ... } // from try @ 00f557ec with catch @ 00f55c08 */
                    /* catch() { ... } // from try @ 00f55778 with catch @ 00f55c0c */
                    /* catch() { ... } // from try @ 00f5566c with catch @ 00f55c10 */
                    /* catch() { ... } // from try @ 00f55910 with catch @ 00f55c14 */
  uVar1 = IMEDelegate::detachWithIME((IMEDelegate *)(this + 0x6a0));
  if ((uVar1 & 1) != 0) {
    lVar2 = Director::getInstance();
    plVar3 = *(long **)(lVar2 + 0x108);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
    }
  }
  return uVar1 & 1;
}

