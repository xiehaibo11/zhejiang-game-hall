
/* cocos2d::experimental::ui::VideoPlayer::seekTo(float) */

void __thiscall cocos2d::experimental::ui::VideoPlayer::seekTo(VideoPlayer *this,float param_1)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00de0448 with catch @ 00de0410 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x500] & 1) == 0) {
    if ((byte)this[0x500] >> 1 == 0) goto LAB_00de0484;
  }
  else if (*(long *)(this + 0x508) == 0) goto LAB_00de0484;
                    /* try { // try from 00de0440 to 00ee0447 has its CatchHandler @ 00de0474 */
                    /* try { // try from 00de0448 to 00ee048f has its CatchHandler @ 00de0410 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"seekVideoTo");
  JniHelper::callStaticVoidMethod<int,int>
            ((basic_string *)&DAT_017889d8,(basic_string *)local_50,*(int *)(this + 0x51c),
             (int)(param_1 * 1000.0));
                    /* catch() { ... } // from try @ 00de0440 with catch @ 00de0474 */
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00de0484:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

