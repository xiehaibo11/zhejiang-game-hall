
void FUN_00ef1ef8(long param_1)

{
  CameraBackgroundSkyBoxBrush *this;
  
  this = *(CameraBackgroundSkyBoxBrush **)(param_1 + 8);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  cocos2d::CameraBackgroundSkyBoxBrush::initBuffer(this);
  return;
}

