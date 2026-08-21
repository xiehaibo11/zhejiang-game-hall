
/* cocos2d::ui::TabControl::deactiveTabItem(cocos2d::ui::TabControl::CellContainer*) */

void __thiscall cocos2d::ui::TabControl::deactiveTabItem(TabControl *this,CellContainer *param_1)

{
  if (param_1 != (CellContainer *)0x0) {
    (**(code **)(**(long **)param_1 + 0x18))(*(long **)param_1,0xfffffffe);
    (**(code **)(**(long **)param_1 + 0x80))(0x3f800000);
    (**(code **)(**(long **)param_1 + 0x680))(*(long **)param_1,0);
    (**(code **)(**(long **)(param_1 + 8) + 0x170))(*(long **)(param_1 + 8),0);
    this[0x310] = (TabControl)0x1;
  }
  return;
}

