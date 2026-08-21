
/* cocos2d::ActionCamera::~ActionCamera() */

void __thiscall cocos2d::ActionCamera::~ActionCamera(ActionCamera *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

