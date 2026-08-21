
/* cocos2d::Camera::createPerspective(float, float, float, float) */

Camera * cocos2d::Camera::createPerspective(float param_1,float param_2,float param_3,float param_4)

{
  Camera *this;
  
  this = operator_new(0x4d0,(nothrow_t *)&std::nothrow);
  if (this != (Camera *)0x0) {
    Camera(this);
    *(float *)(this + 0x410) = param_1;
    *(float *)(this + 0x41c) = param_2;
    *(float *)(this + 0x420) = param_3;
    *(float *)(this + 0x424) = param_4;
    Mat4::createPerspective(param_1,param_2,param_3,param_4,(Mat4 *)(this + 0x300));
    this[0x428] = (Camera)0x1;
    this[0x494] = (Camera)0x1;
    *(undefined4 *)(this + 0x40c) = 1;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

