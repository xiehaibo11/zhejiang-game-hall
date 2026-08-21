
/* cocos2d::CameraBackgroundColorBrush::drawBackground(cocos2d::Camera*) */

void cocos2d::CameraBackgroundColorBrush::drawBackground(Camera *param_1)

{
  GL::blendFunc(0x302,0x303);
  CameraBackgroundDepthBrush::drawBackground(param_1);
  return;
}

