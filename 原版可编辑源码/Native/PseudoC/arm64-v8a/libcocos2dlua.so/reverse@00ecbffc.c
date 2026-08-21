
/* cocos2d::ActionCamera::reverse() const */

void __thiscall cocos2d::ActionCamera::reverse(ActionCamera *this)

{
  ReverseTime::create((FiniteTimeAction *)this);
  return;
}

