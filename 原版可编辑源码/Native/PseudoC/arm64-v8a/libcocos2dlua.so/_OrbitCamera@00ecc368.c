
/* cocos2d::OrbitCamera::~OrbitCamera() */

void __thiscall cocos2d::OrbitCamera::~OrbitCamera(OrbitCamera *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

