
/* cocos2d::ui::Layout::checkFocusEnabledChild() const */

undefined8 __thiscall cocos2d::ui::Layout::checkFocusEnabledChild(Layout *this)

{
  long *plVar1;
  long lVar2;
  Widget *this_00;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x178);
  plVar1 = *(long **)(this + 0x180);
  if (plVar5 == plVar1) {
LAB_00db16cc:
    uVar4 = 0;
  }
  else {
    lVar2 = *plVar5;
    if (lVar2 != 0) goto LAB_00db16a8;
    do {
      do {
        plVar5 = plVar5 + 1;
        if (plVar1 == plVar5) goto LAB_00db16cc;
        lVar2 = *plVar5;
      } while (lVar2 == 0);
LAB_00db16a8:
      this_00 = (Widget *)__dynamic_cast(lVar2,&Node::typeinfo,&Widget::typeinfo,0);
    } while ((this_00 == (Widget *)0x0) ||
            (uVar3 = Widget::isFocusEnabled(this_00), (uVar3 & 1) == 0));
    uVar4 = 1;
  }
  return uVar4;
}

