
/* cocos2d::Sequence::createWithVariableList(cocos2d::FiniteTimeAction*, std::__va_list) */

FiniteTimeAction *
cocos2d::Sequence::createWithVariableList(FiniteTimeAction *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  Action *this;
  FiniteTimeAction *pFVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 00edc4bc to 00fdc4c3 has its CatchHandler @ 00edc638 */
                    /* try { // try from 00edc4c4 to 00fdc63b has its CatchHandler @ 00edc470 */
  if (param_1 == (FiniteTimeAction *)0x0) {
    return (FiniteTimeAction *)0x0;
  }
  bVar1 = true;
  iVar2 = (int)param_2[3];
  do {
    if (iVar2 < 0) {
      *(int *)(param_2 + 3) = iVar2 + 8;
      if (0 < iVar2 + 8) goto LAB_00edc4ec;
      pFVar3 = *(FiniteTimeAction **)(param_2[1] + (long)iVar2);
    }
    else {
LAB_00edc4ec:
      puVar4 = (undefined8 *)*param_2;
      *param_2 = (long)(puVar4 + 1);
      pFVar3 = (FiniteTimeAction *)*puVar4;
    }
    if (pFVar3 == (FiniteTimeAction *)0x0) {
      if (!bVar1) {
        return param_1;
      }
      this = operator_new(0x50,(nothrow_t *)&std::nothrow);
      if (this != (Action *)0x0) {
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        Action::Action(this);
        *(undefined4 *)(this + 0x4c) = 0;
        *(undefined ***)this = &PTR__Action_016f9768;
        *(undefined ***)(this + 0x28) = &PTR_clone_016f97c8;
        Ref::autorelease((Ref *)this);
      }
      pFVar3 = (FiniteTimeAction *)createWithTwoActions(param_1,(FiniteTimeAction *)this);
      return pFVar3;
    }
    param_1 = (FiniteTimeAction *)createWithTwoActions(param_1,pFVar3);
    bVar1 = false;
    iVar2 = (int)param_2[3];
  } while( true );
}

