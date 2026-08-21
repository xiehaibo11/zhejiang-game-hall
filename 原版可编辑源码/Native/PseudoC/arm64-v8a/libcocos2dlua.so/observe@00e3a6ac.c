
/* cocos2d::PUOnCountObserver::observe(cocos2d::PUParticle3D*, float) */

bool cocos2d::PUOnCountObserver::observe(PUParticle3D *param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  long in_x1;
  
  if ((in_x1 != 0) && ((*(byte *)(in_x1 + 0x124) >> 1 & 1) != 0)) {
    if (*(int *)(param_1 + 0xac) == 2) {
      uVar1 = *(uint *)(param_1 + 0xa4);
      if (*(uint *)(param_1 + 0xa8) < uVar1) {
        return true;
      }
      bVar2 = false;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xa4);
      bVar2 = uVar1 == *(uint *)(param_1 + 0xa8);
      if (*(int *)(param_1 + 0xac) == 0) {
        if (*(uint *)(param_1 + 0xa8) <= uVar1) {
          return false;
        }
        *(uint *)(param_1 + 0xa4) = uVar1 + 1;
        return true;
      }
    }
    *(uint *)(param_1 + 0xa4) = uVar1 + 1;
    return bVar2;
  }
  return false;
}

