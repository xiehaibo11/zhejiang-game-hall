
/* cocos2d::PUOnClearObserver::updateObserver(cocos2d::PUParticle3D*, float, bool) */

void cocos2d::PUOnClearObserver::updateObserver(PUParticle3D *param_1,float param_2,bool param_3)

{
  uint in_w2;
  
  if ((in_w2 & 1) != 0) {
    param_1[0xa1] = (PUParticle3D)0x1;
  }
  return;
}

