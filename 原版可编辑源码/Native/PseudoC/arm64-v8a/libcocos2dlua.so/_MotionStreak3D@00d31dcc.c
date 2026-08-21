
/* cocos2d::MotionStreak3D::~MotionStreak3D() */

void __thiscall cocos2d::MotionStreak3D::~MotionStreak3D(MotionStreak3D *this)

{
  *(undefined ***)this = &PTR__MotionStreak3D_016d3610;
  *(undefined ***)(this + 0x2f8) = &PTR__MotionStreak3D_016d3b70;
  if (*(Ref **)(this + 0x308) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x308));
  }
  if (*(void **)(this + 0x358) != (void *)0x0) {
    free(*(void **)(this + 0x358));
    *(undefined8 *)(this + 0x358) = 0;
  }
  if (*(void **)(this + 0x350) != (void *)0x0) {
    free(*(void **)(this + 0x350));
    *(undefined8 *)(this + 0x350) = 0;
  }
  if (*(void **)(this + 0x360) != (void *)0x0) {
    free(*(void **)(this + 0x360));
    *(undefined8 *)(this + 0x360) = 0;
  }
  if (*(void **)(this + 0x368) != (void *)0x0) {
    free(*(void **)(this + 0x368));
    *(undefined8 *)(this + 0x368) = 0;
  }
  if (*(void **)(this + 0x370) != (void *)0x0) {
    free(*(void **)(this + 0x370));
    *(undefined8 *)(this + 0x370) = 0;
  }
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x380));
  Node::~Node((Node *)this);
  return;
}

