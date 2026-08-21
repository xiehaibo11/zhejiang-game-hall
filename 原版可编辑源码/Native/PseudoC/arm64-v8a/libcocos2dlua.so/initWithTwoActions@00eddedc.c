
/* cocos2d::Spawn::initWithTwoActions(cocos2d::FiniteTimeAction*, cocos2d::FiniteTimeAction*) */

undefined8 __thiscall
cocos2d::Spawn::initWithTwoActions(Spawn *this,FiniteTimeAction *param_1,FiniteTimeAction *param_2)

{
  Action *pAVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_1 == (FiniteTimeAction *)0x0) || (param_2 == (FiniteTimeAction *)0x0)) {
                    /* catch() { ... } // from try @ 00eddff8 with catch @ 00eddfcc */
    log("Spawn::initWithTwoActions error: action is nullptr!");
    uVar2 = 0;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x4c);
    fVar6 = *(float *)(param_2 + 0x4c);
    fVar4 = fVar5;
    if (fVar5 <= fVar6) {
      fVar4 = fVar6;
    }
    fVar3 = 1e-06;
    if (1e-06 < ABS(fVar4)) {
      fVar3 = fVar4;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined2 *)(this + 0x54) = 1;
    *(float *)(this + 0x4c) = fVar3;
    *(FiniteTimeAction **)(this + 0x58) = param_1;
    *(FiniteTimeAction **)(this + 0x60) = param_2;
    if (fVar5 <= fVar6) {
      if (fVar5 < fVar6) {
                    /* try { // try from 00eddff0 to 00fddff7 has its CatchHandler @ 00ede058 */
        pAVar1 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00eddff8 to 00fde073 has its CatchHandler @ 00eddfcc */
        if (pAVar1 != (Action *)0x0) {
          Action::Action(pAVar1);
          *(undefined ***)pAVar1 = &PTR__Action_016f9628;
          fVar4 = 1e-06;
          if (1e-06 < ABS(fVar6 - fVar5)) {
            fVar4 = fVar6 - fVar5;
          }
          *(undefined4 *)(pAVar1 + 0x50) = 0;
          *(undefined ***)(pAVar1 + 0x28) = &PTR_clone_016f9688;
          *(float *)(pAVar1 + 0x4c) = fVar4;
          *(undefined2 *)(pAVar1 + 0x54) = 1;
          Ref::autorelease((Ref *)pAVar1);
        }
                    /* catch() { ... } // from try @ 00eddff0 with catch @ 00ede058 */
        param_1 = (FiniteTimeAction *)
                  Sequence::createWithTwoActions(param_1,(FiniteTimeAction *)pAVar1);
        *(FiniteTimeAction **)(this + 0x58) = param_1;
      }
    }
    else {
      pAVar1 = operator_new(0x58,(nothrow_t *)&std::nothrow);
      if (pAVar1 != (Action *)0x0) {
        Action::Action(pAVar1);
        *(undefined ***)pAVar1 = &PTR__Action_016f9628;
        fVar4 = 1e-06;
        if (1e-06 < ABS(fVar5 - fVar6)) {
          fVar4 = fVar5 - fVar6;
        }
        *(undefined4 *)(pAVar1 + 0x50) = 0;
        *(undefined ***)(pAVar1 + 0x28) = &PTR_clone_016f9688;
        *(float *)(pAVar1 + 0x4c) = fVar4;
        *(undefined2 *)(pAVar1 + 0x54) = 1;
        Ref::autorelease((Ref *)pAVar1);
      }
      uVar2 = Sequence::createWithTwoActions(param_2,(FiniteTimeAction *)pAVar1);
      param_1 = *(FiniteTimeAction **)(this + 0x58);
      *(undefined8 *)(this + 0x60) = uVar2;
    }
    Ref::retain((Ref *)param_1);
                    /* catch() { ... } // from try @ 00ede0a4 with catch @ 00ede074 */
    Ref::retain(*(Ref **)(this + 0x60));
    uVar2 = 1;
  }
  return uVar2;
}

