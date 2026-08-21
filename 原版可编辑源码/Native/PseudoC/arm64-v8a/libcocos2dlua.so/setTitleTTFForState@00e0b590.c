
/* cocos2d::extension::ControlButton::setTitleTTFForState(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::extension::Control::State) */

void __thiscall
cocos2d::extension::ControlButton::setTitleTTFForState
          (ControlButton *this,undefined8 param_1,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x6b8))(local_50,this,param_3);
  uVar2 = Label::createWithSystemFont(0x41400000,local_50,param_1,&Size::ZERO,0,0);
  (**(code **)(*(long *)this + 0x6e0))(this,uVar2,param_3);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

