
/* cocos2d::extension::Control::~Control() */

void __thiscall cocos2d::extension::Control::~Control(Control *this)

{
  ~Control(this);
  operator_delete(this);
  return;
}

