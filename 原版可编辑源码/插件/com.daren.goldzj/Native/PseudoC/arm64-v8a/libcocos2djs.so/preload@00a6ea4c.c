
/* cocos2d::AudioEngine::preload(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::function<void (bool)>) */

void cocos2d::AudioEngine::preload(basic_string *param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  puVar4 = local_40;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a6ea7c to 00b6eabf has its CatchHandler @ 00a6eb14 */
  if (_isEnabled == '\0') {
    local_3c[0] = 0;
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    lVar5 = *plVar2;
    puVar4 = local_3c;
  }
  else {
    lazyInit();
    if (_audioEngineImpl == (AudioEngineImpl *)0x0) goto LAB_00a6eaf8;
    plVar2 = (long *)FileUtils::getInstance();
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2,param_1);
    if ((uVar3 & 1) != 0) {
      AudioEngineImpl::preload(_audioEngineImpl,param_1,param_2);
                    /* try { // try from 00a6eac0 to 00b6eb93 has its CatchHandler @ 00a6e8f0 */
      goto LAB_00a6eaf8;
    }
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_00a6eaf8;
    local_40[0] = 0;
    lVar5 = *plVar2;
  }
  (**(code **)(lVar5 + 0x30))(plVar2,puVar4);
LAB_00a6eaf8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00a6e970 with catch @ 00a6eb0c */
                    /* catch() { ... } // from try @ 00a6e964 with catch @ 00a6eb10 */
                    /* catch() { ... } // from try @ 00a6e9a0 with catch @ 00a6eb14
                       catch() { ... } // from try @ 00a6ea7c with catch @ 00a6eb14 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

