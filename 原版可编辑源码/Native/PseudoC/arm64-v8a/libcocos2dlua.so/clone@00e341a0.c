
/* cocos2d::CCPUBoxEmitter::clone() */

PUEmitter * __thiscall cocos2d::CCPUBoxEmitter::clone(CCPUBoxEmitter *this)

{
  PUEmitter *this_00;
  
  this_00 = operator_new(0x218,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUEmitter *)0x0) {
    PUEmitter::PUEmitter(this_00);
    *(undefined ***)this_00 = &PTR__PUEmitter_016f0588;
    *(undefined8 *)(this_00 + 0x204) = 0x4248000042c80000;
    *(undefined8 *)(this_00 + 0x1fc) = 0x42c8000042c80000;
    *(undefined8 *)(this_00 + 0x20c) = 0x4248000042480000;
  }
  Ref::autorelease((Ref *)this_00);
  (**(code **)(*(long *)this + 0x78))(this,this_00);
  return this_00;
}

