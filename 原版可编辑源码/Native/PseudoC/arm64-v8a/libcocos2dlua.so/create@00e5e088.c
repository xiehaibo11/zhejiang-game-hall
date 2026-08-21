
/* cocos2d::PUSlaveBehaviour::create() */

PUBehaviour * cocos2d::PUSlaveBehaviour::create(void)

{
  PUBehaviour *this;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (PUBehaviour *)0x0) {
    PUBehaviour::PUBehaviour(this);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__PUSlaveBehaviour_016f2e38;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

