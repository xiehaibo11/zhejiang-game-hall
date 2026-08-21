
/* cocos2d::Camera::initOrthographic(float, float, float, float) */

undefined8 __thiscall
cocos2d::Camera::initOrthographic
          (Camera *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x414) = param_1;
  *(float *)(this + 0x418) = param_2;
  *(float *)(this + 0x420) = param_3;
  *(float *)(this + 0x424) = param_4;
  Mat4::createOrthographicOffCenter(0.0,param_1,0.0,param_2,param_3,param_4,(Mat4 *)(this + 0x300));
  this[0x428] = (Camera)0x1;
  this[0x494] = (Camera)0x1;
  *(undefined4 *)(this + 0x40c) = 2;
  return 1;
}

