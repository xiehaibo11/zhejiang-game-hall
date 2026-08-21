
/* cocos2d::ui::RelativeLayoutParameter::copyProperties(cocos2d::ui::LayoutParameter*) */

void __thiscall
cocos2d::ui::RelativeLayoutParameter::copyProperties
          (RelativeLayoutParameter *this,LayoutParameter *param_1)

{
  ulong uVar1;
  RelativeLayoutParameter *pRVar2;
  RelativeLayoutParameter *pRVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x24) = uVar4;
  if ((param_1 != (LayoutParameter *)0x0) &&
     (pRVar3 = (RelativeLayoutParameter *)
               __dynamic_cast(param_1,&LayoutParameter::typeinfo,&typeinfo,0),
     pRVar3 != (RelativeLayoutParameter *)0x0)) {
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(pRVar3 + 0x38);
    if (this != pRVar3) {
      uVar1 = (ulong)((byte)pRVar3[0x58] >> 1);
      pRVar2 = pRVar3 + 0x59;
      if (((byte)pRVar3[0x58] & 1) != 0) {
        uVar1 = *(ulong *)(pRVar3 + 0x60);
        pRVar2 = *(RelativeLayoutParameter **)(pRVar3 + 0x68);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x58),(char *)pRVar2,uVar1);
    }
    if (this != pRVar3) {
                    /* try { // try from 00db2d0c to 00eb2d8b has its CatchHandler @ 00db3014 */
      uVar1 = (ulong)((byte)pRVar3[0x40] >> 1);
      pRVar2 = pRVar3 + 0x41;
      if (((byte)pRVar3[0x40] & 1) != 0) {
        uVar1 = *(ulong *)(pRVar3 + 0x48);
        pRVar2 = *(RelativeLayoutParameter **)(pRVar3 + 0x50);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x40),(char *)pRVar2,uVar1);
    }
  }
  return;
}

