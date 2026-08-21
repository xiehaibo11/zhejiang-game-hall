
/* cocos2d::PUColorAffector::create() */

PUAffector * cocos2d::PUColorAffector::create(void)

{
  PUAffector *this;
  
                    /* try { // try from 00e24c90 to 00f24c9f has its CatchHandler @ 00e24dd8 */
  this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this != (PUAffector *)0x0) {
    PUAffector::PUAffector(this);
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined ***)this = &PTR__PUColorAffector_016eef90;
    *(undefined8 *)(this + 0xb8) = 0;
    *(PUAffector **)(this + 0xb0) = this + 0xb8;
    *(undefined4 *)(this + 200) = 1;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

