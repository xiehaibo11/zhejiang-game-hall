
/* cocos2d::PULineAffector::create() */

PUAffector * cocos2d::PULineAffector::create(void)

{
  undefined4 uVar1;
  PUAffector *this;
  undefined8 uVar2;
  
  this = operator_new(0xd8,(nothrow_t *)&std::nothrow);
  if (this != (PUAffector *)0x0) {
    PUAffector::PUAffector(this);
    uVar2 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0xac) = uVar2;
    uVar1 = DAT_01788d6c;
    uVar2 = DEFAULT_END;
    *(undefined ***)this = &PTR__PULineAffector_016ef690;
    *(undefined4 *)(this + 0xbc) = uVar1;
    *(undefined8 *)(this + 0xb4) = uVar2;
    *(undefined8 *)(this + 200) = 0x3f80000000000000;
    *(undefined8 *)(this + 0xc0) = 0x3dcccccd00000000;
    *(undefined2 *)(this + 0xd0) = 0x101;
  }
  Ref::autorelease((Ref *)this);
                    /* try { // try from 00e296b0 to 00f2972b has its CatchHandler @ 00e29bb8 */
  return this;
}

