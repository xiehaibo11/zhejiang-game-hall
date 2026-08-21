
/* cocostudio::Bone::~Bone() */

void __thiscall cocostudio::Bone::~Bone(Bone *this)

{
  *(undefined ***)this = &PTR__Bone_016c8368;
  if (*(long **)(this + 0x330) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x330) + 8))();
  }
  *(undefined8 *)(this + 0x330) = 0;
  if (*(long **)(this + 0x328) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x328) + 8))();
  }
  *(undefined8 *)(this + 0x328) = 0;
  if (*(long **)(this + 0x310) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x310) + 8))();
  }
  *(undefined8 *)(this + 0x310) = 0;
  if (*(long **)(this + 0x388) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x388) + 8))();
  }
  *(undefined8 *)(this + 0x388) = 0;
  if (*(Ref **)(this + 0x2f8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x2f8));
    *(undefined8 *)(this + 0x2f8) = 0;
  }
  if (*(Ref **)(this + 0x308) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x308));
  }
  cocos2d::Mat4::~Mat4((Mat4 *)(this + 0x344));
  cocos2d::Node::~Node((Node *)this);
  return;
}

