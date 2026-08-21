
/* cocos2d::ui::Widget::onSizeChanged() */

void __thiscall cocos2d::ui::Widget::onSizeChanged(Widget *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  Widget *this_00;
  Size *pSVar5;
  Size aSStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (this[0x380] == (Widget)0x0) {
    plVar3 = (long *)(**(code **)(*(long *)this + 0x240))();
    plVar1 = (long *)*plVar3;
    plVar3 = (long *)plVar3[1];
    if (plVar1 != plVar3) {
      lVar4 = *plVar1;
      while( true ) {
        if ((lVar4 != 0) &&
           (this_00 = (Widget *)__dynamic_cast(lVar4,&Node::typeinfo,&typeinfo,0),
           this_00 != (Widget *)0x0)) {
          pSVar5 = (Size *)(**(code **)(**(long **)(this_00 + 400) + 0x168))();
          Size::Size(aSStack_50,pSVar5);
          updateSizeAndPosition(this_00,aSStack_50);
        }
        plVar1 = plVar1 + 1;
        if (plVar3 == plVar1) break;
        lVar4 = *plVar1;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

