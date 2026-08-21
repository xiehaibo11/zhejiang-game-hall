
/* cocos2d::extension::ControlButton::initWithBackgroundSprite(cocos2d::ui::Scale9Sprite*) */

uint __thiscall
cocos2d::extension::ControlButton::initWithBackgroundSprite
          (ControlButton *this,Scale9Sprite *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,"Arial");
  uVar3 = Label::createWithSystemFont(0x41f00000,local_50,local_68,&Size::ZERO,0,0);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
                    /* try { // try from 00e0a98c to 00f0a993 has its CatchHandler @ 00e0aa5c */
  if (((byte)local_50[0] & 1) != 0) {
                    /* try { // try from 00e0a994 to 00f0aa6f has its CatchHandler @ 00e0a81c */
    operator_delete(local_40);
  }
  uVar2 = (**(code **)(*(long *)this + 0x738))(this,uVar3,param_1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

