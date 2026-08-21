
/* cocos2d::experimental::ui::VideoPlayer::pause() */

void __thiscall cocos2d::experimental::ui::VideoPlayer::pause(VideoPlayer *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x500] & 1) == 0) {
    if ((byte)this[0x500] >> 1 == 0) goto LAB_00de025c;
  }
  else if (*(long *)(this + 0x508) == 0) goto LAB_00de025c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00de0298 with catch @ 00de0228
                       catch(type#1 @ 00000000) { ... } // from try @ 00de02c8 with catch @ 00de0228
                       catch(type#1 @ 00000000) { ... } // from try @ 00de02f8 with catch @ 00de0228
                       catch(type#1 @ 00000000) { ... } // from try @ 00de0320 with catch @ 00de0228
                       catch(type#1 @ 00000000) { ... } // from try @ 00de034c with catch @ 00de0228
                        */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"pauseVideo");
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_017889d8,(basic_string *)local_40,*(int *)(this + 0x51c));
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
LAB_00de025c:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

