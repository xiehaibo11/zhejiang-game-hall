
/* cocos2d::PUOnEmissionObserver::observe(cocos2d::PUParticle3D*, float) */

byte cocos2d::PUOnEmissionObserver::observe(PUParticle3D *param_1,float param_2)

{
  long in_x1;
  
  if (in_x1 != 0) {
    return *(byte *)(in_x1 + 0x124) >> 1 & 1;
  }
  return 0;
}

