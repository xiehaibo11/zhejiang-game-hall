
/* cocos2d::PhysicsBody::createEdgePolygon(cocos2d::Vec2 const*, int, cocos2d::PhysicsMaterial
   const&, float) */

PhysicsBody *
cocos2d::PhysicsBody::createEdgePolygon
          (Vec2 *param_1,int param_2,PhysicsMaterial *param_3,float param_4)

{
  PhysicsBody *this;
  ulong uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00fffa90 to 010ffa97 has its CatchHandler @ 00fffba4 */
  this = operator_new(0x108,(nothrow_t *)&std::nothrow);
  if (this != (PhysicsBody *)0x0) {
    PhysicsBody(this);
    uVar1 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00fffb28 to 010ffb83 has its CatchHandler @ 00fffba0 */
      (**(code **)(*(long *)this + 8))(this);
      this = (PhysicsBody *)0x0;
    }
    else {
      uVar2 = PhysicsShapeEdgePolygon::create(param_1,param_2,param_3,param_4);
      (**(code **)(*(long *)this + 0x60))(this,uVar2,1);
      if (this[0x90] != (PhysicsBody)0x0) {
        this[0x90] = (PhysicsBody)0x0;
        cpBodySetType(*(undefined8 *)(this + 0x88),1);
      }
                    /* try { // try from 00fffb14 to 010ffb1b has its CatchHandler @ 00fffb9c */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

