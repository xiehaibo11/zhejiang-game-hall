
/* cocos2d::Spawn::createWithVariableList(cocos2d::FiniteTimeAction*, std::__va_list) */

Action * cocos2d::Spawn::createWithVariableList(Action *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  Action *pAVar3;
  Action *this;
  ulong uVar4;
  undefined8 *puVar5;
  FiniteTimeAction *pFVar6;
  
  if (param_1 != (Action *)0x0) {
    bVar2 = true;
    iVar1 = (int)param_2[3];
    if (-1 < iVar1) goto LAB_00edda7c;
LAB_00edda58:
    *(int *)(param_2 + 3) = iVar1 + 8;
    if (0 < iVar1 + 8) goto LAB_00edda7c;
    pFVar6 = *(FiniteTimeAction **)(param_2[1] + (long)iVar1);
    pAVar3 = param_1;
    if (pFVar6 != (FiniteTimeAction *)0x0) {
      do {
        param_1 = operator_new(0x68,(nothrow_t *)&std::nothrow);
        if (param_1 == (Action *)0x0) {
LAB_00edda48:
          param_1 = (Action *)0x0;
        }
        else {
          Action::Action(param_1);
          *(undefined4 *)(param_1 + 0x4c) = 0;
          *(undefined ***)param_1 = &PTR__Spawn_016f86b8;
          *(undefined ***)(param_1 + 0x28) = &PTR_clone_016f8718;
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined8 *)(param_1 + 0x60) = 0;
          uVar4 = initWithTwoActions((Spawn *)param_1,(FiniteTimeAction *)pAVar3,pFVar6);
          if ((uVar4 & 1) == 0) {
            (**(code **)(*(long *)param_1 + 8))(param_1);
            goto LAB_00edda48;
          }
          Ref::autorelease((Ref *)param_1);
        }
        bVar2 = false;
        iVar1 = (int)param_2[3];
        if (iVar1 < 0) goto LAB_00edda58;
LAB_00edda7c:
        puVar5 = (undefined8 *)*param_2;
        *param_2 = (long)(puVar5 + 1);
        pFVar6 = (FiniteTimeAction *)*puVar5;
        pAVar3 = param_1;
        if (pFVar6 == (FiniteTimeAction *)0x0) break;
      } while( true );
    }
    if (bVar2) {
      pAVar3 = operator_new(0x50,(nothrow_t *)&std::nothrow);
      if (pAVar3 != (Action *)0x0) {
        *(undefined8 *)(pAVar3 + 0x38) = 0;
        *(undefined8 *)(pAVar3 + 0x30) = 0;
        *(undefined8 *)(pAVar3 + 0x48) = 0;
        *(undefined8 *)(pAVar3 + 0x40) = 0;
        *(undefined8 *)(pAVar3 + 0x18) = 0;
        *(undefined8 *)(pAVar3 + 0x10) = 0;
        *(undefined8 *)(pAVar3 + 0x28) = 0;
        *(undefined8 *)(pAVar3 + 0x20) = 0;
        *(undefined8 *)(pAVar3 + 8) = 0;
        *(undefined8 *)pAVar3 = 0;
        Action::Action(pAVar3);
        *(undefined4 *)(pAVar3 + 0x4c) = 0;
        *(undefined ***)pAVar3 = &PTR__Action_016f9768;
        *(undefined ***)(pAVar3 + 0x28) = &PTR_clone_016f97c8;
        Ref::autorelease((Ref *)pAVar3);
      }
      this = operator_new(0x68,(nothrow_t *)&std::nothrow);
      if (this != (Action *)0x0) {
        Action::Action(this);
        *(undefined4 *)(this + 0x4c) = 0;
        *(undefined ***)this = &PTR__Spawn_016f86b8;
        *(undefined ***)(this + 0x28) = &PTR_clone_016f8718;
        *(undefined8 *)(this + 0x58) = 0;
        *(undefined8 *)(this + 0x60) = 0;
        uVar4 = initWithTwoActions((Spawn *)this,(FiniteTimeAction *)param_1,
                                   (FiniteTimeAction *)pAVar3);
        if ((uVar4 & 1) != 0) {
          Ref::autorelease((Ref *)this);
          return this;
        }
        (**(code **)(*(long *)this + 8))(this);
      }
                    /* catch() { ... } // from try @ 00eddbd0 with catch @ 00eddb50 */
      param_1 = (Action *)0x0;
    }
  }
  return param_1;
}

