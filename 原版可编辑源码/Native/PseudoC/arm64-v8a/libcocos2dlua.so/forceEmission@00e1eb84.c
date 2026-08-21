
/* cocos2d::PUParticleSystem3D::forceEmission(cocos2d::PUEmitter*, unsigned int) */

void cocos2d::PUParticleSystem3D::forceEmission(PUEmitter *param_1,uint param_2)

{
  if (param_1[0x379] != (PUEmitter)0x0) {
    executeEmitParticles(param_1,param_2,0.0);
    return;
  }
  return;
}

