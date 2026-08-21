
/* cocos2d::Label::disableEffect(cocos2d::LabelEffect) */

void __thiscall cocos2d::Label::disableEffect(Label *this,undefined4 param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  switch(param_2) {
  case 1:
    if (*(int *)(this + 0x49c) == 1) {
      if (*(int *)(this + 0x308) == 0) {
        *(undefined4 *)(this + 0x38c) = 0;
        (**(code **)(*(long *)this + 0x530))(this,this + 0x360);
      }
      *(undefined4 *)(this + 0x49c) = 0;
      this[0x30c] = (Label)0x1;
    }
    break;
  case 2:
    if (this[0x60f] != (Label)0x0) {
      this[0x60f] = (Label)0x0;
      if (*(Ref **)(this + 0x3c8) != (Ref *)0x0) {
        Ref::release(*(Ref **)(this + 0x3c8));
        *(undefined8 *)(this + 0x3c8) = 0;
      }
      lVar2 = *(long *)this;
LAB_00f0ce54:
                    /* catch() { ... } // from try @ 00f0cd8c with catch @ 00f0ce5c */
                    /* WARNING: Could not recover jumptable at 0x00f0ce64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x600))(this);
      return;
    }
    break;
  case 3:
    if (*(int *)(this + 0x49c) == 3) {
      lVar2 = *(long *)this;
      *(undefined4 *)(this + 0x49c) = 0;
      goto LAB_00f0ce54;
    }
    break;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00f0ce80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x1b0))(0,this);
    return;
  case 5:
    if (this[0x68c] == (Label)0x0) {
      return;
    }
    this[0x68c] = (Label)0x0;
    *(float *)(this + 0x42c) = *(float *)(this + 0x42c) + -1.0;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x5c0);
    uVar1 = 2;
    goto LAB_00f0cf70;
  case 6:
    if (*(long *)(this + 0x690) != 0) {
      (**(code **)(*(long *)this + 0x280))(this,*(long *)(this + 0x690),1);
      *(undefined8 *)(this + 0x690) = 0;
    }
    break;
  case 7:
    lVar2 = *(long *)this;
    this[0x698] = (Label)0x0;
    uVar1 = 6;
    goto LAB_00f0cf6c;
  case 8:
    (**(code **)(*(long *)this + 0x5c0))(this,2);
    (**(code **)(*(long *)this + 0x5c0))(this,3);
    (**(code **)(*(long *)this + 0x5c0))(this,1);
    (**(code **)(*(long *)this + 0x5c0))(this,4);
    (**(code **)(*(long *)this + 0x5c0))(this,5);
    (**(code **)(*(long *)this + 0x5c0))(this,6);
    lVar2 = *(long *)this;
    uVar1 = 7;
LAB_00f0cf6c:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x5c0);
LAB_00f0cf70:
                    /* WARNING: Could not recover jumptable at 0x00f0cf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,uVar1);
    return;
  }
  return;
}

