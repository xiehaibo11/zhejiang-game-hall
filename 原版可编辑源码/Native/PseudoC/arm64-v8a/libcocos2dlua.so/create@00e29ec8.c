
/* cocos2d::PULinearForceAffector::create() */

PUBaseForceAffector * cocos2d::PULinearForceAffector::create(void)

{
  PUBaseForceAffector *this;
  
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (PUBaseForceAffector *)0x0) {
    PUBaseForceAffector::PUBaseForceAffector(this);
    *(undefined ***)this = &PTR__PUBaseForceAffector_016ef790;
  }
  Ref::autorelease((Ref *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e29e10 with catch @ 00e29f0c
                        */
  return this;
}

