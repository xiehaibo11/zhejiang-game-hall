
/* cocos2d::experimental::AudioResamplerCubic::~AudioResamplerCubic() */

void __thiscall
cocos2d::experimental::AudioResamplerCubic::~AudioResamplerCubic(AudioResamplerCubic *this)

{
  AudioResampler::~AudioResampler((AudioResampler *)this);
  operator_delete(this);
  return;
}

