
/* cocos2d::experimental::PcmAudioPlayer::PcmAudioPlayer(cocos2d::experimental::AudioMixerController*,
   cocos2d::experimental::ICallerThreadUtils*) */

void __thiscall
cocos2d::experimental::PcmAudioPlayer::PcmAudioPlayer
          (PcmAudioPlayer *this,AudioMixerController *param_1,ICallerThreadUtils *param_2)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined ***)this = &PTR__PcmAudioPlayer_016f3da8;
  PcmData::PcmData((PcmData *)(this + 0x28));
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(AudioMixerController **)(this + 0x90) = param_1;
  *(ICallerThreadUtils **)(this + 0x98) = param_2;
  return;
}

