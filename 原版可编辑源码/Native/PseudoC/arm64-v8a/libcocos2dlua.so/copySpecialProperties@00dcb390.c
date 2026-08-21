
/* cocos2d::ui::LoadingBar::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::LoadingBar::copySpecialProperties(LoadingBar *this,Widget *param_1)

{
  Size *this_00;
  ulong uVar1;
  long lVar2;
  LoadingBar *pLVar3;
  LoadingBar *pLVar4;
  long *plVar5;
  pointer_____offset_0x10___ *ppuVar6;
  Rect aRStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 != (Widget *)0x0) {
    ppuVar6 = &typeinfo;
    pLVar4 = (LoadingBar *)__dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0);
    if (pLVar4 != (LoadingBar *)0x0) {
      this[0x525] = pLVar4[0x525];
      setScale9Enabled(SUB81(this,0));
      Scale9Sprite::copyTo(*(Scale9Sprite **)(pLVar4 + 0x500),*(Scale9Sprite **)(this + 0x500));
      setupTexture(this);
      this_00 = (Size *)(this + 0x50c);
      Helper::restrictCapInsetRect((Helper *)(pLVar4 + 0x528),this_00,(Size *)ppuVar6);
      Rect::operator=((Rect *)(this + 0x528),aRStack_58);
                    /* try { // try from 00dcb430 to 00ecb437 has its CatchHandler @ 00dccb94 */
      if (this[0x524] != (LoadingBar)0x0) {
        plVar5 = *(long **)(this + 0x500);
        (**(code **)(*plVar5 + 0x560))(plVar5,this + 0x514,(char)plVar5[0x83],this_00);
        Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x500),(Rect *)(this + 0x528));
      }
      setPercent(this,*(float *)(pLVar4 + 0x4f4));
                    /* try { // try from 00dcb474 to 00ecb47f has its CatchHandler @ 00dcca28 */
      setDirection(this,*(undefined4 *)(pLVar4 + 0x4f0));
      if (this != pLVar4) {
        uVar1 = (ulong)((byte)pLVar4[0x540] >> 1);
        pLVar3 = pLVar4 + 0x541;
        if (((byte)pLVar4[0x540] & 1) != 0) {
          uVar1 = *(ulong *)(pLVar4 + 0x548);
          pLVar3 = *(LoadingBar **)(pLVar4 + 0x550);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x540),(char *)pLVar3,uVar1);
      }
      *(undefined4 *)(this + 0x4f8) = *(undefined4 *)(pLVar4 + 0x4f8);
      Size::operator=(this_00,(Size *)(pLVar4 + 0x50c));
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

