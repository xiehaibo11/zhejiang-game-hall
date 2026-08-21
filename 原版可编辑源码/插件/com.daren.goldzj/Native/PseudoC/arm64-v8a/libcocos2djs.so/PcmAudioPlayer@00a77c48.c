
/* cocos2d::PcmAudioPlayer::PcmAudioPlayer(cocos2d::AudioMixerController*,
   cocos2d::ICallerThreadUtils*) */

void __thiscall
cocos2d::PcmAudioPlayer::PcmAudioPlayer
          (PcmAudioPlayer *this,AudioMixerController *param_1,ICallerThreadUtils *param_2)

{
                    /* catch() { ... } // from try @ 00a779a8 with catch @ 00a77c64 */
                    /* catch() { ... } // from try @ 00a7799c with catch @ 00a77c68 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
                    /* catch() { ... } // from try @ 00a7797c with catch @ 00a77c6c */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined ***)this = &PTR__PcmAudioPlayer_01c6f120;
                    /* catch() { ... } // from try @ 00a779b4 with catch @ 00a77c7c
                       catch() { ... } // from try @ 00a77a5c with catch @ 00a77c7c
                       catch() { ... } // from try @ 00a77b84 with catch @ 00a77c7c */
  PcmData::PcmData((PcmData *)(this + 0x28));
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(AudioMixerController **)(this + 0x90) = param_1;
  *(ICallerThreadUtils **)(this + 0x98) = param_2;
  return;
}

