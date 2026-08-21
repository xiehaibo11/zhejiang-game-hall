
/* cocos2d::experimental::ui::VideoPlayer::setKeepAspectRatioEnabled(bool) */

void __thiscall
cocos2d::experimental::ui::VideoPlayer::setKeepAspectRatioEnabled(VideoPlayer *this,bool param_1)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x4f5] != (VideoPlayer)param_1) {
    this[0x4f5] = (VideoPlayer)param_1;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"setVideoKeepRatioEnabled");
    JniHelper::callStaticVoidMethod<int,bool>
              ((basic_string *)&DAT_017889d8,(basic_string *)local_50,*(int *)(this + 0x51c),param_1
              );
                    /* try { // try from 00ddfe70 to 00edfe77 has its CatchHandler @ 00ddff6c */
    if (((byte)local_50[0] & 1) != 0) {
                    /* try { // try from 00ddfe78 to 00edfe9b has its CatchHandler @ 00ddfe08 */
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00ddfe9c to 00edfea7 has its CatchHandler @ 00ddff6c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

