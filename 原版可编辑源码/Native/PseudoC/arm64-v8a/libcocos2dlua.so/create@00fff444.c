
/* cocos2d::PhysicsBody::create(float) */

PhysicsBody * cocos2d::PhysicsBody::create(float param_1)

{
  PhysicsBody *this;
  ulong uVar1;
  
  this = operator_new(0x108,(nothrow_t *)&std::nothrow);
  if (this != (PhysicsBody *)0x0) {
    PhysicsBody(this);
    *(float *)(this + 0x98) = param_1;
    this[0x93] = (PhysicsBody)0x0;
    uVar1 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (PhysicsBody *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

