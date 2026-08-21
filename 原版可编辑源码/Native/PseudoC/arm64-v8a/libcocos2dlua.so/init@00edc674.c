
/* cocos2d::Sequence::init(cocos2d::Vector<cocos2d::FiniteTimeAction*> const&) */

undefined4 __thiscall cocos2d::Sequence::init(Sequence *this,Vector *param_1)

{
  long lVar1;
  Action *this_00;
  undefined8 *puVar2;
  long lVar3;
  FiniteTimeAction *this_01;
  long lVar4;
  float fVar5;
  
  puVar2 = *(undefined8 **)param_1;
  lVar3 = *(long *)(param_1 + 8) - (long)puVar2 >> 3;
  if (lVar3 != 0) {
    lVar1 = lVar3 + -1;
    if (lVar1 == 0) {
      this_01 = (FiniteTimeAction *)*puVar2;
      this_00 = operator_new(0x50,(nothrow_t *)&std::nothrow);
      if (this_00 != (Action *)0x0) {
        *(undefined8 *)(this_00 + 0x38) = 0;
        *(undefined8 *)(this_00 + 0x30) = 0;
        *(undefined8 *)(this_00 + 0x48) = 0;
        *(undefined8 *)(this_00 + 0x40) = 0;
        *(undefined8 *)(this_00 + 0x18) = 0;
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(undefined8 *)(this_00 + 0x28) = 0;
        *(undefined8 *)(this_00 + 0x20) = 0;
        *(undefined8 *)(this_00 + 8) = 0;
        *(undefined8 *)this_00 = 0;
        Action::Action(this_00);
        *(undefined4 *)(this_00 + 0x4c) = 0;
                    /* try { // try from 00edc6dc to 00fdc6eb has its CatchHandler @ 00edc7c0 */
        *(undefined ***)this_00 = &PTR__Action_016f9768;
        *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f97c8;
        Ref::autorelease((Ref *)this_00);
        if (this_01 != (FiniteTimeAction *)0x0) {
                    /* try { // try from 00edc704 to 00fdc70f has its CatchHandler @ 00edc7d4 */
                    /* try { // try from 00edc710 to 00fdc82b has its CatchHandler @ 00edc63c */
          fVar5 = 1e-06;
          if (1e-06 < ABS(*(float *)(this_01 + 0x4c) + *(float *)(this_00 + 0x4c))) {
            fVar5 = *(float *)(this_01 + 0x4c) + *(float *)(this_00 + 0x4c);
          }
          *(undefined4 *)(this + 0x50) = 0;
          *(undefined2 *)(this + 0x54) = 1;
          *(float *)(this + 0x4c) = fVar5;
          *(FiniteTimeAction **)(this + 0x58) = this_01;
          goto LAB_00edc7b4;
        }
      }
    }
    else {
      this_01 = (FiniteTimeAction *)*puVar2;
      if (1 < lVar1) {
        lVar4 = 0;
        do {
          this_01 = (FiniteTimeAction *)
                    createWithTwoActions(this_01,(FiniteTimeAction *)puVar2[lVar4 + 1]);
          puVar2 = *(undefined8 **)param_1;
          lVar4 = lVar4 + 1;
        } while (lVar3 + -2 != lVar4);
      }
      if ((this_01 != (FiniteTimeAction *)0x0) &&
         (this_00 = (Action *)puVar2[lVar1], this_00 != (Action *)0x0)) {
        fVar5 = 1e-06;
        if (1e-06 < ABS(*(float *)(this_01 + 0x4c) + *(float *)(this_00 + 0x4c))) {
          fVar5 = *(float *)(this_01 + 0x4c) + *(float *)(this_00 + 0x4c);
        }
        *(undefined4 *)(this + 0x50) = 0;
        *(undefined2 *)(this + 0x54) = 1;
        *(float *)(this + 0x4c) = fVar5;
        *(FiniteTimeAction **)(this + 0x58) = this_01;
LAB_00edc7b4:
        Ref::retain((Ref *)this_01);
        *(Action **)(this + 0x60) = this_00;
                    /* catch() { ... } // from try @ 00edc6dc with catch @ 00edc7c0 */
        Ref::retain((Ref *)this_00);
        return 1;
      }
    }
    log("Sequence::initWithTwoActions error: action is nullptr!!");
  }
                    /* catch() { ... } // from try @ 00edc704 with catch @ 00edc7d4 */
  return 0;
}

