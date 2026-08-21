
/* cocos2d::ui::Widget::releaseUpEvent() */

void __thiscall cocos2d::ui::Widget::releaseUpEvent(Widget *this)

{
  long lVar1;
  Widget *this_00;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  undefined4 local_34;
  Widget *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Widget *)Ref::retain((Ref *)this);
  if ((this[0x415] != (Widget)0x0) && (_focusedWidget != this)) {
    dispatchFocusEvent(this_00,_focusedWidget,this);
  }
  plVar2 = *(long **)(this + 0x450);
  if (plVar2 != (long *)0x0) {
    local_34 = 2;
    local_30 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_34);
  }
  if (*(long *)(this + 0x418) != 0) {
    pcVar3 = *(code **)(this + 0x420);
    uVar4 = *(ulong *)(this + 0x428) & 1;
    if (uVar4 != 0 || pcVar3 != (code *)0x0) {
      plVar2 = (long *)(*(long *)(this + 0x418) + ((long)*(ulong *)(this + 0x428) >> 1));
      if (uVar4 != 0) {
        pcVar3 = *(code **)(pcVar3 + *plVar2);
      }
      (*pcVar3)(plVar2,this,2);
    }
  }
  plVar2 = *(long **)(this + 0x480);
  if (plVar2 != (long *)0x0) {
    local_30 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
  Ref::release((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

