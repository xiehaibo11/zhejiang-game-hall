
/* cocos2d::AudioDecoderWav::~AudioDecoderWav() */

void __thiscall cocos2d::AudioDecoderWav::~AudioDecoderWav(AudioDecoderWav *this)

{
  AudioDecoder::~AudioDecoder((AudioDecoder *)this);
  operator_delete(this);
  return;
}

