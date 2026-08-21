
/* cocos2d::PUPathFollower::create() */

PUAffector * cocos2d::PUPathFollower::create(void)

{
  PUAffector *this;
  
                    /* try { // try from 00e2a7d8 to 00f2a7e3 has its CatchHandler @ 00e2a914 */
                    /* try { // try from 00e2a7ec to 00f2a7ef has its CatchHandler @ 00e2a8f8 */
                    /* try { // try from 00e2a7f0 to 00f2a92b has its CatchHandler @ 00e2a758 */
  this = operator_new(0x128,(nothrow_t *)&std::nothrow);
  if (this != (PUAffector *)0x0) {
    PUAffector::PUAffector(this);
    *(undefined ***)this = &PTR__PUPathFollower_016ef990;
    PUSimpleSpline::PUSimpleSpline((PUSimpleSpline *)(this + 0xb0));
  }
  Ref::autorelease((Ref *)this);
  return this;
}

