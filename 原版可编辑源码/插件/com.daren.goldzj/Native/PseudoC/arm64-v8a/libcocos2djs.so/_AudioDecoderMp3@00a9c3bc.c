
/* cocos2d::AudioDecoderMp3::~AudioDecoderMp3() */

void __thiscall cocos2d::AudioDecoderMp3::~AudioDecoderMp3(AudioDecoderMp3 *this)

{
  AudioDecoder::~AudioDecoder((AudioDecoder *)this);
  operator_delete(this);
  return;
}

