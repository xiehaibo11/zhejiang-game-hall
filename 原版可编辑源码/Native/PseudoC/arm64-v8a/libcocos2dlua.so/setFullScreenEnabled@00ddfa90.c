
/* cocos2d::experimental::ui::VideoPlayer::setFullScreenEnabled(bool) */

void __thiscall
cocos2d::experimental::ui::VideoPlayer::setFullScreenEnabled(VideoPlayer *this,bool param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58 [16];
  void *local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x4f4] != (VideoPlayer)param_1) {
    this[0x4f4] = (VideoPlayer)param_1;
    lVar2 = Director::getInstance();
    (**(code **)(**(long **)(lVar2 + 0x108) + 0x48))(&local_40);
                    /* try { // try from 00ddfae0 to 00edfae7 has its CatchHandler @ 00ddfb24 */
                    /* try { // try from 00ddfae8 to 00edfaef has its CatchHandler @ 00ddfb20 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_58,"setFullScreenEnabled");
                    /* try { // try from 00ddfaf0 to 00edfaf7 has its CatchHandler @ 00ddfb1c */
                    /* try { // try from 00ddfaf8 to 00edfaff has its CatchHandler @ 00ddfb18 */
                    /* try { // try from 00ddfb00 to 00edfb07 has its CatchHandler @ 00ddfb14 */
                    /* try { // try from 00ddfb08 to 00edfb0f has its CatchHandler @ 00ddfb10 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddfb08 with catch @ 00ddfb10
                       try { // try from 00ddfb10 to 00edfb7b has its CatchHandler @ 00ddf490 */
    JniHelper::callStaticVoidMethod<int,bool,int,int>
              ((basic_string *)&DAT_017889d8,(basic_string *)local_58,*(int *)(this + 0x51c),param_1
               ,(int)local_40,(int)fStack_3c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddfb00 with catch @ 00ddfb14
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddfaf8 with catch @ 00ddfb18
                        */
    if (((byte)local_58[0] & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddfaf0 with catch @ 00ddfb1c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddfae8 with catch @ 00ddfb20
                        */
      operator_delete(local_48);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddfae0 with catch @ 00ddfb24
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddf8dc with catch @ 00ddfb28
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddf6b8 with catch @ 00ddfb2c
                        */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddf9f0 with catch @ 00ddfb3c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ddf750 with catch @ 00ddfb40
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

