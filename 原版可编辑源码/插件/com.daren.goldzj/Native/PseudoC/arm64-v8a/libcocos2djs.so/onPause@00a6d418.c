
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::AudioEngine::onPause(cocos2d::CustomEvent const&) */

void cocos2d::AudioEngine::onPause(CustomEvent *param_1)

{
  int *piVar1;
  long *plVar2;
  
  plVar2 = DAT_01d38cc8;
joined_r0x00a6d434:
  do {
    if (plVar2 == (long *)0x0) {
      if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
                    /* try { // try from 00a6d4ac to 00b6d4fb has its CatchHandler @ 00a6d4ac
                       catch() { ... } // from try @ 00a6d4ac with catch @ 00a6d4ac
                       catch() { ... } // from try @ 00a6d660 with catch @ 00a6d4ac */
        AudioEngineImpl::onPause(_audioEngineImpl);
        return;
      }
      return;
    }
    if (*(int *)((long)plVar2 + 0x34) == 1) {
      piVar1 = (int *)(plVar2 + 2);
                    /* catch() { ... } // from try @ 00a6d350 with catch @ 00a6d454 */
      AudioEngineImpl::pause(_audioEngineImpl,*piVar1);
      if (DAT_01d38cf8 == DAT_01d38d00) {
        std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                  ((vector<int,std::__ndk1::allocator<int>> *)&_breakAudioID,piVar1);
        plVar2 = (long *)*plVar2;
        goto joined_r0x00a6d434;
      }
      *DAT_01d38cf8 = *piVar1;
      DAT_01d38cf8 = DAT_01d38cf8 + 1;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}

