
/* cocos2d::PUPointEmitter::clone() */

PUEmitter * __thiscall cocos2d::PUPointEmitter::clone(PUPointEmitter *this)

{
  PUEmitter *this_00;
  
  this_00 = operator_new(0x200,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUEmitter *)0x0) {
    PUEmitter::PUEmitter(this_00);
    *(undefined ***)this_00 = &PTR__PUPointEmitter_016f0ac8;
  }
  Ref::autorelease((Ref *)this_00);
  (**(code **)(*(long *)this + 0x78))(this,this_00);
                    /* try { // try from 00e37df0 to 00f37e13 has its CatchHandler @ 00e39828 */
  return this_00;
}

