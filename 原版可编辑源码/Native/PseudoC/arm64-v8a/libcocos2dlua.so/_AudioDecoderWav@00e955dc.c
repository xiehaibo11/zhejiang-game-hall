
/* cocos2d::experimental::AudioDecoderWav::~AudioDecoderWav() */

void __thiscall cocos2d::experimental::AudioDecoderWav::~AudioDecoderWav(AudioDecoderWav *this)

{
  AudioDecoder::~AudioDecoder((AudioDecoder *)this);
  operator_delete(this);
  return;
}

