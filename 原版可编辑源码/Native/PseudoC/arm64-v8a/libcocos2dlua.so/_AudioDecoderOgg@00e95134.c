
/* cocos2d::experimental::AudioDecoderOgg::~AudioDecoderOgg() */

void __thiscall cocos2d::experimental::AudioDecoderOgg::~AudioDecoderOgg(AudioDecoderOgg *this)

{
  AudioDecoder::~AudioDecoder((AudioDecoder *)this);
  operator_delete(this);
  return;
}

