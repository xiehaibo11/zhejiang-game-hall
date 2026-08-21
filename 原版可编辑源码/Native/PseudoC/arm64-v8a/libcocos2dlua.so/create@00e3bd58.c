
/* cocos2d::PUOnQuotaObserver::create() */

PUObserver * cocos2d::PUOnQuotaObserver::create(void)

{
  PUObserver *this;
  
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (PUObserver *)0x0) {
    PUObserver::PUObserver(this);
    this[0xa1] = (PUObserver)0x0;
    *(undefined ***)this = &PTR__PUObserver_016f1730;
  }
                    /* try { // try from 00e3bd9c to 00f3bda7 has its CatchHandler @ 00e3bdd4 */
  Ref::autorelease((Ref *)this);
                    /* try { // try from 00e3bda8 to 00f3bdeb has its CatchHandler @ 00e3bd00 */
  return this;
}

