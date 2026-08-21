
/* cocos2d::extension::ControlButton::setTitleBMFontForState(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::extension::Control::State) */

void __thiscall
cocos2d::extension::ControlButton::setTitleBMFontForState
          (ControlButton *this,basic_string *param_1,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_54;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x6b8))(local_50,this,param_3);
  local_54 = 0;
  uVar2 = Label::createWithBMFont
                    (param_1,local_50,(TextHAlignment *)&local_54,0,(Vec2 *)&Vec2::ZERO);
  (**(code **)(*(long *)this + 0x6e0))(this,uVar2,param_3);
                    /* try { // try from 00e0b8b4 to 00f0b8bb has its CatchHandler @ 00e0b984 */
  if (((byte)local_50[0] & 1) != 0) {
                    /* try { // try from 00e0b8bc to 00f0b997 has its CatchHandler @ 00e0b774 */
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

