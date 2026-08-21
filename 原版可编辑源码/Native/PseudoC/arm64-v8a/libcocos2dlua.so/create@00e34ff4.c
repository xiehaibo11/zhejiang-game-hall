
/* cocos2d::PUCircleEmitter::create() */

PUEmitter * cocos2d::PUCircleEmitter::create(void)

{
  undefined8 uVar1;
  PUEmitter *this;
  
  this = operator_new(0x238,(nothrow_t *)&std::nothrow);
  if (this != (PUEmitter *)0x0) {
    PUEmitter::PUEmitter(this);
    *(undefined ***)this = &PTR__PUCircleEmitter_016f06d8;
    *(undefined8 *)(this + 0x204) = 0x3dcccccd00000000;
    *(undefined8 *)(this + 0x1fc) = 0x42c80000;
    *(undefined8 *)(this + 0x20c) = 0;
    this[0x214] = (PUEmitter)0x1;
    Quaternion::Quaternion((Quaternion *)(this + 0x218));
    uVar1 = DEFAULT_NORMAL;
    *(undefined4 *)(this + 0x230) = DAT_01788eec;
    *(undefined8 *)(this + 0x228) = uVar1;
  }
  Ref::autorelease((Ref *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e34f90 with catch @ 00e35078
                        */
  return this;
}

