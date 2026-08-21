
/* cocos2d::experimental::SLUrlAudioPlayerCallbackProxy::playEventCallback(SLPlayItf_ const* const*,
   void*, unsigned int) */

void cocos2d::experimental::SLUrlAudioPlayerCallbackProxy::playEventCallback
               (SLPlayItf_ **param_1,void *param_2,uint param_3)

{
  undefined8 *puVar1;
  SLPlayItf_ **extraout_x1;
  undefined8 *puVar2;
  
  std::__ndk1::mutex::lock((mutex *)&DAT_0178f380);
  puVar2 = DAT_0178f3a8;
  if ((DAT_0178f3a8 != DAT_0178f3b0) && ((void *)*DAT_0178f3a8 != param_2)) {
    do {
      if (DAT_0178f3b0 + -1 == puVar2) goto LAB_00e71b58;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
    } while ((void *)*puVar1 != param_2);
  }
  if (puVar2 != DAT_0178f3b0) {
    UrlAudioPlayer::playEventCallback(param_2,extraout_x1,param_3);
  }
LAB_00e71b58:
  std::__ndk1::mutex::unlock((mutex *)&DAT_0178f380);
  return;
}

