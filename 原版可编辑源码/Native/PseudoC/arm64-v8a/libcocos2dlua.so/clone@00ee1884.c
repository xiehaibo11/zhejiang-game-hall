
/* covariant return thunk to cocos2d::BezierTo::clone() const */

Action * __thiscall cocos2d::BezierTo::clone(BezierTo *this)

{
  Action *pAVar1;
  Action *this_00;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
                    /* catch() { ... } // from try @ 00ee1820 with catch @ 00ee188c */
  fVar5 = *(float *)(this + 0x24);
  this_00 = operator_new(0x98,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
                    /* catch() { ... } // from try @ 00ee17ec with catch @ 00ee18bc */
    *(undefined8 *)(this_00 + 0x78) = 0;
                    /* try { // try from 00ee18d8 to 00fe1917 has its CatchHandler @ 00ee18d8
                       catch() { ... } // from try @ 00ee18d8 with catch @ 00ee18d8
                       catch() { ... } // from try @ 00ee1950 with catch @ 00ee18d8 */
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar2 = 1e-06;
    if (1e-06 < ABS(fVar5)) {
      fVar2 = fVar5;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f9088;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f90e8;
    *(float *)(this_00 + 0x4c) = fVar2;
    uVar4 = *(undefined8 *)(this + 0x60);
    uVar3 = *(undefined8 *)(this + 0x58);
                    /* try { // try from 00ee1918 to 00fe192b has its CatchHandler @ 00ee19e4 */
    *(undefined8 *)(this_00 + 0x90) = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(this_00 + 0x88) = uVar4;
    *(undefined8 *)(this_00 + 0x80) = uVar3;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

