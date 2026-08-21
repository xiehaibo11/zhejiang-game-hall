
/* cocos2d::RotateTo::create(float, float) */

Action * cocos2d::RotateTo::create(float param_1,float param_2)

{
  Action *this;
  float fVar1;
  
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    this[0x56] = (Action)0x0;
    *(undefined ***)this = &PTR__Action_016f8740;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f87a0;
    Vec3::Vec3((Vec3 *)(this + 0x58));
    Vec3::Vec3((Vec3 *)(this + 100));
    Vec3::Vec3((Vec3 *)(this + 0x70));
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined2 *)(this + 0x54) = 1;
    *(float *)(this + 0x4c) = fVar1;
    *(float *)(this + 0x58) = param_2;
    *(float *)(this + 0x5c) = param_2;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

