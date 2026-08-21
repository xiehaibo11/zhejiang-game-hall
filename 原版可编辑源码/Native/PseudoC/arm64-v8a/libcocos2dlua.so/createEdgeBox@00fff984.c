
/* cocos2d::PhysicsBody::createEdgeBox(cocos2d::Size const&, cocos2d::PhysicsMaterial const&, float,
   cocos2d::Vec2 const&) */

PhysicsBody *
cocos2d::PhysicsBody::createEdgeBox
          (Size *param_1,PhysicsMaterial *param_2,float param_3,Vec2 *param_4)

{
  PhysicsBody *this;
  ulong uVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00fff95c with catch @ 00fff990 */
                    /* catch() { ... } // from try @ 00fff96c with catch @ 00fff994 */
  this = operator_new(0x108,(nothrow_t *)&std::nothrow);
  if (this != (PhysicsBody *)0x0) {
    PhysicsBody(this);
    uVar1 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (PhysicsBody *)0x0;
    }
    else {
                    /* try { // try from 00fff9e4 to 010ffa67 has its CatchHandler @ 00fff9e4
                       catch() { ... } // from try @ 00fff9e4 with catch @ 00fff9e4
                       catch() { ... } // from try @ 00fffb84 with catch @ 00fff9e4 */
      uVar2 = PhysicsShapeEdgeBox::create(param_1,param_2,param_3,param_4);
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

