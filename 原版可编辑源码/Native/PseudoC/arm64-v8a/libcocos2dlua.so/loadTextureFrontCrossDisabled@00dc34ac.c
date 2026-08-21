
/* cocos2d::ui::AbstractCheckButton::loadTextureFrontCrossDisabled(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::AbstractCheckButton::loadTextureFrontCrossDisabled
          (AbstractCheckButton *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long *plVar3;
  code *pcVar4;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x5a8) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
                    /* catch() { ... } // from try @ 00dc37f4 with catch @ 00dc34e8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x5a8),(char *)pbVar2,uVar1);
  }
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  this[0x51b] = (AbstractCheckButton)(uVar1 != 0);
  if (uVar1 == 0) {
    return;
  }
  *(int *)(this + 0x52c) = param_3;
  if (param_3 == 1) {
    plVar3 = *(long **)(this + 0x510);
    pcVar4 = *(code **)(*plVar3 + 0x590);
  }
  else {
    if (param_3 != 0) goto LAB_00dc3558;
    plVar3 = *(long **)(this + 0x510);
    pcVar4 = *(code **)(*plVar3 + 0x540);
  }
  (*pcVar4)(plVar3,param_1);
LAB_00dc3558:
                    /* try { // try from 00dc3560 to 00ec356f has its CatchHandler @ 00dc3858 */
                    /* WARNING: Could not recover jumptable at 0x00dc3570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6b0))(this);
  return;
}

