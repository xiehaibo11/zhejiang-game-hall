
/* cocos2d::experimental::ui::VideoPlayer::setVisible(bool) */

void __thiscall cocos2d::experimental::ui::VideoPlayer::setVisible(VideoPlayer *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00de075c to 00ee07b7 has its CatchHandler @ 00de075c
                       catch() { ... } // from try @ 00de075c with catch @ 00de075c
                       catch() { ... } // from try @ 00de107c with catch @ 00de075c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Node::setVisible((Node *)this,param_1);
  if ((!param_1) || (uVar2 = (**(code **)(*(long *)this + 0x318))(this), (uVar2 & 1) != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"setVideoVisible");
                    /* try { // try from 00de07b8 to 00ee07cf has its CatchHandler @ 00de114c */
    JniHelper::callStaticVoidMethod<int,bool>
              ((basic_string *)&DAT_017889d8,(basic_string *)local_50,*(int *)(this + 0x51c),param_1
              );
                    /* try { // try from 00de07d4 to 00ee07e3 has its CatchHandler @ 00de1148 */
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
                    /* try { // try from 00de07e4 to 00ee07f3 has its CatchHandler @ 00de1138 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

