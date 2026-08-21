
/* cocos2d::ui::CheckBox::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::CheckBox::copySpecialProperties(CheckBox *this,Widget *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dc501c to 00ec50eb has its CatchHandler @ 00dc5260 */
  if ((param_1 == (Widget *)0x0) ||
     (lVar2 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar2 == 0)) goto LAB_00dc5164;
  AbstractCheckButton::copySpecialProperties((AbstractCheckButton *)this,param_1);
  uVar6 = *(undefined8 *)(lVar2 + 0x5c0);
  uVar4 = *(undefined8 *)(lVar2 + 0x5d0);
  *(undefined8 *)(this + 0x5c8) = *(undefined8 *)(lVar2 + 0x5c8);
  *(undefined8 *)(this + 0x5c0) = uVar6;
  *(undefined8 *)(this + 0x5d0) = uVar4;
  plVar3 = *(long **)(lVar2 + 0x600);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)(lVar2 + 0x5e0) == plVar3) {
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00dc518c(alStack_70,this + 0x5e0);
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00dc50e0:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00dc50e0;
  }
  plVar3 = *(long **)(lVar2 + 0x4b0);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
                    /* try { // try from 00dc50ec to 00ec518f has its CatchHandler @ 00dc4ab8 */
    if ((long *)(lVar2 + 0x490) == plVar3) {
      local_50 = alStack_70;
      (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
    }
    else {
      local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_00dad59c(alStack_70,this + 0x490);
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00dc5164;
    pcVar5 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar5)();
LAB_00dc5164:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

