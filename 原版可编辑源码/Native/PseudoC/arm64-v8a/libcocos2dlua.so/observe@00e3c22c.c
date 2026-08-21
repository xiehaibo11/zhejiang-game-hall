
/* cocos2d::PUOnTimeObserver::observe(cocos2d::PUParticle3D*, float) */

bool cocos2d::PUOnTimeObserver::observe(PUParticle3D *param_1,float param_2)

{
  long in_x1;
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0xa8) == 2) {
    if (param_1[0xac] != (PUParticle3D)0x0) {
      return *(float *)(param_1 + 0xa4) < *(float *)(*(long *)(param_1 + 0x28) + 0x440);
    }
    if (in_x1 != 0) {
      return *(float *)(param_1 + 0xa4) < *(float *)(in_x1 + 0x130) - *(float *)(in_x1 + 300);
    }
  }
  else if (*(int *)(param_1 + 0xa8) == 0) {
    if (param_1[0xac] != (PUParticle3D)0x0) {
      return *(float *)(*(long *)(param_1 + 0x28) + 0x440) < *(float *)(param_1 + 0xa4);
    }
    if (in_x1 != 0) {
      return *(float *)(in_x1 + 0x130) - *(float *)(in_x1 + 300) < *(float *)(param_1 + 0xa4);
    }
  }
  else {
    if (param_1[0xac] != (PUParticle3D)0x0) {
      fVar2 = ABS(*(float *)(param_1 + 0xa4));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c21c with catch @ 00e3c278
                        */
      fVar1 = ABS(*(float *)(*(long *)(param_1 + 0x28) + 0x440));
      if (fVar2 <= fVar1) {
        fVar2 = fVar1;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c1a4 with catch @ 00e3c28c
                        */
      return ABS(*(float *)(*(long *)(param_1 + 0x28) + 0x440) - *(float *)(param_1 + 0xa4)) <=
             fVar2 * 0.01;
    }
    if (in_x1 != 0) {
      fVar1 = ABS(*(float *)(in_x1 + 0x130) - *(float *)(in_x1 + 300));
      fVar2 = ABS(*(float *)(param_1 + 0xa4));
      if (fVar2 <= fVar1) {
        fVar2 = fVar1;
      }
      return ABS((*(float *)(in_x1 + 0x130) - *(float *)(in_x1 + 300)) - *(float *)(param_1 + 0xa4))
             <= fVar2 * 0.01;
    }
  }
  return false;
}

