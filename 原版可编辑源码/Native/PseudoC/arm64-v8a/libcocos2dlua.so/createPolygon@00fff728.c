
/* cocos2d::PhysicsBody::createPolygon(cocos2d::Vec2 const*, int, cocos2d::PhysicsMaterial const&,
   cocos2d::Vec2 const&) */

PhysicsBody *
cocos2d::PhysicsBody::createPolygon
          (Vec2 *param_1,int param_2,PhysicsMaterial *param_3,Vec2 *param_4)

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
      uVar2 = PhysicsShapePolygon::create(param_1,param_2,param_3,param_4,0.0);
                    /* try { // try from 00fff7a4 to 010ff7ff has its CatchHandler @ 00fff7a4
                       catch() { ... } // from try @ 00fff7a4 with catch @ 00fff7a4
                       catch() { ... } // from try @ 00fff820 with catch @ 00fff7a4 */
      (**(code **)(*(long *)this + 0x60))(this,uVar2,1);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

