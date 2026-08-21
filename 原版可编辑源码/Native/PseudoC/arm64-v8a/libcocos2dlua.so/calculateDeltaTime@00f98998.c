
/* cocos2d::Director::calculateDeltaTime() */

void __thiscall cocos2d::Director::calculateDeltaTime(Director *this)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  if (this[400] == (Director)0x0) {
    if (this[0x104] == (Director)0x0) {
      lVar2 = std::__ndk1::chrono::steady_clock::now();
      fVar3 = (float)((lVar2 - *(long *)(this + 0x188)) / 1000) / 1e+06;
      *(float *)(this + 0x100) = fVar3;
      *(long *)(this + 0x188) = lVar2;
    }
    else {
      fVar3 = *(float *)(this + 0x100);
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(this + 0x100) = fVar3;
  }
  else {
    *(undefined4 *)(this + 0x100) = 0;
    this[400] = (Director)0x0;
    uVar1 = std::__ndk1::chrono::steady_clock::now();
    *(undefined8 *)(this + 0x188) = uVar1;
  }
  return;
}

