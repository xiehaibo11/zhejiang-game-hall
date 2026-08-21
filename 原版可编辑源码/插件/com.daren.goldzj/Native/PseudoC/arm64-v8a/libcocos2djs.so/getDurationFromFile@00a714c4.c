
/* cocos2d::AudioEngineImpl::getDurationFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined1  [16] __thiscall
cocos2d::AudioEngineImpl::getDurationFromFile(AudioEngineImpl *this,basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 00a71248 with catch @ 00a714cc */
                    /* catch() { ... } // from try @ 00a71234 with catch @ 00a714dc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xa0) == 0) {
    auVar4 = ZEXT816(0);
  }
  else {
                    /* catch() { ... } // from try @ 00a71228 with catch @ 00a714f4 */
    plVar2 = (long *)FileUtils::getInstance();
                    /* catch() { ... } // from try @ 00a71214 with catch @ 00a714fc */
                    /* catch() { ... } // from try @ 00a71200 with catch @ 00a71500 */
                    /* catch() { ... } // from try @ 00a71208 with catch @ 00a71508 */
    (**(code **)(*plVar2 + 0x40))(local_50,plVar2,param_1);
    auVar4 = AudioPlayerProvider::getDurationFromFile
                       (*(AudioPlayerProvider **)(this + 0xa0),local_50);
    uVar5 = auVar4._8_8_;
    uVar3 = auVar4._0_8_;
                    /* catch() { ... } // from try @ 00a711e0 with catch @ 00a71520 */
                    /* catch() { ... } // from try @ 00a711b0 with catch @ 00a71524 */
    if (((byte)local_50[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00a7117c with catch @ 00a71528 */
                    /* catch() { ... } // from try @ 00a71170 with catch @ 00a7152c */
      operator_delete(local_40);
      auVar4._8_8_ = uVar5;
      auVar4._0_8_ = uVar3;
                    /* catch() { ... } // from try @ 00a711d4 with catch @ 00a71530
                       catch() { ... } // from try @ 00a71314 with catch @ 00a71530
                       catch() { ... } // from try @ 00a71368 with catch @ 00a71530 */
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

