
/* cocos2d::experimental::AudioEngine::end() */

void cocos2d::experimental::AudioEngine::end(void)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  AudioEngineThreadPool *pAVar5;
  long lVar6;
  byte *pbVar7;
  
  pAVar5 = s_threadPool;
  if (s_threadPool != (AudioEngineThreadPool *)0x0) {
    AudioEngineThreadPool::~AudioEngineThreadPool(s_threadPool);
    operator_delete(pAVar5);
    s_threadPool = (AudioEngineThreadPool *)0x0;
  }
  if (_audioEngineImpl != (long *)0x0) {
    (**(code **)(*_audioEngineImpl + 8))();
  }
  pbVar4 = _defaultProfileHelper;
  _audioEngineImpl = (long *)0x0;
  if (_defaultProfileHelper != (byte *)0x0) {
    if (*(long *)(_defaultProfileHelper + 0x38) != 0) {
      lVar2 = *(long *)(_defaultProfileHelper + 0x28);
      pbVar3 = *(byte **)(_defaultProfileHelper + 0x30);
      pbVar1 = _defaultProfileHelper + 0x28;
      lVar6 = *(long *)pbVar3;
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar2 + 8);
      **(long **)(lVar2 + 8) = lVar6;
      pbVar4[0x38] = 0;
      pbVar4[0x39] = 0;
      pbVar4[0x3a] = 0;
      pbVar4[0x3b] = 0;
      pbVar4[0x3c] = 0;
      pbVar4[0x3d] = 0;
      pbVar4[0x3e] = 0;
      pbVar4[0x3f] = 0;
      while (pbVar3 != pbVar1) {
        pbVar7 = *(byte **)(pbVar3 + 8);
        operator_delete(pbVar3);
        pbVar3 = pbVar7;
      }
    }
    if ((*pbVar4 & 1) != 0) {
      operator_delete(*(void **)(pbVar4 + 0x10));
    }
    operator_delete(pbVar4);
  }
  _defaultProfileHelper = (byte *)0x0;
  return;
}

