
/* cocos2d::Camera::~Camera() */

void __thiscall cocos2d::Camera::~Camera(Camera *this)

{
  ~Camera(this);
  operator_delete(this);
  return;
}

