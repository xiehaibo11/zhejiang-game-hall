
/* cocos2d::experimental::ui::VideoPlayer::onExit() */

void __thiscall cocos2d::experimental::ui::VideoPlayer::onExit(VideoPlayer *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::ui::Widget::onExit((Widget *)this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"setVideoVisible");
                    /* try { // try from 00de0930 to 00ee0a5f has its CatchHandler @ 00de115c */
  JniHelper::callStaticVoidMethod<int,bool>
            ((basic_string *)&DAT_017889d8,(basic_string *)local_40,*(int *)(this + 0x51c),false);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

