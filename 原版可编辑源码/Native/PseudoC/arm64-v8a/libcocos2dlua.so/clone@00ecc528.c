
/* cocos2d::OrbitCamera::clone() const */

OrbitCamera * __thiscall cocos2d::OrbitCamera::clone(OrbitCamera *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  OrbitCamera *this_00;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = *(float *)(this + 0x4c);
  uVar4 = *(undefined8 *)(this + 0x7c);
  uVar1 = *(undefined4 *)(this + 0x84);
  fVar6 = *(float *)(this + 0x88);
  uVar2 = *(undefined4 *)(this + 0x8c);
  fVar7 = *(float *)(this + 0x90);
  this_00 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this_00 != (OrbitCamera *)0x0) {
    OrbitCamera(this_00);
    uVar3 = ActionInterval::initWithDuration((ActionInterval *)this_00,fVar5);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (OrbitCamera *)0x0;
    }
    else {
      *(undefined8 *)(this_00 + 0x7c) = uVar4;
      *(undefined4 *)(this_00 + 0x84) = uVar1;
      *(float *)(this_00 + 0x88) = fVar6;
      *(undefined4 *)(this_00 + 0x8c) = uVar2;
      *(float *)(this_00 + 0x90) = fVar7;
      *(float *)(this_00 + 0x98) = fVar6 * 0.017453292;
      *(float *)(this_00 + 0xa0) = fVar7 * 0.017453292;
      Ref::autorelease((Ref *)this_00);
    }
  }
  return this_00;
}

