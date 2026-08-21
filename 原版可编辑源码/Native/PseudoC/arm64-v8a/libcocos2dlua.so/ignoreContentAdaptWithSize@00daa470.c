
/* cocos2d::ui::Widget::ignoreContentAdaptWithSize(bool) */

void __thiscall cocos2d::ui::Widget::ignoreContentAdaptWithSize(Widget *this,bool param_1)

{
  long lVar1;
  Widget *pWVar2;
  long lVar3;
  Widget aWStack_30 [8];
  long local_28;
  
  pWVar2 = aWStack_30;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x381] == (Widget)0x0) {
    if (this[0x387] == (Widget)param_1) goto LAB_00daa4ac;
    this[0x387] = (Widget)param_1;
    if (!param_1) goto LAB_00daa498;
    (**(code **)(*(long *)this + 0x610))(aWStack_30,this);
    lVar3 = *(long *)this;
  }
  else {
LAB_00daa498:
    lVar3 = *(long *)this;
    pWVar2 = this + 0x39c;
  }
  (**(code **)(lVar3 + 0x160))(this,pWVar2);
LAB_00daa4ac:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

