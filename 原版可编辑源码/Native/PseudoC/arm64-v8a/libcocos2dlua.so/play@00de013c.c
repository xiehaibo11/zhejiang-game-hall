
/* cocos2d::experimental::ui::VideoPlayer::play() */

void __thiscall cocos2d::experimental::ui::VideoPlayer::play(VideoPlayer *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
                    /* try { // try from 00de0144 to 00ee014f has its CatchHandler @ 00de018c */
  lVar1 = tpidr_el0;
                    /* try { // try from 00de0150 to 00ee0193 has its CatchHandler @ 00de002c */
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x500] & 1) == 0) {
    if ((byte)this[0x500] >> 1 == 0) goto LAB_00de01ac;
  }
  else if (*(long *)(this + 0x508) == 0) goto LAB_00de01ac;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"startVideo");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00de00f4 with catch @ 00de018c
                       catch(type#1 @ 00000000) { ... } // from try @ 00de011c with catch @ 00de018c
                       catch(type#1 @ 00000000) { ... } // from try @ 00de0144 with catch @ 00de018c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00de0094 with catch @ 00de0190
                       catch(type#1 @ 00000000) { ... } // from try @ 00de00c0 with catch @ 00de0190
                        */
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_017889d8,(basic_string *)local_40,*(int *)(this + 0x51c));
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
LAB_00de01ac:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

