
/* cocos2d::AudioDecoderWav::onWavSeek(void*, long, int) */

void cocos2d::AudioDecoderWav::onWavSeek(void *param_1,long param_2,int param_3)

{
  AudioDecoder::fileSeek(param_1,param_2,param_3);
  return;
}

