
/* cocos2d::PUOnEventFlagObserver::observe(cocos2d::PUParticle3D*, float) */

bool cocos2d::PUOnEventFlagObserver::observe(PUParticle3D *param_1,float param_2)

{
  long in_x1;
  
  if (in_x1 != 0) {
    return (*(uint *)(in_x1 + 0x124) & *(uint *)(param_1 + 0xa4)) != 0;
  }
  return false;
}

