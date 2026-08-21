
/* cocos2d::experimental::ui::VideoPlayer::stop() */

void __thiscall cocos2d::experimental::ui::VideoPlayer::stop(VideoPlayer *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
                    /* try { // try from 00de034c to 00ee038f has its CatchHandler @ 00de0228 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x500] & 1) == 0) {
    if ((byte)this[0x500] >> 1 == 0) goto LAB_00de03bc;
  }
  else if (*(long *)(this + 0x508) == 0) goto LAB_00de03bc;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00de02f0 with catch @ 00de0388
                       catch(type#1 @ 00000000) { ... } // from try @ 00de0318 with catch @ 00de0388
                       catch(type#1 @ 00000000) { ... } // from try @ 00de0340 with catch @ 00de0388
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00de0290 with catch @ 00de038c
                       catch(type#1 @ 00000000) { ... } // from try @ 00de02bc with catch @ 00de038c
                        */
                    /* catch() { ... } // from try @ 00de03c8 with catch @ 00de0390 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"stopVideo");
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_017889d8,(basic_string *)local_40,*(int *)(this + 0x51c));
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
LAB_00de03bc:
                    /* try { // try from 00de03c0 to 00ee03c7 has its CatchHandler @ 00de03f4 */
                    /* try { // try from 00de03c8 to 00ee040f has its CatchHandler @ 00de0390 */
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

