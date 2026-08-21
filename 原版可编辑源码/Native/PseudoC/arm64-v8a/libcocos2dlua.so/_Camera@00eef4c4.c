
/* cocos2d::Camera::~Camera() */

void __thiscall cocos2d::Camera::~Camera(Camera *this)

{
  *(undefined ***)this = &PTR__Camera_016fab08;
  if (*(Ref **)(this + 0x4b0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x4b0));
    *(undefined8 *)(this + 0x4b0) = 0;
  }
  if (*(Ref **)(this + 0x498) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x498));
  }
  Mat4::~Mat4((Mat4 *)(this + 0x3c0));
  Mat4::~Mat4((Mat4 *)(this + 0x380));
  Mat4::~Mat4((Mat4 *)(this + 0x340));
  Mat4::~Mat4((Mat4 *)(this + 0x300));
  Node::~Node((Node *)this);
  return;
}

