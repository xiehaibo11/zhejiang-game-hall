
/* non-virtual thunk to cocos2d::TextFieldTTF::detachWithIME() */

uint __thiscall cocos2d::TextFieldTTF::detachWithIME(TextFieldTTF *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = IMEDelegate::detachWithIME((IMEDelegate *)this);
  if ((uVar1 & 1) != 0) {
    lVar2 = Director::getInstance();
    plVar3 = *(long **)(lVar2 + 0x108);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
    }
  }
  return uVar1 & 1;
}

