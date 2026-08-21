
/* cocos2d::OBB::OBB() */

void __thiscall cocos2d::OBB::OBB(OBB *this)

{
  Vec3::Vec3((Vec3 *)this);
  Vec3::Vec3((Vec3 *)(this + 0xc));
  Vec3::Vec3((Vec3 *)(this + 0x18));
  Vec3::Vec3((Vec3 *)(this + 0x24));
  Vec3::Vec3((Vec3 *)(this + 0x30));
  Vec3::Vec3((Vec3 *)(this + 0x3c));
  Vec3::Vec3((Vec3 *)(this + 0x48));
  Vec3::Vec3((Vec3 *)(this + 0x54));
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

