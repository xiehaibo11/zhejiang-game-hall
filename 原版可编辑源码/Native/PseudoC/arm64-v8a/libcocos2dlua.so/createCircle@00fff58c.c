
/* cocos2d::PhysicsBody::createCircle(float, cocos2d::PhysicsMaterial const&, cocos2d::Vec2 const&)
    */

PhysicsBody *
cocos2d::PhysicsBody::createCircle(float param_1,PhysicsMaterial *param_2,Vec2 *param_3)

{
  PhysicsBody *this;
  ulong uVar1;
  undefined8 uVar2;
  
  this = operator_new(0x108,(nothrow_t *)&std::nothrow);
  if (this != (PhysicsBody *)0x0) {
    PhysicsBody(this);
    uVar1 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (PhysicsBody *)0x0;
    }
    else {
      uVar2 = PhysicsShapeCircle::create(param_1,param_2,param_3);
      (**(code **)(*(long *)this + 0x60))(this,uVar2,1);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

