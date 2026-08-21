
/* cocos2d::ui::Widget::getWidgetParent() */

void __thiscall cocos2d::ui::Widget::getWidgetParent(Widget *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x260))();
  if (lVar1 != 0) {
    __dynamic_cast(lVar1,&Node::typeinfo,&typeinfo,0);
    return;
  }
  return;
}

