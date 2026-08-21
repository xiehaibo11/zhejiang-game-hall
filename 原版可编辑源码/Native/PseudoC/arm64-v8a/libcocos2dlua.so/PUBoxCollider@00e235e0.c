
/* cocos2d::PUBoxCollider::PUBoxCollider() */

void __thiscall cocos2d::PUBoxCollider::PUBoxCollider(PUBoxCollider *this)

{
  PUBaseCollider::PUBaseCollider((PUBaseCollider *)this);
  *(undefined8 *)(this + 0xcc) = 0;
  *(undefined8 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 200) = 0x42c80000;
  *(undefined ***)this = &PTR__PUBoxCollider_016eed90;
  *(undefined8 *)(this + 0xc0) = 0x42c8000042c80000;
  *(undefined8 *)(this + 0xd4) = 0;
  AABB::AABB((AABB *)(this + 0xe4));
  Vec3::Vec3((Vec3 *)(this + 0xfc));
  this[0x108] = (PUBoxCollider)0x0;
  return;
}

