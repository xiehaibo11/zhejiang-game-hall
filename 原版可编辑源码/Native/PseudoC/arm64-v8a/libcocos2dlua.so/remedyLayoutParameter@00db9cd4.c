
/* cocos2d::ui::PageView::remedyLayoutParameter(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::PageView::remedyLayoutParameter(PageView *this,Widget *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x168))();
  (**(code **)(*(long *)param_1 + 0x160))(param_1,uVar1);
  ListView::remedyLayoutParameter((ListView *)this,param_1);
  return;
}

