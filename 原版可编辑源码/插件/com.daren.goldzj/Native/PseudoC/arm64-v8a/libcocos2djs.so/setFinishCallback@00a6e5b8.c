
/* cocos2d::AudioEngine::setFinishCallback(int, std::__ndk1::function<void (int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> const&) */

void cocos2d::AudioEngine::setFinishCallback(int param_1,function *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (DAT_01d38cc0 != 0) {
    uVar2 = DAT_01d38cc0 - 1;
    uVar3 = (ulong)param_1;
    if ((uVar2 & DAT_01d38cc0) == 0) {
      uVar4 = uVar2 & uVar3;
    }
    else {
                    /* catch() { ... } // from try @ 00a6e45c with catch @ 00a6e5e0 */
                    /* catch() { ... } // from try @ 00a6e450 with catch @ 00a6e5e4 */
                    /* catch() { ... } // from try @ 00a6e48c with catch @ 00a6e5e8
                       catch() { ... } // from try @ 00a6e550 with catch @ 00a6e5e8 */
      uVar4 = uVar3;
      if (DAT_01d38cc0 <= uVar3) {
        uVar4 = 0;
        if (DAT_01d38cc0 != 0) {
          uVar4 = uVar3 / DAT_01d38cc0;
        }
        uVar4 = uVar3 - uVar4 * DAT_01d38cc0;
      }
    }
                    /* catch() { ... } // from try @ 00a6e430 with catch @ 00a6e600 */
    plVar5 = *(long **)(_audioIDInfoMap + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) {
              return;
            }
                    /* catch() { ... } // from try @ 00a6e468 with catch @ 00a6e610
                       catch() { ... } // from try @ 00a6e4c0 with catch @ 00a6e610 */
            uVar6 = plVar5[1];
            if (uVar6 != uVar3) break;
            if (*(int *)(plVar5 + 2) == param_1) {
                    /* try { // try from 00a6e668 to 00b6e6bb has its CatchHandler @ 00a6e668
                       catch() { ... } // from try @ 00a6e668 with catch @ 00a6e668
                       catch() { ... } // from try @ 00a6e854 with catch @ 00a6e668 */
              AudioEngineImpl::setFinishCallback(_audioEngineImpl,param_1,param_2);
              return;
            }
          }
          if ((uVar2 & DAT_01d38cc0) == 0) break;
          if (DAT_01d38cc0 <= uVar6) {
            uVar1 = 0;
            if (DAT_01d38cc0 != 0) {
              uVar1 = uVar6 / DAT_01d38cc0;
            }
            uVar6 = uVar6 - uVar1 * DAT_01d38cc0;
          }
          if (uVar6 != uVar4) {
            return;
          }
        }
      } while ((uVar6 & uVar2) == uVar4);
    }
  }
  return;
}

