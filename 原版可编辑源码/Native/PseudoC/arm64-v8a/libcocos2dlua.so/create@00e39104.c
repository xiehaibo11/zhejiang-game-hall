
/* cocos2d::PUSlaveEmitter::create() */

PUSlaveEmitter * cocos2d::PUSlaveEmitter::create(void)

{
  PUSlaveEmitter *this;
  
  this = operator_new(0x260,(nothrow_t *)&std::nothrow);
  if (this != (PUSlaveEmitter *)0x0) {
    PUSlaveEmitter(this);
  }
  Ref::autorelease((Ref *)this);
  return this;
}

