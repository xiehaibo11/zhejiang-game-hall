
/* cocos2d::ui::VBox::~VBox() */

void __thiscall cocos2d::ui::VBox::~VBox(VBox *this)

{
  Layout::~Layout((Layout *)this);
  operator_delete(this);
  return;
}

