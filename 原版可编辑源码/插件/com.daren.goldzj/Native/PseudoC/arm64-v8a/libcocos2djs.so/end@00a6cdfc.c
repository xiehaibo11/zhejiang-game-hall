
/* cocos2d::AudioEngine::end() */

void cocos2d::AudioEngine::end(void)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  AudioEngineThreadPool *pAVar6;
  long lVar7;
  byte *pbVar8;
  basic_string local_60;
  undefined6 uStack_5f;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined6 uStack_57;
  undefined1 uStack_51;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  stopAll();
  pAVar6 = s_threadPool;
  if (s_threadPool != (AudioEngineThreadPool *)0x0) {
    AudioEngineThreadPool::~AudioEngineThreadPool(s_threadPool);
    operator_delete(pAVar6);
    s_threadPool = (AudioEngineThreadPool *)0x0;
  }
  if (_audioEngineImpl != (long *)0x0) {
    (**(code **)(*_audioEngineImpl + 8))();
  }
  pbVar5 = _defaultProfileHelper;
  _audioEngineImpl = (long *)0x0;
  if (_defaultProfileHelper != (byte *)0x0) {
    if (*(long *)(_defaultProfileHelper + 0x38) != 0) {
      lVar2 = *(long *)(_defaultProfileHelper + 0x28);
      pbVar3 = *(byte **)(_defaultProfileHelper + 0x30);
      pbVar1 = _defaultProfileHelper + 0x28;
      lVar7 = *(long *)pbVar3;
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar2 + 8);
      **(long **)(lVar2 + 8) = lVar7;
      pbVar5[0x38] = 0;
      pbVar5[0x39] = 0;
      pbVar5[0x3a] = 0;
      pbVar5[0x3b] = 0;
      pbVar5[0x3c] = 0;
      pbVar5[0x3d] = 0;
      pbVar5[0x3e] = 0;
      pbVar5[0x3f] = 0;
      while (pbVar3 != pbVar1) {
                    /* try { // try from 00a6cea8 to 00b6ceb7 has its CatchHandler @ 00a6cf74 */
        pbVar8 = *(byte **)(pbVar3 + 8);
        operator_delete(pbVar3);
                    /* try { // try from 00a6ceb8 to 00b6d01b has its CatchHandler @ 00a6cb48 */
        pbVar3 = pbVar8;
      }
    }
    if ((*pbVar5 & 1) != 0) {
      operator_delete(*(void **)(pbVar5 + 0x10));
    }
    operator_delete(pbVar5);
  }
  _defaultProfileHelper = (byte *)0x0;
  if (_onPauseListenerID != 0) {
                    /* catch() { ... } // from try @ 00a6ccdc with catch @ 00a6ceec */
                    /* catch() { ... } // from try @ 00a6cccc with catch @ 00a6cefc */
    local_50 = (void *)0x0;
    local_60 = (basic_string)0x1c;
    uStack_57 = 0x65737561705f;
                    /* catch() { ... } // from try @ 00a6ccb0 with catch @ 00a6cf0c */
    uStack_5f = 0x5f746e657665;
    uStack_59 = 0x6f;
    uStack_58 = 0x6e;
    uStack_51 = 0;
    EventDispatcher::removeCustomEventListener(&local_60,_onPauseListenerID);
                    /* catch() { ... } // from try @ 00a6cca0 with catch @ 00a6cf1c */
    if (((byte)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    _onPauseListenerID = 0;
  }
                    /* catch() { ... } // from try @ 00a6cc8c with catch @ 00a6cf2c */
  if (_onResumeListenerID != 0) {
                    /* catch() { ... } // from try @ 00a6cc80 with catch @ 00a6cf44 */
                    /* catch() { ... } // from try @ 00a6cc6c with catch @ 00a6cf4c */
                    /* catch() { ... } // from try @ 00a6cc44 with catch @ 00a6cf50 */
                    /* catch() { ... } // from try @ 00a6cc28 with catch @ 00a6cf58 */
    local_60 = (basic_string)0x1e;
                    /* catch() { ... } // from try @ 00a6cc4c with catch @ 00a6cf5c */
    uStack_57 = 0x6d757365725f;
    uStack_51 = 0x65;
    uStack_5f = 0x5f746e657665;
    uStack_59 = 0x6f;
    uStack_58 = 0x6e;
    local_50 = (void *)0x0;
    EventDispatcher::removeCustomEventListener(&local_60,_onResumeListenerID);
    if (((byte)local_60 & 1) != 0) {
                    /* catch() { ... } // from try @ 00a6cc1c with catch @ 00a6cf74
                       catch() { ... } // from try @ 00a6cea8 with catch @ 00a6cf74 */
      operator_delete(local_50);
    }
    _onResumeListenerID = 0;
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

