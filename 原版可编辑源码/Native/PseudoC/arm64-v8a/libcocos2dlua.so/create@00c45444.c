
/* cocostudio::ColliderDetector::create(cocostudio::Bone*) */

Ref * cocostudio::ColliderDetector::create(Bone *param_1)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined ***)this = &PTR__ColliderDetector_016c9d30;
    this[0x48] = (Ref)0x0;
    uVar1 = init((ColliderDetector *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      cocos2d::Ref::autorelease(this);
    }
  }
  return this;
}

