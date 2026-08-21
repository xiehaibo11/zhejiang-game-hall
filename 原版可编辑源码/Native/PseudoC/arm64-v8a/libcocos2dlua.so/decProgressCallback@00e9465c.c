
/* cocos2d::experimental::SLAudioDecoderCallbackProxy::decProgressCallback(SLPlayItf_ const* const*,
   void*, unsigned int) */

void cocos2d::experimental::SLAudioDecoderCallbackProxy::decProgressCallback
               (SLPlayItf_ **param_1,void *param_2,uint param_3)

{
  AudioDecoderSLES::decodeProgressCallback(param_2,param_2,param_3);
  return;
}

