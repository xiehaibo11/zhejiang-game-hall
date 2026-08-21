
/* cocos2d::PUObserver::preUpdateObserver(float) */

void __thiscall cocos2d::PUObserver::preUpdateObserver(PUObserver *this,float param_1)

{
  float fVar1;
  
  if ((this[0x60] != (PUObserver)0x0) && (this[0xa0] != (PUObserver)0x0)) {
    fVar1 = *(float *)(this + 0x9c) - param_1;
    *(float *)(this + 0x9c) = fVar1;
    if (fVar1 < 0.0) {
      this[99] = (PUObserver)0x1;
      *(float *)(this + 0x9c) = fVar1 + *(float *)(this + 0x98);
      return;
    }
    this[99] = (PUObserver)0x0;
  }
  return;
}

