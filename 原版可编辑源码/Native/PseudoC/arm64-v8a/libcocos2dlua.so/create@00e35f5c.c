
/* cocos2d::PULineEmitter::create() */

PUEmitter * cocos2d::PULineEmitter::create(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  PUEmitter *this;
  
  this = operator_new(0x248,(nothrow_t *)&std::nothrow);
  if (this != (PUEmitter *)0x0) {
    PUEmitter::PUEmitter(this);
    uVar2 = DAT_01788f14;
    uVar1 = DEFAULT_END;
    *(undefined ***)this = &PTR__PUEmitter_016f0828;
    *(undefined4 *)(this + 0x204) = uVar2;
    *(undefined8 *)(this + 0x1fc) = uVar1;
    Vec3::Vec3((Vec3 *)(this + 0x208));
    *(undefined4 *)(this + 0x224) = 0;
    *(undefined8 *)(this + 0x21c) = 0;
    *(undefined8 *)(this + 0x214) = 0;
    *(undefined2 *)(this + 0x228) = 0x101;
    Vec3::Vec3((Vec3 *)(this + 0x22c));
    *(undefined8 *)(this + 0x240) = 0;
    *(undefined8 *)(this + 0x238) = 0;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

