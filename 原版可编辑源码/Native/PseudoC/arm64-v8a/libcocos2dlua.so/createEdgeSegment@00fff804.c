
/* cocos2d::PhysicsBody::createEdgeSegment(cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::PhysicsMaterial const&, float) */

PhysicsBody *
cocos2d::PhysicsBody::createEdgeSegment
          (Vec2 *param_1,Vec2 *param_2,PhysicsMaterial *param_3,float param_4)

{
  PhysicsBody *this;
  ulong uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00fff820 to 010ff92f has its CatchHandler @ 00fff7a4 */
  this = operator_new(0x108,(nothrow_t *)&std::nothrow);
  if (this != (PhysicsBody *)0x0) {
    PhysicsBody(this);
    uVar1 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (PhysicsBody *)0x0;
    }
    else {
      uVar2 = PhysicsShapeEdgeSegment::create(param_1,param_2,param_3,param_4);
      (**(code **)(*(long *)this + 0x60))(this,uVar2,1);
      if (this[0x90] != (PhysicsBody)0x0) {
        this[0x90] = (PhysicsBody)0x0;
        cpBodySetType(*(undefined8 *)(this + 0x88),1);
      }
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

