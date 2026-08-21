
/* cocos2d::SLAudioDecoderCallbackProxy::prefetchEventCallback(SLPrefetchStatusItf_ const* const*,
   void*, unsigned int) */

void cocos2d::SLAudioDecoderCallbackProxy::prefetchEventCallback
               (SLPrefetchStatusItf_ **param_1,void *param_2,uint param_3)

{
  AudioDecoderSLES::prefetchCallback(param_2,param_1,param_3);
  return;
}

