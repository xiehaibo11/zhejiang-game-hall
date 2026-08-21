
/* cocos2d::ui::Widget::dispatchFocusEvent(cocos2d::ui::Widget*, cocos2d::ui::Widget*) */

void __thiscall
cocos2d::ui::Widget::dispatchFocusEvent(Widget *this,Widget *param_1,Widget *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  Widget *pWVar4;
  Widget *local_88;
  Widget *apWStack_80 [9];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (Widget *)0x0) {
    pWVar4 = (Widget *)0x0;
    if (param_2 == (Widget *)0x0) goto LAB_00dace1c;
  }
  else {
    pWVar4 = _focusedWidget;
    if (param_1[0x414] != (Widget)0x0) {
      pWVar4 = param_1;
    }
    if (pWVar4 == param_2) goto LAB_00dace1c;
  }
  if (param_2 != (Widget *)0x0) {
    plVar2 = *(long **)(param_2 + 0x340);
    if (plVar2 == (long *)0x0) goto LAB_00dace54;
    local_88 = param_2;
    apWStack_80[0] = pWVar4;
    (**(code **)(*plVar2 + 0x30))(plVar2,apWStack_80,&local_88);
  }
  if (pWVar4 != (Widget *)0x0) {
    plVar2 = *(long **)(pWVar4 + 0x340);
    if (plVar2 == (long *)0x0) {
LAB_00dace54:
      local_88 = param_2;
      apWStack_80[0] = pWVar4;
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    local_88 = param_2;
    apWStack_80[0] = pWVar4;
    (**(code **)(*plVar2 + 0x30))(plVar2,apWStack_80,&local_88);
  }
  EventFocus::EventFocus((EventFocus *)apWStack_80,pWVar4,param_2);
  lVar3 = Director::getInstance();
  EventDispatcher::dispatchEvent(*(EventDispatcher **)(lVar3 + 0xb0),(Event *)apWStack_80);
  this = (Widget *)Event::~Event((Event *)apWStack_80);
LAB_00dace1c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

