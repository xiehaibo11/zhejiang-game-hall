
/* cocos2d::experimental::SLPcmAudioPlayerCallbackProxy::samplePlayerCallback(SLAndroidSimpleBufferQueueItf_
   const* const*, void*) */

void cocos2d::experimental::SLPcmAudioPlayerCallbackProxy::samplePlayerCallback
               (SLAndroidSimpleBufferQueueItf_ **param_1,void *param_2)

{
  PcmAudioService::enqueue(param_2);
  return;
}

