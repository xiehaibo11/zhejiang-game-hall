
/* cocos2d::ui::Widget::~Widget() */

void __thiscall cocos2d::ui::Widget::~Widget(Widget *this)

{
  ~Widget(this);
  operator_delete(this);
  return;
}

