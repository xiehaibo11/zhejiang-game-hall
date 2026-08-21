
/* cocos2d::Animation::clone() const */

Ref * __thiscall cocos2d::Animation::clone(Animation *this)

{
  Ref *this_00;
  
                    /* try { // try from 00eec7bc to 00fec7c3 has its CatchHandler @ 00eec94c */
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
                    /* try { // try from 00eec7e0 to 00fec827 has its CatchHandler @ 00eec95c */
    *(undefined4 *)(this_00 + 0x38) = 0;
    *(undefined4 *)(this_00 + 0x5c) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined ***)this_00 = &PTR__Animation_016fa430;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016fa458;
    *(undefined8 *)(this_00 + 0x30) = 0;
    this_00[0x58] = (Ref)0x0;
  }
  initWithAnimationFrames
            ((Animation *)this_00,(Vector *)(this + 0x40),*(float *)(this + 0x34),
             *(uint *)(this + 0x5c));
  *(Animation *)(this_00 + 0x58) = this[0x58];
  Ref::autorelease(this_00);
  return this_00;
}

