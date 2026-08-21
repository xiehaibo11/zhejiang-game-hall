
/* cocos2d::CameraBackgroundColorBrush::~CameraBackgroundColorBrush() */

void __thiscall
cocos2d::CameraBackgroundColorBrush::~CameraBackgroundColorBrush(CameraBackgroundColorBrush *this)

{
  CameraBackgroundDepthBrush::~CameraBackgroundDepthBrush((CameraBackgroundDepthBrush *)this);
  operator_delete(this);
  return;
}

