
/* cocos2d::SLAudioDecoderCallbackProxy::decPlayCallback(SLAndroidSimpleBufferQueueItf_ const*
   const*, void*) */

void cocos2d::SLAudioDecoderCallbackProxy::decPlayCallback
               (SLAndroidSimpleBufferQueueItf_ **param_1,void *param_2)

{
  AudioDecoderSLES::decodeToPcmCallback(param_2,param_1);
  return;
}

