
/* cocos2d::PURandomiser::create() */

PUAffector * cocos2d::PURandomiser::create(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  PUAffector *this;
  
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (PUAffector *)0x0) {
    PUAffector::PUAffector(this);
    *(undefined8 *)(this + 0xb8) = 0;
    uVar2 = DAT_01788dbc;
    uVar1 = DEFAULT_MAX_DEVIATION;
    *(undefined ***)this = &PTR__PURandomiser_016efb90;
    *(undefined2 *)(this + 0xc0) = 0x101;
    *(undefined8 *)(this + 0xac) = uVar1;
    *(undefined4 *)(this + 0xb4) = uVar2;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

