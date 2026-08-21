
/* cocos2d::PhysicsBody::create(float, float) */

PhysicsBody * cocos2d::PhysicsBody::create(float param_1,float param_2)

{
  PhysicsBody *this;
  ulong uVar1;
  
                    /* try { // try from 00fff500 to 010ff647 has its CatchHandler @ 00fff500
                       catch() { ... } // from try @ 00fff500 with catch @ 00fff500
                       catch() { ... } // from try @ 00fff650 with catch @ 00fff500 */
  this = operator_new(0x108,(nothrow_t *)&std::nothrow);
  if (this != (PhysicsBody *)0x0) {
    PhysicsBody(this);
    *(float *)(this + 0x98) = param_1;
    *(undefined2 *)(this + 0x93) = 0;
    *(float *)(this + 0xa4) = param_2;
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

