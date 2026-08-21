
/* cocos2d::PUOnPositionObserver::observe(cocos2d::PUParticle3D*, float) */

undefined8 cocos2d::PUOnPositionObserver::observe(PUParticle3D *param_1,float param_2)

{
  int iVar1;
  long in_x1;
  
  if (in_x1 != 0) {
    if (param_1[0xb0] != (PUParticle3D)0x0) {
      iVar1 = *(int *)(param_1 + 0xb4);
      if (iVar1 == 2) {
        if (*(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x68) < *(float *)(in_x1 + 8)) {
          return 1;
        }
      }
      else if (iVar1 == 1) {
        if (*(float *)(in_x1 + 8) == *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x68)) {
          return 1;
        }
      }
      else if ((iVar1 == 0) &&
              (*(float *)(in_x1 + 8) < *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x68))) {
        return 1;
      }
    }
    if (param_1[0xb1] != (PUParticle3D)0x0) {
      iVar1 = *(int *)(param_1 + 0xb8);
      if (iVar1 == 2) {
                    /* try { // try from 00e3b1a8 to 00f3b283 has its CatchHandler @ 00e3b1a8
                       catch() { ... } // from try @ 00e3b1a8 with catch @ 00e3b1a8
                       catch() { ... } // from try @ 00e3b2b8 with catch @ 00e3b1a8 */
        if (*(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x6c) < *(float *)(in_x1 + 0xc)) {
          return 1;
        }
      }
      else if (iVar1 == 1) {
        if (*(float *)(in_x1 + 0xc) == *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x6c)) {
          return 1;
        }
      }
      else if ((iVar1 == 0) &&
              (*(float *)(in_x1 + 0xc) < *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x6c))) {
        return 1;
      }
    }
    if (param_1[0xb2] != (PUParticle3D)0x0) {
      iVar1 = *(int *)(param_1 + 0xbc);
      if (iVar1 == 2) {
        if (*(float *)(param_1 + 0xac) * *(float *)(param_1 + 0x70) < *(float *)(in_x1 + 0x10)) {
          return 1;
        }
      }
      else if (iVar1 == 1) {
        if (*(float *)(in_x1 + 0x10) == *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0x70)) {
          return 1;
        }
      }
      else if ((iVar1 == 0) &&
              (*(float *)(in_x1 + 0x10) < *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0x70)))
      {
        return 1;
      }
    }
  }
  return 0;
}

