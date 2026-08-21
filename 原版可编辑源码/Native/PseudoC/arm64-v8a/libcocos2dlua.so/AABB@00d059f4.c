
/* cocos2d::AABB::AABB() */

void __thiscall cocos2d::AABB::AABB(AABB *this)

{
  Vec3::Vec3((Vec3 *)this);
  Vec3::Vec3((Vec3 *)(this + 0xc));
  *(undefined8 *)(this + 8) = 0xc7c34f8047c34f80;
  *(undefined8 *)this = 0x47c34f8047c34f80;
  *(undefined8 *)(this + 0x10) = 0xc7c34f80c7c34f80;
  return;
}

