
/* cocos2d::PhysicsBody::createEdgeChain(cocos2d::Vec2 const*, int, cocos2d::PhysicsMaterial const&,
   float) */

PhysicsBody *
cocos2d::PhysicsBody::createEdgeChain
          (Vec2 *param_1,int param_2,PhysicsMaterial *param_3,float param_4)

{
  PhysicsBody *this;
  ulong uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00fffb84 to 010ffbef has its CatchHandler @ 00fff9e4 */
  this = operator_new(0x108,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00fffb14 with catch @ 00fffb9c */
  if (this != (PhysicsBody *)0x0) {
                    /* catch() { ... } // from try @ 00fffb28 with catch @ 00fffba0 */
                    /* catch() { ... } // from try @ 00fffa90 with catch @ 00fffba4 */
    PhysicsBody(this);
    uVar1 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (PhysicsBody *)0x0;
    }
    else {
      uVar2 = PhysicsShapeEdgeChain::create(param_1,param_2,param_3,param_4);
                    /* catch() { ... } // from try @ 00fffa68 with catch @ 00fffbd4 */
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

