
/* AppDelegate::~AppDelegate() */

void __thiscall AppDelegate::~AppDelegate(AppDelegate *this)

{
  cocos2d::Application::~Application((Application *)this);
  operator_delete(this);
  return;
}

