
/* covariant return thunk to cocos2d::SkewTo::clone() const */

Action * __thiscall cocos2d::SkewTo::clone(SkewTo *this)

{
  Action *pAVar1;
  Action *this_00;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 00edfec0 to 00fdff03 has its CatchHandler @ 00edfec0
                       catch() { ... } // from try @ 00edfec0 with catch @ 00edfec0
                       catch() { ... } // from try @ 00ee0048 with catch @ 00edfec0 */
  fVar4 = *(float *)(this + 0x24);
  uVar2 = *(undefined8 *)(this + 0x40);
  this_00 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
                    /* try { // try from 00edff04 to 00fdff1b has its CatchHandler @ 00ee00b8 */
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar3 = 1e-06;
    if (1e-06 < ABS(fVar4)) {
      fVar3 = fVar4;
    }
                    /* try { // try from 00edff34 to 00fdff47 has its CatchHandler @ 00ee0098 */
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f8850;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f88b0;
    *(float *)(this_00 + 0x4c) = fVar3;
    *(undefined8 *)(this_00 + 0x68) = uVar2;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

