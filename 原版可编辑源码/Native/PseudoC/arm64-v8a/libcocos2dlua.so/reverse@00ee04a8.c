
/* cocos2d::SkewBy::reverse() const */

Action * __thiscall cocos2d::SkewBy::reverse(SkewBy *this)

{
  Action *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 00ee0464 with catch @ 00ee04ac */
  fVar4 = *(float *)(this + 0x4c);
  uVar5 = *(undefined8 *)(this + 0x58);
                    /* try { // try from 00ee04c8 to 00fe050b has its CatchHandler @ 00ee04c8
                       catch() { ... } // from try @ 00ee04c8 with catch @ 00ee04c8
                       catch() { ... } // from try @ 00ee0650 with catch @ 00ee04c8 */
  this_00 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    fVar1 = -(float)uVar5;
    fVar2 = -(float)((ulong)uVar5 >> 0x20);
                    /* try { // try from 00ee050c to 00fe0523 has its CatchHandler @ 00ee06c0 */
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar3 = 1e-06;
    if (1e-06 < ABS(fVar4)) {
      fVar3 = fVar4;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(ulong *)(this_00 + 0x68) = CONCAT44(fVar2,fVar1);
    *(undefined ***)this_00 = &PTR__Action_016f8cc8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8d28;
    *(float *)(this_00 + 0x4c) = fVar3;
    *(ulong *)(this_00 + 0x58) = CONCAT44(fVar2,fVar1);
    Ref::autorelease((Ref *)this_00);
  }
                    /* try { // try from 00ee053c to 00fe054f has its CatchHandler @ 00ee06a0 */
  return this_00;
}

