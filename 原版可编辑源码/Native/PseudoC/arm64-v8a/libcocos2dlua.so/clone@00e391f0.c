
/* cocos2d::PUSlaveEmitter::clone() */

PUSlaveEmitter * __thiscall cocos2d::PUSlaveEmitter::clone(PUSlaveEmitter *this)

{
  PUSlaveEmitter *this_00;
  
  this_00 = operator_new(0x260,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUSlaveEmitter *)0x0) {
    PUSlaveEmitter(this_00);
  }
                    /* try { // try from 00e39220 to 00f3922b has its CatchHandler @ 00e39664 */
  Ref::autorelease((Ref *)this_00);
  (**(code **)(*(long *)this + 0x78))(this,this_00);
  return this_00;
}

