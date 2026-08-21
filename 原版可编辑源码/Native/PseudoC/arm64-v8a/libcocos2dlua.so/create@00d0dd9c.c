
/* cocos2d::AnimationCurve<3>::create(float*, float*, int) */

Ref * cocos2d::AnimationCurve<3>::create(float *param_1,float *param_2,int param_3)

{
  uint uVar1;
  Ref *this;
  void *pvVar2;
  ulong uVar3;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined ***)this = &PTR__AnimationCurve_016d20b8;
  }
  uVar3 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_3 << 2;
  if ((ulong)(long)param_3 >> 0x3e != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar3);
  *(void **)(this + 0x30) = pvVar2;
  memcpy(pvVar2,param_1,(long)(param_3 << 2));
  uVar1 = param_3 * 3;
  uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  if ((ulong)(long)(int)uVar1 >> 0x3e != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar3);
  *(void **)(this + 0x28) = pvVar2;
  memcpy(pvVar2,param_2,(long)(param_3 * 0xc));
  *(int *)(this + 0x38) = param_3;
  *(undefined4 *)(this + 0x3c) = 0xc;
  Ref::autorelease(this);
  return this;
}

