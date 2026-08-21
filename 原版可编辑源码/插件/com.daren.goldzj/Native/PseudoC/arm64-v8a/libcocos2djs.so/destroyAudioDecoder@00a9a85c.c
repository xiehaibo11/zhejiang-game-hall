
/* cocos2d::AudioDecoderProvider::destroyAudioDecoder(cocos2d::AudioDecoder**) */

void cocos2d::AudioDecoderProvider::destroyAudioDecoder(AudioDecoder **param_1)

{
  if ((param_1 != (AudioDecoder **)0x0) && (*param_1 != (AudioDecoder *)0x0)) {
    (**(code **)(*(long *)*param_1 + 8))();
    *param_1 = (AudioDecoder *)0x0;
  }
  return;
}

