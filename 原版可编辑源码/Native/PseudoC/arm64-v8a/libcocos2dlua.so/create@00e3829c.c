
/* cocos2d::PUPositionEmitter::create() */

PUEmitter * cocos2d::PUPositionEmitter::create(void)

{
  PUEmitter *this;
  
  this = operator_new(0x228,(nothrow_t *)&std::nothrow);
  if (this != (PUEmitter *)0x0) {
    PUEmitter::PUEmitter(this);
    *(undefined8 *)(this + 0x200) = 0;
    *(undefined8 *)(this + 0x210) = 0;
    *(undefined8 *)(this + 0x208) = 0;
    this[0x218] = (PUEmitter)0x1;
    *(undefined ***)this = &PTR__PUPositionEmitter_016f0c18;
    *(undefined8 *)(this + 0x220) = 0;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

