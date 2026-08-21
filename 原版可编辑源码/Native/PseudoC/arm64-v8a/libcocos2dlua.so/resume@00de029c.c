
/* cocos2d::experimental::ui::VideoPlayer::resume() */

void __thiscall cocos2d::experimental::ui::VideoPlayer::resume(VideoPlayer *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00de02bc to 00ee02c7 has its CatchHandler @ 00de038c */
  if (((byte)this[0x500] & 1) == 0) {
                    /* try { // try from 00de02c8 to 00ee02ef has its CatchHandler @ 00de0228 */
    if ((byte)this[0x500] >> 1 == 0) goto LAB_00de030c;
  }
  else if (*(long *)(this + 0x508) == 0) goto LAB_00de030c;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"resumeVideo");
                    /* try { // try from 00de02f0 to 00ee02f7 has its CatchHandler @ 00de0388 */
                    /* try { // try from 00de02f8 to 00ee0317 has its CatchHandler @ 00de0228 */
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_017889d8,(basic_string *)local_40,*(int *)(this + 0x51c));
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
LAB_00de030c:
                    /* try { // try from 00de0318 to 00ee031f has its CatchHandler @ 00de0388 */
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00de0320 to 00ee033f has its CatchHandler @ 00de0228 */
  return;
}

