
/* cocos2d::experimental::AudioEngine::pauseAll() */

void cocos2d::experimental::AudioEngine::pauseAll(void)

{
  long *plVar1;
  
  for (plVar1 = (long *)DAT_0178f2d8; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if (*(int *)((long)plVar1 + 0x34) == 1) {
      AudioEngineImpl::pause(_audioEngineImpl,*(int *)(plVar1 + 2));
      *(undefined4 *)((long)plVar1 + 0x34) = 2;
    }
  }
  return;
}

