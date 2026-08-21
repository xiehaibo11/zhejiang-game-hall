
/* cocos2d::VideoPlayer::addEventListener(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   ()> const&) */

void __thiscall
cocos2d::VideoPlayer::addEventListener(VideoPlayer *this,basic_string *param_1,function *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = std::__ndk1::
          map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void()>>>>
          ::operator[]((map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void()>>>>
                        *)(this + 0x30),param_1);
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar3) {
    local_50 = alStack_70;
                    /* try { // try from 009d8414 to 00ad8453 has its CatchHandler @ 009d8414
                       catch() { ... } // from try @ 009d8414 with catch @ 009d8414
                       catch() { ... } // from try @ 009d8528 with catch @ 009d8414 */
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
                    /* catch() { ... } // from try @ 009d8184 with catch @ 009d83e8 */
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3);
                    /* catch() { ... } // from try @ 009d8190 with catch @ 009d83ec
                       catch() { ... } // from try @ 009d82dc with catch @ 009d83ec */
  }
  FUN_008feca4(alStack_70,uVar2);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_009d8450;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_009d8450:
                    /* try { // try from 009d8454 to 00ad845b has its CatchHandler @ 009d85f0 */
                    /* try { // try from 009d845c to 00ad8463 has its CatchHandler @ 009d85e8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009d8464 to 00ad846b has its CatchHandler @ 009d85e0 */
                    /* try { // try from 009d846c to 00ad8527 has its CatchHandler @ 009d85f8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

