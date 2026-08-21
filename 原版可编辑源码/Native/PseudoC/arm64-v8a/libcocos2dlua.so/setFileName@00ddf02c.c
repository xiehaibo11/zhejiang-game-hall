
/* cocos2d::experimental::ui::VideoPlayer::setFileName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::experimental::ui::VideoPlayer::setFileName(VideoPlayer *this,basic_string *param_1)

{
  basic_string *pbVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00ddf030 to 00edf037 has its CatchHandler @ 00ddf3fc */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00ddf050 to 00edf057 has its CatchHandler @ 00ddf3f8 */
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x50))(&local_50,plVar4,param_1);
  pbVar1 = (basic_string *)(this + 0x500);
                    /* try { // try from 00ddf074 to 00edf07b has its CatchHandler @ 00ddf3f4 */
  if (((byte)this[0x500] & 1) == 0) {
    *(undefined2 *)pbVar1 = 0;
  }
  else {
    **(undefined1 **)(this + 0x510) = 0;
    *(undefined8 *)(this + 0x508) = 0;
    if (((byte)this[0x500] & 1) != 0) {
      operator_delete(*(void **)(this + 0x510));
      *(undefined8 *)(this + 0x500) = 0;
    }
  }
                    /* try { // try from 00ddf0b4 to 00edf0bb has its CatchHandler @ 00ddf3f0 */
  *(void **)(this + 0x510) = local_40;
  *(undefined8 *)(this + 0x508) = uStack_48;
  *(ulong *)pbVar1 = CONCAT71(uStack_4f,local_50);
  *(undefined4 *)(this + 0x518) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_50,"setVideoUrl");
  uVar2 = *(undefined4 *)(this + 0x51c);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_68,pbVar1);
                    /* try { // try from 00ddf0ec to 00edf0f3 has its CatchHandler @ 00ddf3ec */
  JniHelper::
  callStaticVoidMethod<int,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (&DAT_017889d8,&local_50,uVar2,0,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00ddf128 to 00edf143 has its CatchHandler @ 00ddf454 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

