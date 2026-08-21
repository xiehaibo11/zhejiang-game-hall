
/* cocos2d::ui::TabControl::activeTabItem(cocos2d::ui::TabControl::CellContainer*) */

void __thiscall cocos2d::ui::TabControl::activeTabItem(TabControl *this,CellContainer *param_1)

{
  if (param_1 != (CellContainer *)0x0) {
    (**(code **)(**(long **)param_1 + 0x18))(*(long **)param_1,0xffffffff);
    (**(code **)(**(long **)param_1 + 0x80))(*(float *)(this + 0x544) + 1.0);
    (**(code **)(**(long **)param_1 + 0x680))(*(long **)param_1,1);
    (**(code **)(**(long **)(param_1 + 8) + 0x170))(*(long **)(param_1 + 8),1);
    this[0x310] = (TabControl)0x1;
  }
  return;
}

