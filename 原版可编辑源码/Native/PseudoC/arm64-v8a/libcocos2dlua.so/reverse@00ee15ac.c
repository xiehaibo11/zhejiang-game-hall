
/* cocos2d::BezierBy::reverse() const */

Action * __thiscall cocos2d::BezierBy::reverse(BezierBy *this)

{
  Action *this_00;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  
                    /* try { // try from 00ee15b4 to 00fe15bb has its CatchHandler @ 00ee161c */
                    /* try { // try from 00ee15bc to 00fe1667 has its CatchHandler @ 00ee1550 */
  uVar1 = *(undefined8 *)(this + 0x58);
  fVar6 = *(float *)(this + 0x4c);
  auVar5 = *(undefined1 (*) [16])(this + 0x60);
  this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    fVar3 = (float)uVar1;
                    /* catch() { ... } // from try @ 00ee15b4 with catch @ 00ee161c */
    fVar4 = (float)((ulong)uVar1 >> 0x20);
    auVar5 = NEON_ext(auVar5,auVar5,8,1);
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar2 = 1e-06;
    if (1e-06 < ABS(fVar6)) {
      fVar2 = fVar6;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
                    /* catch() { ... } // from try @ 00ee1584 with catch @ 00ee164c */
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f8fe8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9048;
    *(float *)(this_00 + 0x58) = -fVar3;
    *(float *)(this_00 + 0x5c) = -fVar4;
    *(float *)(this_00 + 0x4c) = fVar2;
    *(ulong *)(this_00 + 0x68) = CONCAT44(auVar5._12_4_ - fVar4,auVar5._8_4_ - fVar3);
    *(ulong *)(this_00 + 0x60) = CONCAT44(auVar5._4_4_ - fVar4,auVar5._0_4_ - fVar3);
    Ref::autorelease((Ref *)this_00);
  }
                    /* try { // try from 00ee1668 to 00fe16b3 has its CatchHandler @ 00ee1668
                       catch() { ... } // from try @ 00ee1668 with catch @ 00ee1668
                       catch() { ... } // from try @ 00ee16f4 with catch @ 00ee1668 */
  return this_00;
}

