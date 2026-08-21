
/* cocos2d::ui::Widget::findNextFocusedWidget(cocos2d::ui::Widget::FocusDirection,
   cocos2d::ui::Widget*) */

Widget * __thiscall
cocos2d::ui::Widget::findNextFocusedWidget(Widget *this,undefined4 param_2,Widget *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  Widget *pWVar4;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x370);
  if (plVar2 != (long *)0x0) {
    local_3c = param_2;
    lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_3c);
    if (lVar3 != 0) {
      plVar2 = *(long **)(this + 0x370);
      if (plVar2 == (long *)0x0) {
        local_3c = param_2;
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      local_3c = param_2;
      param_3 = (Widget *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_3c);
                    /* catch() { ... } // from try @ 00dacbfc with catch @ 00dacc78 */
      dispatchFocusEvent(param_3,this,param_3);
      goto LAB_00dacd34;
    }
  }
  if ((this[0x414] != (Widget)0x0) ||
     ((param_3 != (Widget *)0x0 &&
      (lVar3 = __dynamic_cast(param_3,&typeinfo,&Layout::typeinfo,0), lVar3 != 0)))) {
    lVar3 = (**(code **)(*(long *)this + 0x260))(this);
    if ((lVar3 == 0) ||
       (pWVar4 = (Widget *)__dynamic_cast(lVar3,&Node::typeinfo,&Layout::typeinfo,0),
       pWVar4 == (Widget *)0x0)) {
      if ((param_3 == (Widget *)0x0) ||
         (lVar3 = __dynamic_cast(param_3,&typeinfo,&Layout::typeinfo,0), lVar3 == 0))
      goto LAB_00dacd34;
      lVar3 = *(long *)param_3;
      pWVar4 = param_3;
    }
    else {
      lVar3 = *(long *)pWVar4;
    }
    param_3 = (Widget *)(**(code **)(lVar3 + 0x618))(pWVar4,param_2,param_3);
  }
LAB_00dacd34:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

