
/* cocos2d::AudioDecoderOgg::~AudioDecoderOgg() */

void __thiscall cocos2d::AudioDecoderOgg::~AudioDecoderOgg(AudioDecoderOgg *this)

{
  AudioDecoder::~AudioDecoder((AudioDecoder *)this);
  operator_delete(this);
  return;
}

