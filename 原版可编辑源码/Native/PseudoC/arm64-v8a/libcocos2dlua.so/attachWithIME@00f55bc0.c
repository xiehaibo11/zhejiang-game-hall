
/* non-virtual thunk to cocos2d::TextFieldTTF::attachWithIME() */

uint __thiscall cocos2d::TextFieldTTF::attachWithIME(TextFieldTTF *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 00f55ae0 with catch @ 00f55bc8 */
                    /* catch() { ... } // from try @ 00f5519c with catch @ 00f55bcc */
  uVar1 = IMEDelegate::attachWithIME((IMEDelegate *)this);
                    /* catch() { ... } // from try @ 00f55194 with catch @ 00f55bd0 */
  if ((uVar1 & 1) != 0) {
                    /* catch() { ... } // from try @ 00f5518c with catch @ 00f55bd8 */
    lVar2 = Director::getInstance();
    plVar3 = *(long **)(lVar2 + 0x108);
                    /* catch() { ... } // from try @ 00f5517c with catch @ 00f55be0 */
    if (plVar3 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00f5516c with catch @ 00f55be8 */
                    /* catch() { ... } // from try @ 00f55a5c with catch @ 00f55bf0
                       catch() { ... } // from try @ 00f55b38 with catch @ 00f55bf0 */
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
  }
                    /* catch() { ... } // from try @ 00f55218 with catch @ 00f55bf4
                       catch() { ... } // from try @ 00f55a08 with catch @ 00f55bf4 */
                    /* catch() { ... } // from try @ 00f55754 with catch @ 00f55bf8 */
                    /* catch() { ... } // from try @ 00f55638 with catch @ 00f55bfc */
                    /* catch() { ... } // from try @ 00f55604 with catch @ 00f55c00 */
  return uVar1 & 1;
}

