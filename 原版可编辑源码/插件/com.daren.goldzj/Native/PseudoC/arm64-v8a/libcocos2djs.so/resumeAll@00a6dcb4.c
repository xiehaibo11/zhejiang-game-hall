
/* cocos2d::AudioEngine::resumeAll() */

void cocos2d::AudioEngine::resumeAll(void)

{
  long *plVar1;
  
  for (plVar1 = (long *)DAT_01d38cc8; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if (*(int *)((long)plVar1 + 0x34) == 2) {
                    /* try { // try from 00a6dcf4 to 00b6dd37 has its CatchHandler @ 00a6dd6c */
      AudioEngineImpl::resume(_audioEngineImpl,*(int *)(plVar1 + 2));
      *(undefined4 *)((long)plVar1 + 0x34) = 1;
    }
  }
  return;
}

