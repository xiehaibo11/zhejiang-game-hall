
/* cocos2d::AnimationCurve<3>::~AnimationCurve() */

void __thiscall cocos2d::AnimationCurve<3>::~AnimationCurve(AnimationCurve<3> *this)

{
  AnimationCurve<3> *pAVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__AnimationCurve_016d20b8;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  pAVar1 = *(AnimationCurve<3> **)(this + 0x60);
  if (this + 0x40 == pAVar1) {
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x20);
  }
  else {
    if (pAVar1 == (AnimationCurve<3> *)0x0) goto LAB_00d0ebc4;
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00d0ebc4:
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

