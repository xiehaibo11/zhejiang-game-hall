
/* cocos2d::experimental::AudioResampler::qualityMHz(cocos2d::experimental::AudioResampler::src_quality)
    */

int cocos2d::experimental::AudioResampler::qualityMHz(int param_1)

{
  if (param_1 - 2U < 3) {
    return (param_1 - 2U) * 0xe + 6;
  }
  return 3;
}

