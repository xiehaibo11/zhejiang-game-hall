
/* cocos2d::ui::PageView::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::PageView::copySpecialProperties(PageView *this,Widget *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (Widget *)0x0) ||
     (lVar2 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar2 == 0)) goto LAB_00db9950;
  ListView::copySpecialProperties((ListView *)this,param_1);
  plVar3 = *(long **)(lVar2 + 0x9b0);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)(lVar2 + 0x990) == plVar3) {
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00db9dc8(alStack_70,this + 0x990);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00db988c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00db988c;
  }
  plVar3 = *(long **)(lVar2 + 0x4b0);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)(lVar2 + 0x490) == plVar3) {
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00dad59c(alStack_70,this + 0x490);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00db990c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00db990c;
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x970);
  uVar5 = *(undefined8 *)(lVar2 + 0x980);
  *(undefined8 *)(this + 0x978) = *(undefined8 *)(lVar2 + 0x978);
  *(undefined8 *)(this + 0x970) = uVar6;
  *(undefined8 *)(this + 0x980) = uVar5;
  *(undefined8 *)(this + 0x960) = *(undefined8 *)(lVar2 + 0x960);
  *(undefined8 *)(this + 0x9c8) = *(undefined8 *)(lVar2 + 0x9c8);
  *(undefined4 *)(this + 0x968) = *(undefined4 *)(lVar2 + 0x968);
  *(undefined4 *)(this + 0x9c0) = *(undefined4 *)(lVar2 + 0x9c0);
  *(undefined8 *)(this + 0x958) = *(undefined8 *)(lVar2 + 0x958);
  this[0x9d0] = *(PageView *)(lVar2 + 0x9d0);
LAB_00db9950:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

