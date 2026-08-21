
/* cocos2d::ui::AbstractCheckButton::loadTextureBackGroundSelected(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void __thiscall
cocos2d::ui::AbstractCheckButton::loadTextureBackGroundSelected
          (AbstractCheckButton *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long *plVar3;
  code *pcVar4;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x560) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x560),(char *)pbVar2,uVar1);
  }
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  this[0x519] = (AbstractCheckButton)(uVar1 != 0);
  if (uVar1 == 0) {
    return;
  }
  *(int *)(this + 0x520) = param_3;
  if (param_3 == 1) {
    plVar3 = *(long **)(this + 0x4f8);
    pcVar4 = *(code **)(*plVar3 + 0x590);
  }
  else {
    if (param_3 != 0) goto LAB_00dc3334;
    plVar3 = *(long **)(this + 0x4f8);
    pcVar4 = *(code **)(*plVar3 + 0x540);
  }
  (*pcVar4)(plVar3,param_1);
LAB_00dc3334:
                    /* WARNING: Could not recover jumptable at 0x00dc334c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x698))(this);
  return;
}

