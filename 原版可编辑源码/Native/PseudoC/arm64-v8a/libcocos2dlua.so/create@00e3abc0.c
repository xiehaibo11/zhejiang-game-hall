
/* cocos2d::PUOnEmissionObserver::create() */

PUObserver * cocos2d::PUOnEmissionObserver::create(void)

{
  PUObserver *this;
  
                    /* try { // try from 00e3abc0 to 00f3abcb has its CatchHandler @ 00e3acac */
                    /* try { // try from 00e3abcc to 00f3acc3 has its CatchHandler @ 00e3ab2c */
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (PUObserver *)0x0) {
    PUObserver::PUObserver(this);
    *(undefined ***)this = &PTR__PUObserver_016f1350;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

