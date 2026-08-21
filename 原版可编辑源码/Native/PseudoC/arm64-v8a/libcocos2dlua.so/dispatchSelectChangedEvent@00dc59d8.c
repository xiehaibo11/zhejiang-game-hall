
/* cocos2d::ui::RadioButton::dispatchSelectChangedEvent(bool) */

void __thiscall cocos2d::ui::RadioButton::dispatchSelectChangedEvent(RadioButton *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  uint local_44;
  RadioButton *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = ~(uint)param_1 & 1;
  Ref::retain((Ref *)this);
  plVar3 = *(long **)(this + 0x5e0);
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 00dc5a1c to 00ec5a23 has its CatchHandler @ 00dc5a30 */
                    /* try { // try from 00dc5a24 to 00ec5b5b has its CatchHandler @ 00dc5308 */
    local_44 = uVar1;
    local_40 = this;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,&local_44);
  }
                    /* catch() { ... } // from try @ 00dc5a1c with catch @ 00dc5a30 */
  plVar3 = *(long **)(this + 0x4b0);
                    /* catch() { ... } // from try @ 00dc556c with catch @ 00dc5a34 */
  if (plVar3 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00dc555c with catch @ 00dc5a38 */
                    /* catch() { ... } // from try @ 00dc5548 with catch @ 00dc5a3c */
                    /* catch() { ... } // from try @ 00dc557c with catch @ 00dc5a40 */
                    /* catch() { ... } // from try @ 00dc5508 with catch @ 00dc5a44 */
                    /* catch() { ... } // from try @ 00dc54bc with catch @ 00dc5a48 */
                    /* catch() { ... } // from try @ 00dc54b0 with catch @ 00dc5a4c */
    local_44 = uVar1;
    local_40 = this;
                    /* catch() { ... } // from try @ 00dc5818 with catch @ 00dc5a50 */
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,&local_44);
  }
                    /* catch() { ... } // from try @ 00dc5438 with catch @ 00dc5a54 */
  if ((param_1 != 0) && (*(RadioButtonGroup **)(this + 0x5f0) != (RadioButtonGroup *)0x0)) {
                    /* catch() { ... } // from try @ 00dc54d0 with catch @ 00dc5a64 */
    RadioButtonGroup::onChangedRadioButtonSelect(*(RadioButtonGroup **)(this + 0x5f0),this);
  }
                    /* catch() { ... } // from try @ 00dc5598 with catch @ 00dc5a68
                       catch() { ... } // from try @ 00dc55e0 with catch @ 00dc5a68 */
                    /* catch() { ... } // from try @ 00dc58fc with catch @ 00dc5a6c */
  Ref::release((Ref *)this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00dc5938 with catch @ 00dc5a80 */
                    /* catch() { ... } // from try @ 00dc57b4 with catch @ 00dc5a84 */
                    /* catch() { ... } // from try @ 00dc5720 with catch @ 00dc5a88 */
                    /* catch() { ... } // from try @ 00dc57c4 with catch @ 00dc5a8c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

