
/* cocos2d::ui::RadioButtonGroup::onChangedRadioButtonSelect(cocos2d::ui::RadioButton*) */

void __thiscall
cocos2d::ui::RadioButtonGroup::onChangedRadioButtonSelect
          (RadioButtonGroup *this,RadioButton *param_1)

{
  long lVar1;
  RadioButton *pRVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_48;
  undefined4 local_44;
  RadioButtonGroup *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00dc5610 with catch @ 00dc5aa0 */
                    /* catch() { ... } // from try @ 00dc55b8 with catch @ 00dc5aa4 */
                    /* catch() { ... } // from try @ 00dc585c with catch @ 00dc5aa8 */
                    /* catch() { ... } // from try @ 00dc5870 with catch @ 00dc5aac */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00dc574c with catch @ 00dc5abc */
  pRVar2 = *(RadioButton **)(this + 0x540);
  if (pRVar2 != param_1) {
    if (pRVar2 != (RadioButton *)0x0) {
      (**(code **)(*(long *)pRVar2 + 0x680))(pRVar2,0);
                    /* catch() { ... } // from try @ 00dc5640 with catch @ 00dc5aec */
      (**(code **)(**(long **)(this + 0x540) + 0x6b8))(*(long **)(this + 0x540),0);
    }
    *(RadioButton **)(this + 0x540) = param_1;
  }
  Ref::retain((Ref *)this);
  plVar3 = *(long **)(this + 0x530);
  if (plVar3 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x4f0);
    plVar4 = *(long **)(this + 0x4f8);
    plVar7 = plVar4;
    plVar8 = plVar5;
    if (plVar5 != plVar4) {
      pRVar2 = (RadioButton *)*plVar5;
      plVar6 = plVar5;
                    /* catch() { ... } // from try @ 00dc5654 with catch @ 00dc5b28 */
      while ((plVar7 = plVar6, plVar8 = plVar6, pRVar2 != param_1 &&
             (plVar6 = plVar6 + 1, plVar7 = plVar4, plVar8 = plVar4, plVar4 != plVar6))) {
        pRVar2 = (RadioButton *)*plVar6;
      }
    }
    local_40 = *(RadioButtonGroup **)(this + 0x540);
    local_44 = (undefined4)((ulong)((long)plVar8 - (long)plVar5) >> 3);
    if (plVar7 == plVar4) {
      local_44 = 0xffffffff;
    }
    local_48 = 0;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,&local_44,&local_48);
  }
  plVar3 = *(long **)(this + 0x4b0);
  if (plVar3 != (long *)0x0) {
    local_44 = 0;
    local_40 = this;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,&local_44);
  }
  Ref::release((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00dc5bec to 00ec5bfb has its CatchHandler @ 00dc5ecc */
  __stack_chk_fail();
}

