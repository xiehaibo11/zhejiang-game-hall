
/* cocos2d::AudioEngine::pauseAll() */

void cocos2d::AudioEngine::pauseAll(void)

{
  long *plVar1;
  
  for (plVar1 = (long *)DAT_01d38cc8; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if (*(int *)((long)plVar1 + 0x34) == 1) {
      AudioEngineImpl::pause(_audioEngineImpl,*(int *)(plVar1 + 2));
                    /* try { // try from 00a6dbbc to 00b6dbc3 has its CatchHandler @ 00a6dd54 */
      *(undefined4 *)((long)plVar1 + 0x34) = 2;
    }
                    /* try { // try from 00a6dbc4 to 00b6dbe7 has its CatchHandler @ 00a6da14 */
  }
  return;
}

