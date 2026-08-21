
void _INIT_126(void)

{
  DAT_0178f870 = 0;
  DAT_0178f878 = 0;
  DAT_0178f888 = 0x3f000000;
  DAT_0178f880 = 0x3f0000003dcccccd;
  DAT_0178f898 = 0;
  DAT_0178f8a0 = 0;
  cocos2d::ParticleSystem::__allInstances = 0;
  __cxa_atexit(cocos2d::Vector<cocos2d::ParticleSystem*>::~Vector,
               &cocos2d::ParticleSystem::__allInstances,&PTR_LOOP_016979c0);
  return;
}

