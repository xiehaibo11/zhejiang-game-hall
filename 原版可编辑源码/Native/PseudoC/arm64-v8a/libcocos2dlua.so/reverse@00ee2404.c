
/* cocos2d::ScaleBy::reverse() const */

Action * __thiscall cocos2d::ScaleBy::reverse(ScaleBy *this)

{
  Action *this_00;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 00ee2380 with catch @ 00ee241c */
  fVar3 = *(float *)(this + 0x4c);
  uVar5 = *(undefined8 *)(this + 0x70);
  fVar4 = *(float *)(this + 0x78);
  this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00ee2470 with catch @ 00ee2438 */
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    uVar1 = NEON_fmov(0x3f800000,4);
                    /* try { // try from 00ee2468 to 00fe246f has its CatchHandler @ 00ee24e8 */
                    /* try { // try from 00ee2470 to 00fe2503 has its CatchHandler @ 00ee2438 */
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar2 = 1e-06;
    if (1e-06 < ABS(fVar3)) {
      fVar2 = fVar3;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f91c8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9228;
    *(ulong *)(this_00 + 0x70) =
         CONCAT44((float)((ulong)uVar1 >> 0x20) / (float)((ulong)uVar5 >> 0x20),
                  (float)uVar1 / (float)uVar5);
    *(float *)(this_00 + 0x4c) = fVar2;
    *(float *)(this_00 + 0x78) = 1.0 / fVar4;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

