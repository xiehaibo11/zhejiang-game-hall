
/* cocos2d::SLUrlAudioPlayerCallbackProxy::playEventCallback(SLPlayItf_ const* const*, void*,
   unsigned int) */

void cocos2d::SLUrlAudioPlayerCallbackProxy::playEventCallback
               (SLPlayItf_ **param_1,void *param_2,uint param_3)

{
  SLPlayItf_ **extraout_x1;
  undefined8 *puVar1;
  void *pvVar2;
  
  std::__ndk1::mutex::lock((mutex *)&DAT_01d38da0);
  puVar1 = DAT_01d38dc8;
  if (DAT_01d38dc8 != DAT_01d38dd0) {
    pvVar2 = (void *)*DAT_01d38dc8;
    while (pvVar2 != param_2) {
                    /* catch() { ... } // from try @ 00a79588 with catch @ 00a7970c */
      puVar1 = puVar1 + 1;
                    /* catch() { ... } // from try @ 00a7957c with catch @ 00a79710 */
                    /* catch() { ... } // from try @ 00a795b8 with catch @ 00a79714
                       catch() { ... } // from try @ 00a7967c with catch @ 00a79714 */
      if (DAT_01d38dd0 == puVar1) goto LAB_00a7973c;
      pvVar2 = (void *)*puVar1;
    }
  }
                    /* catch() { ... } // from try @ 00a7955c with catch @ 00a7972c */
  if (puVar1 != DAT_01d38dd0) {
    UrlAudioPlayer::playEventCallback(param_2,extraout_x1,param_3);
  }
LAB_00a7973c:
                    /* catch() { ... } // from try @ 00a79594 with catch @ 00a7973c
                       catch() { ... } // from try @ 00a795ec with catch @ 00a7973c */
  std::__ndk1::mutex::unlock((mutex *)&DAT_01d38da0);
  return;
}

