
/* cocos2d::ui::RadioButtonGroup::removeRadioButton(cocos2d::ui::RadioButton*) */

void __thiscall
cocos2d::ui::RadioButtonGroup::removeRadioButton(RadioButtonGroup *this,RadioButton *param_1)

{
  size_t __n;
  long *plVar1;
  long *plVar2;
  RadioButton *pRVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
                    /* try { // try from 00dc6428 to 00ec648b has its CatchHandler @ 00dc60c0 */
  plVar1 = *(long **)(this + 0x4f0);
  plVar2 = *(long **)(this + 0x4f8);
  plVar5 = plVar2;
  plVar6 = plVar1;
  if (plVar1 != plVar2) {
    pRVar3 = (RadioButton *)*plVar1;
    plVar4 = plVar1;
    while ((plVar5 = plVar4, plVar6 = plVar4, pRVar3 != param_1 &&
           (plVar4 = plVar4 + 1, plVar5 = plVar2, plVar6 = plVar2, plVar2 != plVar4))) {
      pRVar3 = (RadioButton *)*plVar4;
    }
  }
                    /* try { // try from 00dc648c to 00ec64ff has its CatchHandler @ 00dc66a4 */
  lVar7 = (long)plVar6 - (long)plVar1 >> 3;
  if (plVar5 == plVar2) {
    lVar7 = -1;
  }
  if ((param_1 != (RadioButton *)0x0) && (lVar7 != -1)) {
    *(undefined8 *)(param_1 + 0x5f0) = 0;
    if (*(RadioButton **)(this + 0x540) == param_1) {
      (**(code **)(*(long *)param_1 + 0x680))(param_1,0);
      (**(code **)(**(long **)(this + 0x540) + 0x6b8))(*(long **)(this + 0x540),0);
      plVar1 = *(long **)(this + 0x4f0);
      *(undefined8 *)(this + 0x540) = 0;
    }
    plVar1 = plVar1 + lVar7;
    Ref::release((Ref *)*plVar1);
    __n = *(long *)(this + 0x4f8) - (long)(plVar1 + 1);
    if (__n != 0) {
      memmove(plVar1,plVar1 + 1,__n);
    }
                    /* try { // try from 00dc6524 to 00ec652f has its CatchHandler @ 00dc6690 */
    *(long **)(this + 0x4f8) = plVar1 + ((long)__n >> 3);
    if (((this[0x548] == (RadioButtonGroup)0x0) && (*(long *)(this + 0x540) == 0)) &&
       (*(long **)(this + 0x4f0) != plVar1 + ((long)__n >> 3))) {
                    /* WARNING: Could not recover jumptable at 0x00dc6570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x698))(this,0);
      return;
    }
  }
                    /* try { // try from 00dc6540 to 00ec654f has its CatchHandler @ 00dc661c */
  return;
}

