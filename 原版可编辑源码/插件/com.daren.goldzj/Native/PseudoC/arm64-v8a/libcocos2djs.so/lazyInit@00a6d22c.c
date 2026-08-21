
/* cocos2d::AudioEngine::lazyInit() */

void cocos2d::AudioEngine::lazyInit(void)

{
  long lVar1;
  undefined8 uVar2;
  AudioEngineImpl *this;
  ulong uVar3;
  code *pcVar4;
  basic_string local_88;
  undefined6 uStack_87;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined6 uStack_7f;
  undefined1 uStack_79;
  void *local_78;
  undefined **local_70;
  code *local_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a6d09c with catch @ 00a6d254 */
                    /* catch() { ... } // from try @ 00a6d090 with catch @ 00a6d258 */
  if (_audioEngineImpl == (AudioEngineImpl *)0x0) {
                    /* catch() { ... } // from try @ 00a6d0a8 with catch @ 00a6d26c */
    this = operator_new(0xb0,(nothrow_t *)&std::nothrow);
    if (this != (AudioEngineImpl *)0x0) {
      AudioEngineImpl::AudioEngineImpl(this);
      _audioEngineImpl = this;
      uVar3 = AudioEngineImpl::init(this);
      if ((uVar3 & 1) != 0) {
        local_78 = (void *)0x0;
        local_70 = &PTR_FUN_01c6eaf0;
        local_88 = (basic_string)0x1c;
                    /* try { // try from 00a6d2c4 to 00b6d317 has its CatchHandler @ 00a6d2c4
                       catch() { ... } // from try @ 00a6d2c4 with catch @ 00a6d2c4
                       catch() { ... } // from try @ 00a6d3c8 with catch @ 00a6d2c4 */
        local_68 = onPause;
        uStack_7f = 0x65737561705f;
        uStack_87 = 0x5f746e657665;
        uStack_81 = 0x6f;
        uStack_80 = 0x6e;
        uStack_79 = 0;
        local_50 = &local_70;
        _onPauseListenerID =
             EventDispatcher::addCustomEventListener(&local_88,(function *)&local_70);
        if (&local_70 == local_50) {
          pcVar4 = (code *)(*local_50)[4];
LAB_00a6d364:
          (*pcVar4)();
        }
        else if (local_50 != (undefined ***)0x0) {
          pcVar4 = (code *)(*local_50)[5];
          goto LAB_00a6d364;
        }
        if (((byte)local_88 & 1) != 0) {
          operator_delete(local_78);
        }
        local_88 = (basic_string)0x1e;
        local_70 = &PTR_FUN_01c6eaf0;
        local_68 = onResume;
        uStack_7f = 0x6d757365725f;
        uStack_79 = 0x65;
        uStack_87 = 0x5f746e657665;
        uStack_81 = 0x6f;
        uStack_80 = 0x6e;
        local_78 = (void *)0x0;
        local_50 = &local_70;
        _onResumeListenerID =
             EventDispatcher::addCustomEventListener(&local_88,(function *)&local_70);
                    /* try { // try from 00a6d3c8 to 00b6d4ab has its CatchHandler @ 00a6d2c4 */
        if (&local_70 == local_50) {
          pcVar4 = (code *)(*local_50)[4];
LAB_00a6d3fc:
          (*pcVar4)();
        }
        else if (local_50 != (undefined ***)0x0) {
          pcVar4 = (code *)(*local_50)[5];
          goto LAB_00a6d3fc;
        }
        if (((byte)local_88 & 1) != 0) {
          operator_delete(local_78);
        }
        goto LAB_00a6d25c;
      }
      if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
        (**(code **)(*(long *)_audioEngineImpl + 8))();
      }
    }
    uVar2 = 0;
    _audioEngineImpl = (AudioEngineImpl *)0x0;
  }
  else {
LAB_00a6d25c:
                    /* catch() { ... } // from try @ 00a6d070 with catch @ 00a6d25c */
    uVar2 = 1;
  }
                    /* try { // try from 00a6d338 to 00b6d343 has its CatchHandler @ 00a6d440 */
                    /* try { // try from 00a6d344 to 00b6d34f has its CatchHandler @ 00a6d43c */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
                    /* try { // try from 00a6d350 to 00b6d3c7 has its CatchHandler @ 00a6d454 */
  return;
}

