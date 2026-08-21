
/* cocos2d::experimental::PcmAudioService::bqFetchBufferCallback(SLAndroidSimpleBufferQueueItf_
   const* const*) */

void cocos2d::experimental::PcmAudioService::bqFetchBufferCallback
               (SLAndroidSimpleBufferQueueItf_ **param_1)

{
  enqueue((PcmAudioService *)param_1);
  return;
}

