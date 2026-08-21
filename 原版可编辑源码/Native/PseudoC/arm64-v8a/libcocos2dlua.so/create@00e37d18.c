
/* cocos2d::PUPointEmitter::create() */

PUEmitter * cocos2d::PUPointEmitter::create(void)

{
  PUEmitter *this;
  
  this = operator_new(0x200,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e37d38 to 00f37d3f has its CatchHandler @ 00e3972c */
  if (this != (PUEmitter *)0x0) {
                    /* try { // try from 00e37d40 to 00f37def has its CatchHandler @ 00e37bc0 */
    PUEmitter::PUEmitter(this);
    *(undefined ***)this = &PTR__PUPointEmitter_016f0ac8;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

