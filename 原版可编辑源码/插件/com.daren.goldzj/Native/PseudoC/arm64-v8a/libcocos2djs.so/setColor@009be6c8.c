
/* cocos2d::renderer::Camera::setColor(float, float, float, float) */

void __thiscall
cocos2d::renderer::Camera::setColor
          (Camera *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x1c) = param_1;
  *(float *)(this + 0x20) = param_2;
  *(float *)(this + 0x24) = param_3;
  *(float *)(this + 0x28) = param_4;
  return;
}

