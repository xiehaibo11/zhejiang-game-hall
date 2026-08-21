
/* cocos2d::ui::RadioButton::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::RadioButton::copySpecialProperties(RadioButton *this,Widget *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* try { // try from 00dc5dd4 to 00ec5ddf has its CatchHandler @ 00dc5ec8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (Widget *)0x0) ||
     (lVar2 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar2 == 0)) goto LAB_00dc5f28;
                    /* try { // try from 00dc5e1c to 00ec5e37 has its CatchHandler @ 00dc5e8c */
  AbstractCheckButton::copySpecialProperties((AbstractCheckButton *)this,param_1);
  plVar3 = *(long **)(lVar2 + 0x5e0);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)(lVar2 + 0x5c0) == plVar3) {
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
                    /* try { // try from 00dc5e38 to 00ec5f13 has its CatchHandler @ 00dc5b5c */
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00dc6b40(alStack_70,this + 0x5c0);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00dc5e9c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00dc5c78 with catch @ 00dc5e88 */
                    /* catch() { ... } // from try @ 00dc5c98 with catch @ 00dc5e8c
                       catch() { ... } // from try @ 00dc5e1c with catch @ 00dc5e8c */
    pcVar4 = *(code **)(*local_50 + 0x28);
                    /* catch() { ... } // from try @ 00dc5db4 with catch @ 00dc5e90 */
    goto LAB_00dc5e9c;
  }
  plVar3 = *(long **)(lVar2 + 0x4b0);
  if (plVar3 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00dc5dd4 with catch @ 00dc5ec8 */
    local_50 = (long *)0x0;
                    /* catch() { ... } // from try @ 00dc5bec with catch @ 00dc5ecc */
  }
  else if ((long *)(lVar2 + 0x490) == plVar3) {
                    /* catch() { ... } // from try @ 00dc5c00 with catch @ 00dc5ed0 */
                    /* catch() { ... } // from try @ 00dc5ce0 with catch @ 00dc5ed4 */
    local_50 = alStack_70;
                    /* catch() { ... } // from try @ 00dc5d38 with catch @ 00dc5ee4 */
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
                    /* catch() { ... } // from try @ 00dc5d58 with catch @ 00dc5ee8 */
  FUN_00dad59c(alStack_70,this + 0x490);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00dc5f1c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00dc5f1c;
  }
  *(undefined8 *)(this + 0x5f0) = *(undefined8 *)(lVar2 + 0x5f0);
LAB_00dc5f28:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

