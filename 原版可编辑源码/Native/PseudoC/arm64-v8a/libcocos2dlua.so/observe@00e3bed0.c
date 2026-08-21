
/* cocos2d::PUOnRandomObserver::observe(cocos2d::PUParticle3D*, float) */

bool cocos2d::PUOnRandomObserver::observe(PUParticle3D *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = rand();
  return *(float *)(param_1 + 0xa4) < (float)iVar1 * 4.656613e-10;
}

