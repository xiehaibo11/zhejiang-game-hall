
/* cocos2d::AudioResamplerCubic::~AudioResamplerCubic() */

void __thiscall cocos2d::AudioResamplerCubic::~AudioResamplerCubic(AudioResamplerCubic *this)

{
  AudioResampler::~AudioResampler((AudioResampler *)this);
  operator_delete(this);
  return;
}

