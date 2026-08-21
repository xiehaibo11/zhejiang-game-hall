
/* cocos2d::Camera::Camera() */

void __thiscall cocos2d::Camera::Camera(Camera *this)

{
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined ***)this = &PTR__Camera_016fab08;
  Mat4::Mat4((Mat4 *)(this + 0x300));
  Mat4::Mat4((Mat4 *)(this + 0x340));
  Mat4::Mat4((Mat4 *)(this + 0x380));
  Mat4::Mat4((Mat4 *)(this + 0x3c0));
  Vec3::Vec3((Vec3 *)(this + 0x400));
  *(undefined2 *)(this + 0x428) = 1;
  *(undefined4 *)(this + 0x42c) = 1;
  Plane::Plane((Plane *)(this + 0x430));
  Plane::Plane((Plane *)(this + 0x440));
  Plane::Plane((Plane *)(this + 0x450));
  Plane::Plane((Plane *)(this + 0x460));
  Plane::Plane((Plane *)(this + 0x470));
  Plane::Plane((Plane *)(this + 0x480));
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined2 *)(this + 0x490) = 1;
  *(undefined2 *)(this + 0x494) = 0xff01;
  experimental::Viewport::Viewport((Viewport *)(this + 0x4a0));
  *(undefined8 *)(this + 0x4b0) = 0;
  this[0x490] = (Camera)0x1;
  return;
}

