
void FUN_00ef1e64(long param_1)

{
  CameraBackgroundDepthBrush *this;
  
  this = *(CameraBackgroundDepthBrush **)(param_1 + 8);
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  cocos2d::CameraBackgroundDepthBrush::initBuffer(this);
  return;
}

