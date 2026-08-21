
/* cocos2d::PUOnExpireObserver::observe(cocos2d::PUParticle3D*, float) */

byte cocos2d::PUOnExpireObserver::observe(PUParticle3D *param_1,float param_2)

{
  long in_x1;
  
  if (in_x1 != 0) {
    return *(byte *)(in_x1 + 0x124) & 1;
  }
  return 0;
}

