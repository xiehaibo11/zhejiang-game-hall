
/* covariant return thunk to cocos2d::BezierBy::clone() const */

Action * __thiscall cocos2d::BezierBy::clone(BezierBy *this)

{
  Action *pAVar1;
  Action *this_00;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  fVar5 = *(float *)(this + 0x24);
  this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
                    /* try { // try from 00ee13d8 to 00fe1413 has its CatchHandler @ 00ee13d8
                       catch() { ... } // from try @ 00ee13d8 with catch @ 00ee13d8
                       catch() { ... } // from try @ 00ee1458 with catch @ 00ee13d8 */
    Action::Action(this_00);
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar2 = 1e-06;
    if (1e-06 < ABS(fVar5)) {
      fVar2 = fVar5;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
                    /* try { // try from 00ee1414 to 00fe141f has its CatchHandler @ 00ee1534 */
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f8fe8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9048;
                    /* try { // try from 00ee1420 to 00fe1433 has its CatchHandler @ 00ee1514 */
    *(float *)(this_00 + 0x4c) = fVar2;
    uVar4 = *(undefined8 *)(this + 0x38);
    uVar3 = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this_00 + 0x60) = uVar4;
    *(undefined8 *)(this_00 + 0x58) = uVar3;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
                    /* try { // try from 00ee1450 to 00fe1457 has its CatchHandler @ 00ee14dc */
  return pAVar1;
}

