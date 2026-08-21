
/* cocos2d::ui::Layout::isWidgetAncestorSupportLoopFocus(cocos2d::ui::Widget*,
   cocos2d::ui::Widget::FocusDirection) const */

undefined8 __thiscall
cocos2d::ui::Layout::isWidgetAncestorSupportLoopFocus
          (undefined8 param_1_00,long *param_1,uint param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x260))(param_1);
  if (lVar2 != 0) {
    do {
      plVar3 = (long *)__dynamic_cast(lVar2,&Node::typeinfo,&typeinfo,0);
      if (plVar3 == (long *)0x0) {
        return 0;
      }
      if (*(char *)((long)plVar3 + 0x7b2) != '\0') {
        iVar1 = (**(code **)(*plVar3 + 0x698))(plVar3);
        if (iVar1 == 1) {
          if ((param_3 | 1) == 3) {
            return 1;
          }
        }
        else {
          if (iVar1 != 2) {
            return 0;
          }
          if (param_3 < 2) {
            return 1;
          }
        }
      }
      lVar2 = (**(code **)(*plVar3 + 0x260))(plVar3);
    } while (lVar2 != 0);
  }
  return 0;
}

