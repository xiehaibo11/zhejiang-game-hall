
/* cocos2d::Spawn::init(cocos2d::Vector<cocos2d::FiniteTimeAction*> const&) */

undefined8 __thiscall cocos2d::Spawn::init(Spawn *this,Vector *param_1)

{
  long lVar1;
  Action *pAVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  Action *this_00;
  FiniteTimeAction *pFVar7;
  long lVar8;
  
  puVar5 = *(undefined8 **)param_1;
  lVar6 = *(long *)(param_1 + 8) - (long)puVar5 >> 3;
  if (lVar6 == 0) {
    return 0;
  }
  lVar1 = lVar6 + -1;
  if (lVar1 == 0) {
    this_00 = (Action *)*puVar5;
    pAVar2 = operator_new(0x50,(nothrow_t *)&std::nothrow);
    if (pAVar2 != (Action *)0x0) {
      *(undefined8 *)(pAVar2 + 0x38) = 0;
      *(undefined8 *)(pAVar2 + 0x30) = 0;
      *(undefined8 *)(pAVar2 + 0x48) = 0;
      *(undefined8 *)(pAVar2 + 0x40) = 0;
      *(undefined8 *)(pAVar2 + 0x18) = 0;
      *(undefined8 *)(pAVar2 + 0x10) = 0;
      *(undefined8 *)(pAVar2 + 0x28) = 0;
      *(undefined8 *)(pAVar2 + 0x20) = 0;
      *(undefined8 *)(pAVar2 + 8) = 0;
      *(undefined8 *)pAVar2 = 0;
      Action::Action(pAVar2);
      *(undefined4 *)(pAVar2 + 0x4c) = 0;
      *(undefined ***)pAVar2 = &PTR__Action_016f9768;
      *(undefined ***)(pAVar2 + 0x28) = &PTR_clone_016f97c8;
      Ref::autorelease((Ref *)pAVar2);
    }
  }
  else {
    this_00 = (Action *)*puVar5;
    if (1 < lVar1) {
      lVar8 = 0;
      pAVar2 = this_00;
      do {
        pFVar7 = (FiniteTimeAction *)puVar5[lVar8 + 1];
        this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
        if (this_00 == (Action *)0x0) {
LAB_00edde14:
          this_00 = (Action *)0x0;
        }
        else {
          Action::Action(this_00);
          *(undefined4 *)(this_00 + 0x4c) = 0;
          *(undefined ***)this_00 = &PTR__Spawn_016f86b8;
          *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8718;
          *(undefined8 *)(this_00 + 0x58) = 0;
          *(undefined8 *)(this_00 + 0x60) = 0;
          uVar3 = initWithTwoActions((Spawn *)this_00,(FiniteTimeAction *)pAVar2,pFVar7);
          if ((uVar3 & 1) == 0) {
            (**(code **)(*(long *)this_00 + 8))(this_00);
            goto LAB_00edde14;
          }
          Ref::autorelease((Ref *)this_00);
        }
        puVar5 = *(undefined8 **)param_1;
        lVar8 = lVar8 + 1;
        pAVar2 = this_00;
      } while (lVar6 + -2 != lVar8);
    }
    pAVar2 = (Action *)puVar5[lVar1];
  }
  uVar4 = initWithTwoActions(this,(FiniteTimeAction *)this_00,(FiniteTimeAction *)pAVar2);
  return uVar4;
}

