
/* cocos2d::CCPUBoxEmitter::create() */

PUEmitter * cocos2d::CCPUBoxEmitter::create(void)

{
  PUEmitter *this;
  
  this = operator_new(0x218,(nothrow_t *)&std::nothrow);
  if (this != (PUEmitter *)0x0) {
    PUEmitter::PUEmitter(this);
    *(undefined ***)this = &PTR__PUEmitter_016f0588;
    *(undefined8 *)(this + 0x204) = 0x4248000042c80000;
    *(undefined8 *)(this + 0x1fc) = 0x42c8000042c80000;
    *(undefined8 *)(this + 0x20c) = 0x4248000042480000;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

