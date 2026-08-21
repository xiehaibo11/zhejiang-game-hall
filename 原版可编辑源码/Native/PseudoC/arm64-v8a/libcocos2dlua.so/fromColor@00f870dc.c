
/* cocos2d::Vec3::fromColor(unsigned int) */

float cocos2d::Vec3::fromColor(uint param_1)

{
  return (float)(param_1 >> 0x10 & 0xff) / 255.0;
}

