
/* cocos2d::experimental::ui::VideoPlayer::onEnter() */

void __thiscall cocos2d::experimental::ui::VideoPlayer::onEnter(VideoPlayer *this)

{
  long lVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::ui::Widget::onEnter((Widget *)this);
  uVar2 = (**(code **)(*(long *)this + 0x178))(this);
  if ((uVar2 & 1) != 0) {
    if (((byte)this[0x500] & 1) == 0) {
      if ((byte)this[0x500] >> 1 == 0) goto LAB_00de08b0;
    }
    else if (*(long *)(this + 0x508) == 0) goto LAB_00de08b0;
                    /* try { // try from 00de0880 to 00ee088f has its CatchHandler @ 00de11c4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_40,"setVideoVisible");
    JniHelper::callStaticVoidMethod<int,bool>
              ((basic_string *)&DAT_017889d8,(basic_string *)local_40,*(int *)(this + 0x51c),true);
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
LAB_00de08b0:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

