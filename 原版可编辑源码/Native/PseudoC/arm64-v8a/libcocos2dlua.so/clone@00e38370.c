
/* cocos2d::PUPositionEmitter::clone() */

PUEmitter * __thiscall cocos2d::PUPositionEmitter::clone(PUPositionEmitter *this)

{
  PUEmitter *this_00;
  
  this_00 = operator_new(0x228,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUEmitter *)0x0) {
    PUEmitter::PUEmitter(this_00);
    *(undefined8 *)(this_00 + 0x200) = 0;
    *(undefined8 *)(this_00 + 0x210) = 0;
    *(undefined8 *)(this_00 + 0x208) = 0;
    this_00[0x218] = (PUEmitter)0x1;
    *(undefined ***)this_00 = &PTR__PUPositionEmitter_016f0c18;
    *(undefined8 *)(this_00 + 0x220) = 0;
  }
                    /* try { // try from 00e383c8 to 00f383df has its CatchHandler @ 00e39690 */
  Ref::autorelease((Ref *)this_00);
  (**(code **)(*(long *)this + 0x78))(this,this_00);
  return this_00;
}

