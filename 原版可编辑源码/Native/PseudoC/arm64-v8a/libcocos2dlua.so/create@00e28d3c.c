
/* cocos2d::PUJetAffector::create() */

PUJetAffector * cocos2d::PUJetAffector::create(void)

{
  PUJetAffector *this;
  
                    /* try { // try from 00e28d4c to 00f28d5f has its CatchHandler @ 00e2939c */
  this = operator_new(0xb8,(nothrow_t *)&std::nothrow);
  if (this != (PUJetAffector *)0x0) {
    PUJetAffector(this);
  }
  Ref::autorelease((Ref *)this);
                    /* try { // try from 00e28d78 to 00f28d83 has its CatchHandler @ 00e293f0 */
  return this;
}

